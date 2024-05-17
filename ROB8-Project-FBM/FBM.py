import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray, String
import json
from epos import eposClass_test

class MotorController(Node):
    def __init__(self, epos_hip, epos_thigh, force_based_mode=False):
        super().__init__("motor_controller")
        self.motor_hip = epos_hip
        self.motor_thigh = epos_thigh
        self.force_based_mode = force_based_mode

        # Calibration and threshold
        self.zero_force_hip = 0  # Adjust based on calibration
        self.zero_force_thigh = 0  # Adjust based on calibration
        self.force_threshold = 5  # Forces below this value are considered as zero

        # Setup subscribers for both force data and mode changes
        self.force_subscription = self.create_subscription(
            Float32MultiArray, 'serial_data', self.force_callback, 10)
        self.mode_subscription = self.create_subscription(
            String, 'exerciseAvail', self.mode_callback, 10)

        # Activate velocity mode for both motors
        self.motor_hip.activateVelMode()
        self.motor_thigh.activateVelMode()

    def mode_callback(self, msg):
        data = json.loads(msg.data)
        if 'mode' in data and data['mode'] == 'force-based':
            self.force_based_mode = data['active']
            print(f"Force-based mode set to {self.force_based_mode}")

    def force_callback(self, msg):
        if not self.force_based_mode:
            return
        serial_data = msg.data
        average_force_hip = (serial_data[0] + serial_data[1]) / 2 - self.zero_force_hip
        average_force_thigh = (serial_data[2] + serial_data[3]) / 2 - self.zero_force_thigh

        # Only move if the force is above the threshold
        if abs(average_force_hip) < self.force_threshold:
            average_force_hip = 0
        if abs(average_force_thigh) < self.force_threshold:
            average_force_thigh = 0

        self.move_from_force(average_force_hip, average_force_thigh)

    def move_from_force(self, average_force_hip, average_force_thigh):
        max_velocity_hip = 500
        max_velocity_thigh = 800
        scale_hip = 10
        scale_thigh = 10

        velocity_command_hip = int(-average_force_hip * scale_hip)
        velocity_command_thigh = int(-average_force_thigh * scale_thigh)

        self.motor_hip.moveVelocity(velocity_command_hip)
        self.motor_thigh.moveVelocity(velocity_command_thigh)

        print(f"Hip Velocity: {velocity_command_hip}, Knee Velocity: {velocity_command_thigh}")

def main(args=None):
    rclpy.init(args=args)
    epos_hip = eposClass_test.epos("USB0", 1, True)
    epos_thigh = eposClass_test.epos("USB1", 3, True)
    motor_controller = MotorController(epos_hip, epos_thigh, True)
    rclpy.spin(motor_controller)
    rclpy.shutdown()

if __name__ == "__main__":
    main()

