import serial
import time
from ctypes import *
import timeit



# EPOS Command Library path
path='/opt/EposCmdLib_6.8.1.0/lib/x86_64/libEposCmd.so.6.8.1.0'

# Load library
cdll.LoadLibrary(path)
epos = CDLL(path)

# Defining return variables from Library Functions
ret = 0
pErrorCode = c_uint()
pDeviceErrorCode = c_uint()

# Defining a variable NodeID and configuring connection
nodeID = 3
baudrate = 1000000
timeout = 500

# Configure desired motion profile
acceleration = 30000 # rpm/s, up to 1e7 would be possible
deceleration = 30000 # rpm/s
counter = 0
# Query motor position
def GetPositionIs():
    pPositionIs=c_long()
    pErrorCode=c_uint()
    ret=epos.VCS_GetPositionIs(keyHandle, nodeID, byref(pPositionIs), byref(pErrorCode))
    return pPositionIs.value # motor steps

# Move to position at speed
# def MoveToPositionSpeed(target_position,target_speed):
#     while True:
#         if target_speed != 0:
#             epos.VCS_SetPositionProfile(keyHandle, nodeID, target_speed, acceleration, deceleration, byref(pErrorCode)) # set profile parameters
#             start = time.process_time()
#             epos.VCS_MoveToPosition(keyHandle, nodeID, target_position, True, True, byref(pErrorCode)) # move to position
#             print(time.process_time() - start)
#         elif target_speed == 0:
#             epos.VCS_HaltPositionMovement(keyHandle, nodeID, byref(pErrorCode)) # halt motor
#         global counter
#         counter = counter + 1
#         true_position = GetPositionIs()
#         if true_position == target_position:
#             break
def MoveToPositionSpeed(target_position,target_speed):
    start = timeit.timeit()
    if target_speed != 0:
        epos.VCS_SetPositionProfile(keyHandle, nodeID, target_speed, acceleration, deceleration, byref(pErrorCode)) # set profile parameters
        print((timeit.timeit() - start)*1000)
        epos.VCS_MoveToPosition(keyHandle, nodeID, target_position, True, True, byref(pErrorCode)) # move to position
    elif target_speed == 0:
        epos.VCS_HaltPositionMovement(keyHandle, nodeID, byref(pErrorCode)) # halt motor
    print((timeit.timeit() - start)*1000)
    global counter
    counter = counter + 1
    true_position = GetPositionIs()


if __name__ == "__main__":
    # Initiating connection and setting motion profile
    keyHandle = epos.VCS_OpenDevice(b'EPOS4', b'MAXON SERIAL V2', b'USB', b'USB0', byref(pErrorCode)) # specify EPOS version and interface
    print("EPOS2 connected")
    epos.VCS_SetProtocolStackSettings(keyHandle, baudrate, timeout, byref(pErrorCode)) # set baudrate
    epos.VCS_ClearFault(keyHandle, nodeID, byref(pErrorCode)) # clear all faults
    epos.VCS_ActivateProfilePositionMode(keyHandle, nodeID, byref(pErrorCode)) # activate profile position mode
    epos.VCS_SetEnableState(keyHandle, nodeID, byref(pErrorCode)) # enable device
    print('next')
    
    MoveToPositionSpeed(100,5000) # move to position 20,000 steps at 5000 rpm/s
    print('Motor position: %s' % (GetPositionIs()))
    print('counter: %s' % (counter))
    time.sleep(1)

    # MoveToPositionSpeed(0,2000) # move to position 0 steps at 2000 rpm/s
    # print('Motor position: %s' % (GetPositionIs()))
    # time.sleep(1)

    epos.VCS_SetDisableState(keyHandle, nodeID, byref(pErrorCode)) # disable device
    epos.VCS_CloseDevice(keyHandle, byref(pErrorCode)) # close device