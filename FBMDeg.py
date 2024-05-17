import logging
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray, String
import json
import time
from epos import eposClass_test

# Configure the logger for motor positions
motor_logger = logging.getLogger('motor_logger')
motor_logger.setLevel(logging.INFO)
motor_handler = logging.FileHandler('/home/sam/exo_repo/ROB8-Project2/Motor_log_Position.log', mode='a')
motor_handler.setFormatter(logging.Formatter('%(asctime)s - %(message)s', datefmt='%Y-%m-%d %H:%M:%S'))
motor_logger.addHandler(motor_handler)

# Configure the logger for load cells data
load_cells_logger = logging.getLogger('load_cells_logger')
load_cells_logger.setLevel(logging.INFO)
load_cells_handler = logging.FileHandler('/home/sam/exo_repo/ROB8-Project2/Load_cells_log.log', mode='a')
load_cells_handler.setFormatter(logging.Formatter('%(asctime)s - %(message)s', datefmt='%Y-%m-%d %H:%M:%S'))
load_cells_logger.addHandler(load_cells_handler)

# Configure the logger for velocity commands
velocity_logger = logging.getLogger('velocity_logger')
velocity_logger.setLevel(logging.INFO)
velocity_handler = logging.FileHandler('/home/sam/exo_repo/ROB8-Project2/Motor_log_Velocity.log', mode='a')
velocity_handler.setFormatter(logging.Formatter('%(asctime)s - %(message)s', datefmt='%Y-%m-%d %H:%M:%S'))
velocity_logger.addHandler(velocity_handler)

# Ensure the header for load cells log file is only written once
if not open('/home/sam/exo_repo/ROB8-Project2/Load_cells_log.log').read(1):
    with open('/home/sam/exo_repo/ROB8-Project2/Load_cells_log.log', 'a') as file:
        file.write("load_cell_1+2 , load_cell_3+4\n")

class MotorController(Node):
    def __init__(self, epos_hip, epos_knee, force_based_mode=False):
        super().__init__("motor_controller")
        self.motor_hip = epos_hip
        self.motor_knee = epos_knee
        self.force_based_mode = force_based_mode

        # Calibration and threshold
        self.zero_force_hip = 0  # Adjust based on calibration
        self.zero_force_knee = 0  # Adjust based on calibration
        self.hip_force_threshold = 50  # Forces below this value are considered as zero for hip
        self.knee_force_threshold = 50  # Forces below this value are considered as zero for knee

        # Target positions
        self.target_position_hip = 0
        self.target_position_knee = 0
        self.lock_duration = 3
        self.hip_velocity_scale = 1
        self.knee_velocity_scale = 1

        # Tolerance for target positions
        self.position_tolerance = 1.0  # Tolerance in degrees

        # Setup subscribers for both force data and mode changes
        self.force_subscription = self.create_subscription(
            Float32MultiArray, 'serial_data', self.force_callback, 10)
        self.mode_subscription = self.create_subscription(
            String, 'exerciseAvail', self.mode_callback, 10)

        # Activate velocity mode for both motors
        self.motor_hip.activateVelMode()
        self.motor_knee.activateVelMode()

    def mode_callback(self, msg):
        data = json.loads(msg.data)
        if 'mode' in data and data['mode'] == 'force-based':
            self.force_based_mode = data['active']
            print(f"Force-based mode set to {self.force_based_mode}")

    def force_callback(self, msg):
        if not self.force_based_mode:
            return
        serial_data = msg.data
        load_cell_1 = serial_data[0]
        load_cell_2 = serial_data[1]
        load_cell_3 = serial_data[2]
        load_cell_4 = serial_data[3]
        sum_force_hip = (load_cell_1 + load_cell_2)  - self.zero_force_hip
        sum_force_knee = (load_cell_3 + load_cell_4) - self.zero_force_knee

        print(f"Sum Force Hip: {sum_force_hip}, Sum Force Knee: {sum_force_knee}")

        load_cells_logger.info(f"{load_cell_1 + load_cell_2:.4f} , {load_cell_3 + load_cell_4:.4f}")

        # Only move if the force is above the threshold
        if abs(sum_force_hip) < self.hip_force_threshold:
            sum_force_hip = 0
        if abs(sum_force_knee) < self.knee_force_threshold:
            sum_force_knee = 0

        self.move_from_force(sum_force_hip, sum_force_knee)

    def move_from_force(self, sum_force_hip, sum_force_knee):
        max_velocity_hip = 500  # Max speed for hip motor
        max_velocity_knee = 500  # Max speed for knee motor
        scale_hip = self.hip_velocity_scale
        scale_knee = self.knee_velocity_scale

        current_position_hip = self.motor_hip.get_position_Degree()
        current_position_knee = self.motor_knee.get_position_Degree()

        print(f"Current Position Hip: {current_position_hip}, Current Position Knee: {current_position_knee}")

        motor_logger.info(f"motor0_position:{-current_position_hip:.4f} , motor1_position:{current_position_knee:.4f}")

        desired_velocity_hip = 0
        desired_velocity_knee = 0

        # Move hip motor to target position
        if abs(self.target_position_hip - current_position_hip) > self.position_tolerance:
            if current_position_hip < self.target_position_hip:
                desired_velocity_hip = int(scale_hip * abs(sum_force_hip))
                velocity_command_hip = min(desired_velocity_hip, max_velocity_hip)
            elif current_position_hip > self.target_position_hip:
                desired_velocity_hip = int(-scale_hip * abs(sum_force_hip))
                velocity_command_hip = max(desired_velocity_hip, -max_velocity_hip)
            else:
                velocity_command_hip = 0
        else:
            velocity_command_hip = 0

        # Move knee motor to target position
        if abs(self.target_position_knee - current_position_knee) > self.position_tolerance:
            if current_position_knee < self.target_position_knee:
                desired_velocity_knee = int(scale_knee * abs(sum_force_knee))
                velocity_command_knee = min(desired_velocity_knee, max_velocity_knee)
            elif current_position_knee > self.target_position_knee:
                desired_velocity_knee = int(-scale_knee * abs(sum_force_knee))
                velocity_command_knee = max(desired_velocity_knee, -max_velocity_knee)
            else:
                velocity_command_knee = 0
        else:
            velocity_command_knee = 0

        # Convert desired_velocity from encoder ticks to degrees per second (dps)
        degrees_per_tick = 360.0 / 4096  # Change ticks per revolution
        hip_dps = desired_velocity_hip * degrees_per_tick
        knee_dps = desired_velocity_knee * degrees_per_tick

        print(f"hip_dps: {hip_dps}")
        print(f"knee_dps: {knee_dps}")

        velocity_logger.info(f"hip_dps:{hip_dps:.4f} , knee_dps:{knee_dps:.4f}")

        self.motor_hip.moveVelocity(velocity_command_hip)
        self.motor_knee.moveVelocity(velocity_command_knee)

        if velocity_command_hip == 0 and velocity_command_knee == 0:
            self.hold_position()

    def hold_position(self):
        print("Holding position...")
        end_time = time.monotonic() + self.lock_duration
        while time.monotonic() < end_time:
            self.motor_hip.moveVelocity(0)
            self.motor_knee.moveVelocity(0)
            time.sleep(0.1)
        print("Position held for 3 seconds")
        self.release_motors()

    def release_motors(self):
        print("Releasing motors...")
        self.motor_hip.moveVelocity(0)
        self.motor_knee.moveVelocity(0)
        print("Motors released")

    def move_and_lock_motors(self, hip_position, knee_position, hip_velocity_scale, knee_velocity_scale, lock_duration, hip_force_threshold, knee_force_threshold):
        self.target_position_hip = hip_position
        self.target_position_knee = knee_position
        self.hip_velocity_scale = hip_velocity_scale
        self.knee_velocity_scale = knee_velocity_scale
        self.lock_duration = lock_duration
        self.hip_force_threshold = hip_force_threshold
        self.knee_force_threshold = knee_force_threshold
        print(f"Set target positions - Hip: {hip_position} degrees, Knee: {knee_position} degrees")
        print(f"Set velocity scales - Hip: {hip_velocity_scale}, Knee: {knee_velocity_scale}")
        print(f"Set force thresholds - Hip: {hip_force_threshold}, Knee: {knee_force_threshold}")
        print(f"Set lock duration: {lock_duration} seconds")
        
        # Automatically activate force-based mode
        self.force_based_mode = True
        print("Force-based mode activated.")

def main(args=None):
    rclpy.init(args=args)
    epos_hip = eposClass_test.epos("USB0", 1, True)
    epos_knee = eposClass_test.epos("USB1", 3, True)
    global motor_controller
    motor_controller = MotorController(epos_hip, epos_knee, True)
    
    rclpy.spin(motor_controller)
    rclpy.shutdown()

if __name__ == "__main__":
    main()

