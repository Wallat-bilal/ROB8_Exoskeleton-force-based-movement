#!/usr/bin/env python3
import rospy
from epos_controller.msg import HallSensorStates

def motor1_sensor_data_callback(data):
    rospy.loginfo("Motor 1 - Hall States: %s, %s, %s", data.hall_state_a, data.hall_state_b, data.hall_state_c)

def motor2_sensor_data_callback(data):
    rospy.loginfo("Motor 2 - Hall States: %s, %s, %s", data.hall_state_a, data.hall_state_b, data.hall_state_c)

def sensor_data_listener():
    rospy.init_node('sensor_data_listener', anonymous=True)
    rospy.Subscriber("motor1_sensor_data", HallSensorStates, motor1_sensor_data_callback)
    rospy.Subscriber("motor2_sensor_data", HallSensorStates, motor2_sensor_data_callback)
    rospy.spin()

if __name__ == '__main__':
    sensor_data_listener()