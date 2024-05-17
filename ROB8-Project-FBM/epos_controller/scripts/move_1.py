#!/usr/bin/env python3

import rospy
import threading
from ctypes import *
from std_msgs.msg import Int32
from std_srvs.srv import SetBool, SetBoolResponse
from epos_controller.msg import HallSensorStates
import sys
sys.path.append('/home/idk/ex_ws/src/epos_controller/scripts')
from motor_controller import MotorController

# Constants for moving the motor
DEGREE_INCREMENT = 30
ENCODER_INCREMENT = 300
GEAR_RATIO = 20
OUTPUT = GEAR_RATIO * ENCODER_INCREMENT
N_TIMES = 5

def handle_motor_service(req):
    global N_TIMES
    N_TIMES = req.data
    return SetBoolResponse(success=True, message="Motor will move back and forth {} times.".format(N_TIMES))

if __name__ == '__main__':
    try:
        rospy.init_node("epos_controller")
        
        motor_position_publisher = rospy.Publisher("motor_position", Int32, queue_size=10)
        motor1_sensor_data_publisher = rospy.Publisher("motor1_sensor_data", HallSensorStates, queue_size=10)
        motor2_sensor_data_publisher = rospy.Publisher("motor2_sensor_data", HallSensorStates, queue_size=10)
        motor_service = rospy.Service("move_motor", SetBool, handle_motor_service)

        motor_controller = MotorController([1, 3], OUTPUT, motor_position_publisher, motor1_sensor_data_publisher, motor2_sensor_data_publisher)

        motor_controller.setup()
        rospy.loginfo("EPOS4 motor controller is ready.")

        motor_movement_thread = threading.Thread(target=motor_controller.move_both_motors_n_times, args=(OUTPUT, N_TIMES))
        motor_movement_thread.start()

        publish_sensor_data_thread = threading.Thread(target=motor_controller.publish_sensor_data)
        publish_sensor_data_thread.start()

        rospy.spin()

    except rospy.ROSInterruptException:
        pass
    except Exception as e:
        rospy.logerr("Error occurred: %s", str(e))
    finally:
        motor_controller.cleanup()


