import time
from epos import eposClass
epos1 = eposClass.epos("USB0", 1)
epos1.activateVelMode()
class MotorController:
    def __init__(self, motor):
        self.motor : eposClass.epos = motor
        self.pos = self.motor.getPositionDeg(False)
    def move_to_position(self, position, velocity):
        timeToGoal = velocity
        current_position = self.motor.getPositionDeg(False)
        distance = position - current_position
        direction = 1 if distance > 0 else -1
        
        # Calculate time needed to reach desired position
        #time_to_reach_target_position = abs(distance) / velocity

        # Move to the desired position
        start_time = time.monotonic()
        #elapsed_time = 0
        while True:
            elapsed_time = time.monotonic() - start_time
            time_left = timeToGoal - elapsed_time
            distance = position - self.pos
            speed = int(round((abs(distance)/time_left)*(60/360),0))
            direction = 1 if distance > 0 else -1
            self.motor.moveVelocity(direction*speed)
            self.pos = self.motor.getPositionDeg(False)
            if abs(distance) < 1:
                #print("REACHED GOAL")
                self.motor.moveVelocity(0)
                return False
        #while elapsed_time < time_to_reach_target_position:
            #elapsed_time = time.monotonic() - start_time

            # Send MoveWithVelocity command to the motor
            #self.motor.move_with_velocity(direction * velocity)

        # Stop the motor when it reaches the target position
        #self.motor.stop()

    def move(self, position, time_to_reach_position):
        current_position = self.motor.get_position()
        distance = position - current_position

        # Calculate required velocity to reach the target position in the specified time
        velocity = distance / time_to_reach_position

        # Send MoveToPosition command to the motor
        self.motor.move_to_position(velocity=velocity)

if __name__ == "__main__":
    motCon = MotorController(epos1)
    motCon.move_to_position(120, 10)
    motCon.motor.close()
