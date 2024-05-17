#!/usr/bin/env python3
from ctypes import *
from epos_controller.msg import HallSensorStates
import rospy

class MotorController:
    def __init__(self, node_ids, output, motor_position_publisher, motor1_sensor_data_publisher, motor2_sensor_data_publisher):
        self.node_ids = node_ids
        self.output = output
        self.motor_position_publisher = motor_position_publisher
        self.motor1_sensor_data_publisher = motor1_sensor_data_publisher
        self.motor2_sensor_data_publisher = motor2_sensor_data_publisher

        # Import Epos Command Library
        path = "/opt/EposCmdLib_6.8.1.0/lib/x86_64/libEposCmd.so.6.8.1.0"
        self.epos = CDLL(path)

        # Define return variables from Library Functions
        self.pErrorCode = c_uint()
        self.pDeviceErrorCode = c_uint()

        # Define a variable NodeID and configure connection
        self.baudrate = 1000000
        self.timeout = 500
        self.key_handles = [None] * len(node_ids)

        # Define motion profile
        self.acceleration = 300  # rpm/s   up to 1e7 is possible
        self.deceleration = 300  # rpm/s


    def move_motor_to_position(self, key_handle, node_id, target_position):
        self.epos.VCS_SetPositionProfile(key_handle, node_id, 2000, self.acceleration, self.deceleration, byref(self.pErrorCode))  # set profile parameters
        self.epos.VCS_MoveToPosition(key_handle, node_id, target_position, True, True, byref(self.pErrorCode))  # move to position
        true_position = self.get_position_is(key_handle, node_id)
        while true_position != target_position:
            true_position = self.get_position_is(key_handle, node_id)


    def move_both_motors_n_times(self, target_position, n_times):
        for _ in range(n_times):
            for i, node_id in enumerate(self.node_ids):
                key_handle = self.key_handles[i]
                self.move_motor_to_position(key_handle, node_id, target_position)
                rospy.sleep(2)  # Sleep for a while between each movement


    def get_position_is(self, key_handle, node_id):
        pPositionIs = c_long()
        ret = self.epos.VCS_GetPositionIs(key_handle, node_id, byref(pPositionIs), byref(self.pErrorCode))
        return pPositionIs.value  # motor steps

    def get_hall_states(self, key_handle, node_id):
        pDigitalInputState = c_ushort()
        ret = self.epos.VCS_GetAllDigitalInputs(key_handle, node_id, byref(pDigitalInputState), byref(self.pErrorCode))

        hall_state_a = bool(pDigitalInputState.value & (1 << 0))  # Extract the first bit
        hall_state_b = bool(pDigitalInputState.value & (1 << 1))  # Extract the second bit
        hall_state_c = bool(pDigitalInputState.value & (1 << 2))  # Extract the third bit

        return hall_state_a, hall_state_b, hall_state_c
    

    def publish_sensor_data(self):
        rate = rospy.Rate(10)  # 10 Hz
        while not rospy.is_shutdown():
            for i, node_id in enumerate(self.node_ids):
                key_handle = self.key_handles[i]
                hall_state_a, hall_state_b, hall_state_c = self.get_hall_states(key_handle, node_id)

                hall_sensor_msg = HallSensorStates()
                hall_sensor_msg.header.stamp = rospy.Time.now()
                hall_sensor_msg.hall_state_a = hall_state_a
                hall_sensor_msg.hall_state_b = hall_state_b
                hall_sensor_msg.hall_state_c = hall_state_c

                if i == 0:
                    self.motor1_sensor_data_publisher.publish(hall_sensor_msg)
                elif i == 1:
                    self.motor2_sensor_data_publisher.publish(hall_sensor_msg)

            rate.sleep()
  
    
    def setup(self):
        for i, node_id in enumerate(self.node_ids):
            self.key_handles[i] = self.epos.VCS_OpenDevice(
                b'EPOS4', b'MAXON SERIAL V2', b'USB', 'USB{}'.format(i).encode(), byref(self.pErrorCode)
            )
            key_handle = self.key_handles[i]
            self.epos.VCS_SetProtocolStackSettings(key_handle, self.baudrate, self.timeout, byref(self.pErrorCode))
            self.epos.VCS_ClearFault(key_handle, node_id, byref(self.pErrorCode))
            self.epos.VCS_ActivateProfilePositionMode(key_handle, node_id, byref(self.pErrorCode))
            self.epos.VCS_SetEnableState(key_handle, node_id, byref(self.pErrorCode))

    def cleanup(self):
        for key_handle in self.key_handles:
            self.epos.VCS_CloseDevice(key_handle, byref(self.pErrorCode))
            self.epos.VCS_CloseAllDevices(byref(self.pErrorCode))

