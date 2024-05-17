import serial
import time
from ctypes import *
import timeit
import numpy as np
from epos.DataPlotter import DataPlotter   
class epos():
    def __init__(self,usbDevice :str= "USB0", nodeID :int = 1, gearing:bool = False, path:str = '/opt/EposCmdLib_6.8.1.0/lib/x86_64/libEposCmd.so.6.8.1.0', plot:bool = False, data_num:int = 2000):
        # EPOS Command Library path
        self.loadLibrary(path)
        # Defining return variables from Library Functions
        self.ret = 0
        self.pErrorCode = c_uint()
        self.pDeviceErrorCode = c_uint()
        self.usbDevice = usbDevice
        # Defining a variable NodeID and configuring connection
        self.nodeID = nodeID
        self.baudrate = 2000000
        self.timeout = 500
        # self.currentMode = ''
        self.gearing = gearing
        # Configure desired motion profile
        self.acceleration = 300 # rpm/s, up to 1e7 would be possible
        self.deacceleration = 300 # rpm/s
        self.acceleration_DpS2 = self.acceleration * 6 # rpm/s to DpS2
        self.deacceleration_DpS2 = self.deacceleration * 6 # rpm/s to DpS2
        self.target_speed = 300 # rpm
        self.target_speed_DpS2 = self.target_speed * 6 # rpm to DpS2
        self.target_position = 0 # incremental position
        self.target_position_degree = 0 # degree
        self.counter = 0
        self.keyHandle = self.cLib.VCS_OpenDevice(b'EPOS4', b'MAXON SERIAL V2', b'USB', usbDevice.encode(), byref(self.pErrorCode)) # specify EPOS version and interface
        self.cLib.VCS_SetProtocolStackSettings(self.keyHandle, self.baudrate, self.timeout, byref(self.pErrorCode)) # set baudrate
        self.cLib.VCS_ClearFault(self.keyHandle, self.nodeID, byref(self.pErrorCode)) # clear all faults
        self.cLib.VCS_SetEnableState(self.keyHandle, self.nodeID, byref(self.pErrorCode)) # enable device
        self.plot = plot
        self.posActual = {'objectIndex': 0x6064, 'subIndex': 0x00, 'objectSize': 4}
        self.currentActual = {'objectIndex': 0x30D1, 'subIndex': 0x01, 'objectSize': 4}
        if plot:
            self.plot = DataPlotter()
        self.data_num = data_num
        self.data = np.zeros((self.data_num,3))
        self.data_current = np.zeros((1,3))
        #print("HELLO")
    def loadLibrary(self, path):
        #print(path)
        self.path = path
        cdll.LoadLibrary(self.path)
        self.cLib = CDLL(self.path)
    def init_plot(self):
        self.plot = DataPlotter()
###################### Position Mode ###################### 
    def activate_position_profile_mode(self):
        self.cLib.VCS_ActivateProfilePositionMode(self.keyHandle, self.nodeID, byref(self.pErrorCode))

    def set_position_profile(self, target_speed = None, acceleration=None, deacceleration=None): # target_speed in rpm, acceleration in rpm/s, deacceleration in rpm/s

        if acceleration is not None and deacceleration is not None:
            self.set_acceleration_profile(acceleration, deacceleration)
        else:
            acceleration = self.acceleration
            deacceleration = self.deacceleration

        if target_speed is not None:
            self.set_target_speed(target_speed)
            time.sleep(0.5)
        self.cLib.VCS_SetPositionProfile(self.keyHandle, self.nodeID, c_uint32(int(self.target_speed)), c_uint32(self.acceleration), c_uint32(self.deceleration), byref(self.pErrorCode))
    def set_position_profile_DpS(self, target_speed_DpS = None, acceleration_DpS2=None, deacceleration_DpS2=None):  # target_speed_DpS in Degree per second
        if acceleration_DpS2 is not None and deacceleration_DpS2 is not None:
            self.set_acceleration_profile_DpS2(acceleration_DpS2, deacceleration_DpS2)
        else:
            acceleration_DpS2 = self.acceleration
            deacceleration_DpS2 = self.deacceleration
        if target_speed_DpS is not None:
            self.set_target_speed_DpS(target_speed_DpS)
            # print(self.target_speed_DpS, self.target_speed, "********************************")
        else:
            target_speed_DpS = self.target_speed_DpS
        ret=self.cLib.VCS_SetPositionProfile(self.keyHandle, self.nodeID, c_uint32(int(self.target_speed)), int(self.acceleration), int(self.deacceleration), byref(self.pErrorCode))
        print(ret, "********************************", self.pErrorCode.value)
    def get_posotion_profile(self):
        pProfileVelocity = c_long()
        pProfileAcceleration = c_long()
        pProfileDeceleration = c_long()
        self.cLib.VCS_GetPositionProfile(self.keyHandle, self.nodeID, byref(pProfileVelocity), byref(pProfileAcceleration), byref(pProfileDeceleration), byref(self.pErrorCode))
        return pProfileVelocity.value, pProfileAcceleration.value, pProfileDeceleration.value
    
    def get_target_position_profile(self):
        pTargetPosition = c_long()
        self.cLib.VCS_GetTargetPosition(self.keyHandle, self.nodeID, byref(pTargetPosition), byref(self.pErrorCode))
        self.target_position = pTargetPosition.value
        return self.target_position
    def move_to_position(self, target_position = None, Absolute = True, Immediately = True): 
        if target_position is not None:
            self.set_target_position(target_position)
        else:
            target_position = self.target_position
        start = time.time()
        self.cLib.VCS_MoveToPosition(self.keyHandle, self.nodeID, self.target_position, Absolute, Immediately, byref(self.pErrorCode)) # move to position
        # while True:
        #     if time.process_time() - start > 2:
        #         break
         #print(time.process_time() - start)   
        # while True:
        #     if target_speed != 0:
        #         self.cLib.VCS_SetPositionProfile(self.keyHandle, self.nodeID, target_speed, acceleration, deceleration, byref(self.pErrorCode)) # set profile parameters
        #         start = time.process_time()
        #         self.cLib.VCS_MoveToPosition(self.keyHandle, self.nodeID, target_position, True, True, byref(self.pErrorCode)) # move to position
        #         #print(time.process_time() - start)
        #     elif target_speed == 0:
        #         epos.VCS_HaltPositionMovement(self.keyHandle, self.nodeID, byref(self.pErrorCode)) # halt motor
        #     true_position = self.GetPositionIs()
        #     if true_position == target_position:
        #         break  
        # 
        # print(round((time.time() - start) * 1000, 2) , "internal time function") 
    
    def move_to_position_degree(self, target_position_degree = None, Absolute = True, Immediately = True): # move to position (degree) with specified speed rpm    
        if target_position_degree is None:
            target_position_degree = self.target_position_degree
        else:
            self.set_target_position_degree(target_position_degree)

        self.cLib.VCS_MoveToPosition(self.keyHandle, self.nodeID, int(self.target_position), Absolute, Immediately, byref(self.pErrorCode))

    def move_to_positon_speed(self, target_position, target_speed, acceleration, deacceleration, Absolute = True, Immediately = True): # move to position (2048 increments/round) with specified speed rpm
        self.set_acceleration_profile(acceleration, deacceleration)
        self.set_target_position(target_position)
        self.set_target_speed(target_speed)
        self.cLib.VCS_SetPositionProfile(self.keyHandle, self.nodeID, self.target_speed, self.acceleration, self.deacceleration, byref(self.pErrorCode))
        self.cLib.VCS_MoveToPosition(self.keyHandle, self.nodeID, int(self.target_position), Absolute, Immediately, byref(self.pErrorCode))
    def move_to_position_speed_degree(self, target_position_degree, target_speed_DpS, acceleration_DpS2, deacceleration_DpS2, Absolute = True, Immediately = True): # move to position with specified speed degree/s
        self.set_acceleration_profile_DpS2(acceleration_DpS2, deacceleration_DpS2)
        self.set_target_position_degree(target_position_degree)
        self.set_target_speed_DpS(target_speed_DpS)
        self.cLib.VCS_SetPositionProfile(self.keyHandle, self.nodeID, self.target_speed, self.acceleration, self.deacceleration, byref(self.pErrorCode))
        self.cLib.VCS_MoveToPosition(self.keyHandle, self.nodeID, int(self.target_position), Absolute, Immediately, byref(self.pErrorCode)) 


    def set_target_position(self, target_position): # set and update target position parameters (target_position in incremental value (2048/round)). The gearing is 1:100. does NOT cause movement.
        self.target_position = target_position if not self.gearing else target_position*100
        self.target_position_degree = target_position/5.68888889 if not self.gearing else target_position*100/5.68888889 # target position_degree in degree

    def set_target_position_degree(self, target_position_degree): # set and update target position parameters (target_position_degree in degree). The gearing is 1:100. does NOT cause movement.
        self.target_position_degree = target_position_degree if not self.gearing else target_position_degree*100
        self.target_position = target_position_degree*5.68888889 if not self.gearing else target_position_degree*568.888889

    def set_target_speed(self, target_speed): # set and update target speed parameters (target_speed in rpm). The gearing is 1:100. does NOT cause movement.****** CAREFUL WHEN SELF.GEARING IS TRUE
        self.target_speed = target_speed if not self.gearing else target_speed*100
        self.target_speed_DpS = target_speed*6 if not self.gearing else target_speed*600
    def set_target_speed_DpS(self, target_speed_DpS): # set and update target speed parameters (target_speed_DpS in degree per second). The gearing is 1:100.does NOT cause movement
        self.target_speed_DpS = target_speed_DpS if not self.gearing else target_speed_DpS*100
        self.target_speed = target_speed_DpS/6 if not self.gearing else target_speed_DpS*100/6

    def set_acceleration_profile(self, acceleration, deacceleration): # set and update acceleration profile parameters (acceleration in rpm/s, deceleration in rpm/s). The gearing is 1:100. does NOT cause movement
        self.acceleration = acceleration if not self.gearing else acceleration*100
        self.deacceleration = deacceleration if not self.gearing else deacceleration*100
        self.acceleration_DpS2 = acceleration*6 if not self.gearing else acceleration*600
        self.deacceleration_DpS2 = deacceleration*6 if not self.gearing else deacceleration*600
    
    def set_acceleration_profile_DpS2(self, acceleration_DpS2, deceleration_DpS2): # set and update acceleration profile parameters (acceleration_DpS2 in degree per second squared, deceleration_DpS2 in degree per second squared). The gearing is 1:100. does NOT cause movement
        self.acceleration_DpS2 = acceleration_DpS2 if not self.gearing else acceleration_DpS2*100
        self.deacceleration_DpS2 = deceleration_DpS2 if not self.gearing else deceleration_DpS2*100
        self.acceleration = acceleration_DpS2/6 if not self.gearing else acceleration_DpS2*100/6
        self.deacceleration = deceleration_DpS2/6 if not self.gearing else deceleration_DpS2*100/6
      
    

    def get_target_position(self):
        return self.target_position , self.gearing
    def get_target_position_degree(self):
        return self.target_position_degree, self.gearing
    def get_target_speed(self):
        return self.target_speed, self.target_speed_DpS, self.gearing

    def get_acceleration_profile(self):
        return self.acceleration, self.deacceleration, self.gearing
    def get_acceleration_profile_DpS2(self):
        return self.acceleration_DpS2, self.deacceleration_DpS2
    def get_position(self): # get position in motor steps
        pPositionIs=c_int32()
        pErrorCode=c_uint()
        self.ret=self.cLib.VCS_GetPositionIs(self.keyHandle, self.nodeID, byref(pPositionIs), byref(pErrorCode))
        return pPositionIs.value if not self.gearing else pPositionIs.value/100 # motor steps

    def get_position_Degree(self): # get position in degree
        pPositionIs=c_int32()
        pErrorCode=c_uint()
        self.ret=self.cLib.VCS_GetPositionIs(self.keyHandle, self.nodeID, byref(pPositionIs), byref(pErrorCode))
        return pPositionIs.value/5.68888889 if not self.gearing else pPositionIs.value/568.888888889

    def set_enable_position_window(self, position_window, position_window_time):
        self.position_window = position_window
        self.position_window_time = position_window_time
        self.cLib.VCS_EnablePositionWindow(self.keyHandle, self.nodeID, position_window, position_window_time, byref(self.pErrorCode)) 
    def disable_position_window(self):
        self.cLib.VCS_DisablePositionWindow(self.keyHandle, self.nodeID, byref(self.pErrorCode))

    def get_Current_avg(self): # get average current
        pCurrentIs = c_int32()
        self.cLib.VCS_GetCurrentIsEx(self.keyHandle, self.nodeID, byref(pCurrentIs), byref(self.pErrorCode))
        
        return pCurrentIs.value
    def get_Current_object_avg(self): # get average current
        byte_number = 4
        pCurrentIs = c_int32()
        byte_number_read = c_uint32()
        self.ret = self.cLib.VCS_GetObject(self.keyHandle, self.nodeID, self.currentActual['objectIndex'], self.currentActual['subIndex'], byref(pCurrentIs), byte_number, byref(byte_number_read), byref(self.pErrorCode))
        return pCurrentIs.value
 
    def calculate_time_to_position(self):
        target_position, gearing= self.get_target_position_degree()
        current_position = self.get_position_Degree()
        acceleration_DpS2, deacceleration_DpS2 = self.get_acceleration_profile_DpS2()
        target_speed_DpS = self.get_target_speed()[1]
        delta_position = abs(target_position - current_position)

        time_to_position_constant_speed = (delta_position - 0.5*acceleration_DpS2*(target_speed_DpS/acceleration_DpS2)**2 - 0.5*deacceleration_DpS2*(target_speed_DpS/deacceleration_DpS2)**2)/target_speed_DpS
        time_to_position_total = (target_speed_DpS/acceleration_DpS2) + (target_speed_DpS/deacceleration_DpS2) + time_to_position_constant_speed
        return time_to_position_total
        

###################### Velocity Mode ######################

    def getVelocityUnits(self):
        pVelocityDimension = c_int()
        pVelocityNotaion = c_int()
        self.cLib.VCS_GetVelocityUnits(self.keyHandle, self.nodeID, byref(pVelocityDimension), byref(pVelocityNotaion), byref(self.pErrorCode))
        print(pVelocityDimension.value, pVelocityNotaion.value)
        return pVelocityDimension.value
    
    def getIncEncoderParameter(self):
        pEncoderResolution = c_long()
        pInversePolarity = c_int()
        self.cLib.VCS_GetIncEncoderParameter(self.keyHandle, self.nodeID, byref(pEncoderResolution), byref(pInversePolarity), byref(self.pErrorCode))
        print(pEncoderResolution.value, pInversePolarity.value)
        return pEncoderResolution.value, pInversePolarity.value

    def MoveWithVelocity(self, target_velocity):
        self.cLib.VCS_MoveWithVelocity(self.keyHandle, self.nodeID, target_velocity, byref(self.pErrorCode))
    def home(self, dir, cur = 3500):
        self.cLib.VCS_ActivateHomingMode(self.keyHandle, self.nodeID, byref(self.pErrorCode))
        self.cLib.VCS_SetHomingParameter(self.keyHandle, self.nodeID, 50, 100, 100, 0, cur, 0, byref(self.pErrorCode))
        print(self.cLib.VCS_FindHome(self.keyHandle, self.nodeID, -4+dir, byref(self.pErrorCode)))
        print(self.cLib.VCS_WaitForHomingAttained(self.keyHandle, self.nodeID, 20000, byref(self.pErrorCode)))
        print(self.cLib.VCS_FindHome(self.keyHandle, self.nodeID, 35, byref(self.pErrorCode)))
    # def getPosition(self):
    #     a = c_uint()
    #     self.cLib.VCS_GetPositionIs(self.keyHandle, self.nodeID, byref(a), byref(self.pErrorCode))
    #     return a.value

    def activateVelMode(self):
        self.cLib.VCS_ActivateVelocityMode(self.keyHandle, self.nodeID, byref(self.pErrorCode))
    def moveVelocity(self, vel):
        self.cLib.VCS_MoveWithVelocity(self.keyHandle, self.nodeID, vel, byref(self.pErrorCode))
    def haltVel(self):
        self.cLib.VCS_HaltVelocityMovement(self.keyHandle, self.nodeID, byref(self.pErrorCode))

###################### Recorder  ######################
    def setRecorderParameter(self, sampling_period, number_of_preceding_samples):
        self.cLib.VCS_SetRecorderParameter(self.keyHandle, self.nodeID, c_int16(sampling_period), c_int16(number_of_preceding_samples), byref(self.pErrorCode))
    def getRecorderParameter(self):
        sampling_period = c_int()
        number_of_samples = c_int()
        self.cLib.VCS_GetRecorderParameter(self.keyHandle, self.nodeID, byref(sampling_period), byref(number_of_samples), byref(self.pErrorCode))
        return sampling_period.value, number_of_samples.value
    def enableTrigger(self, trigger_type):
        self.cLib.VCS_EnableTrigger(self.keyHandle, self.nodeID, trigger_type, byref(self.pErrorCode))

    def activateChannelRecorder(self, channel_num, object_index = None, object_subindex = None, object_length = None):
        if object_index == None or object_subindex == None or object_length == None:
            # object_index , object_subindex, object_length = self.currentActual['objectIndex'], self.currentActual['subIndex'], self.currentActual['objectSize']
            object_index , object_subindex, object_length = self.posActual['objectIndex'], self.posActual['subIndex'], self.posActual['objectSize']
        self.cLib.VCS_ActivateChannel(self.keyHandle, self.nodeID, channel_num, object_index, object_subindex, object_length, byref(self.pErrorCode))
   
    def startRecorder(self):
        self.cLib.VCS_StartRecorder(self.keyHandle, self.nodeID, byref(self.pErrorCode))
    def stopRecorder(self):
        self.cLib.VCS_StopRecorder(self.keyHandle, self.nodeID, byref(self.pErrorCode))
    def isRecorderRunning(self):
        is_running = c_bool()
        self.cLib.VCS_IsRecorderRunning(self.keyHandle, self.nodeID, byref(is_running), byref(self.pErrorCode))
        return is_running.value
    def isRecorderTriggered(self):
        is_triggerd = c_bool()
        self.cLib.VCS_IsRecorderTriggered(self.keyHandle, self.nodeID, byref(is_triggerd), byref(self.pErrorCode))
        return is_triggerd.value
    def readChannelVectorSize(self):
        vecotor_size = c_uint()
        print(self.cLib.VCS_ReadChannelVectorSize(self.keyHandle, self.nodeID, byref(vecotor_size), byref(self.pErrorCode)))
        return vecotor_size.value
    def readChannelDataVector(self, channel_number, vector_size):
        vector_buffer_size_bytes = vector_size
        vector_buffer = (c_int * vector_buffer_size_bytes)()
        self.cLib.VCS_ReadChannelDataVector(self.keyHandle, self.nodeID, 1, byref(vector_buffer), vector_size * 4, byref(self.pErrorCode))
        return vector_buffer
    # def readDataBuffer(self, buffer_size):
    #     pDataBuffer = c_byte()
    #     BufferSizeSizeToRead = c_uint16()
########## end of recorder ##########
    def close(self):
        time.sleep(1)
        if self.plot:
            self.plot.quit()
        self.cLib.VCS_SetDisableState(self.keyHandle, self.nodeID, byref(self.pErrorCode)) # disable device
        self.cLib.VCS_CloseDevice(self.keyHandle, byref(self.pErrorCode)) # close device
    # def set_home(self, current = 350):
    def set_data_current(self, data_current):
        self.data_current = data_current
    def get_data_current(self):
        return self.data_current
    def append_data_current(self):
        self.data = np.vstack((self.data, self.data_current))
    def get_data(self):
        return self.data
####### position mode (different from position profile) #######
    def activate_position_mode(self):
        self.cLib.VCS_ActivatePositionMode(self.keyHandle, self.nodeID, byref(self.pErrorCode))
    def set_position_must(self, position):
        self.cLib.VCS_SetPositionMust(self.keyHandle, self.nodeID, position, byref(self.pErrorCode))
    def get_position_must(self):
        position = c_int32()
        self.cLib.VCS_GetPositionMust(self.keyHandle, self.nodeID, byref(position), byref(self.pErrorCode))
####### velocity mode (different from velocity profile) #######
    def activate_velocity_mode(self):
        self.cLib.VCS_ActivateVelocityMode(self.keyHandle, self.nodeID, byref(self.pErrorCode))
    def set_velocity_must(self, velocity):
        self.cLib.VCS_SetVelocityMust(self.keyHandle, self.nodeID, velocity, byref(self.pErrorCode))
    def get_velocity_must(self):
        velocity = c_int32()
        self.cLib.VCS_GetVelocityMust(self.keyHandle, self.nodeID, byref(velocity), byref(self.pErrorCode))
####### current mode  #######
    def activate_current_mode(self):
        self.cLib.VCS_ActivateCurrentMode(self.keyHandle, self.nodeID, byref(self.pErrorCode))
    def set_current_must(self, current):
        self.cLib.VCS_SetCurrentMust(self.keyHandle, self.nodeID, current, byref(self.pErrorCode))
    def get_current_mustEx(self):
        current = c_int16()
        self.cLib.VCS_GetCurrentMustEx(self.keyHandle, self.nodeID, byref(current), byref(self.pErrorCode))
####### profile velocity profile mode #######
    def activate_profile_velocity_mode(self):
        self.cLib.VCS_ActivateProfileVelocityMode(self.keyHandle, self.nodeID, byref(self.pErrorCode))      
    def set_velocity_profile(self, acceleration, deceleration):
        self.cLib.VCS_SetVelocityProfile(self.keyHandle, self.nodeID, acceleration, deceleration, byref(self.pErrorCode))
    def move_with_velocity(self, velocity):
        self.cLib.VCS_MoveWithVelocity(self.keyHandle, self.nodeID, velocity, byref(self.pErrorCode))
    def halt_velocity_movement(self):
        self.cLib.VCS_HaltVelocityMovement(self.keyHandle, self.nodeID, byref(self.pErrorCode))
    def wait_for_target_reached(self):
        self.cLib.VCS_WaitForTargetReached(self.keyHandle, self.nodeID, 10000, byref(self.pErrorCode))
###### safety functions #######
    def set_max_following_error(self, max_following_error):
        self.cLib.VCS_SetMaxFollowingError(self.keyHandle, self.nodeID, max_following_error, byref(self.pErrorCode))
    def get_max_following_error(self):
        max_following_error = c_uint32()
        self.cLib.VCS_GetMaxFollowingError(self.keyHandle, self.nodeID, byref(max_following_error), byref(self.pErrorCode))
        return max_following_error.value
    def set_max_velocity(self, max_velocity):
        self.cLib.VCS_SetMaxProfileVelocity(self.keyHandle, self.nodeID, max_velocity, byref(self.pErrorCode))
    def get_max_velocity(self):
        max_velocity = c_uint32()
        self.cLib.VCS_GetMaxProfileVelocity(self.keyHandle, self.nodeID, byref(max_velocity), byref(self.pErrorCode))
        return max_velocity.value
    def set_max_acceleration(self, max_acceleration):
        self.cLib.VCS_SetMaxAcceleration(self.keyHandle, self.nodeID, max_acceleration, byref(self.pErrorCode))
    def get_max_acceleration(self):
        max_acceleration = c_uint32()
        self.cLib.VCS_GetMaxAcceleration(self.keyHandle, self.nodeID, byref(max_acceleration), byref(self.pErrorCode))
        return max_acceleration.value
    def safety_functions(self):
        self.set_max_following_error(10000)
        self.set_max_velocity(400)
        self.set_max_acceleration(2000)
        
    
if __name__ == "__main__":
    epos1 = epos()
    epos1.moveToPositonSpeed(408,100)
    print("HELLASD")
    print(epos1.GetPositionIs())

# todo:
# 1. poisition window
# 2. safety functions tuning (max following error, max velocity, max acceleration)
# 3 return error if posistion profile return zero from safety functions maybe saftey funtion are working good 
# 4 calculate the time of the movement