import serial
import time
from ctypes import *
import timeit
class epos():
    def __init__(self,usbDevice :str= "USB0", nodeID :int = 1, path:str = '/opt/EposCmdLib_6.8.1.0/lib/x86_64/libEposCmd.so.6.8.1.0'):
        # EPOS Command Library path
        self.loadLibrary(path)
        # Defining return variables from Library Functions
        self.ret = 0
        self.pErrorCode = c_uint()
        self.pDeviceErrorCode = c_uint()
        self.usbDevice = usbDevice
        # Defining a variable NodeID and configuring connection
        self.nodeID = nodeID
        self.baudrate = 1000000
        self.timeout = 500

        # Configure desired motion profile
        self.acceleration = 30000 # rpm/s, up to 1e7 would be possible
        self.deceleration = 30000 # rpm/s
        self.counter = 0
        self.keyHandle = self.cLib.VCS_OpenDevice(b'EPOS4', b'MAXON SERIAL V2', b'USB', usbDevice.encode(), byref(self.pErrorCode)) # specify EPOS version and interface
        self.cLib.VCS_SetProtocolStackSettings(self.keyHandle, self.baudrate, self.timeout, byref(self.pErrorCode)) # set baudrate
        self.cLib.VCS_ClearFault(self.keyHandle, self.nodeID, byref(self.pErrorCode)) # clear all faults
        self.cLib.VCS_ActivateProfilePositionMode(self.keyHandle, self.nodeID, byref(self.pErrorCode)) # activate profile position mode
        self.cLib.VCS_SetEnableState(self.keyHandle, self.nodeID, byref(self.pErrorCode)) # enable device
        #print("HELLO")
    def loadLibrary(self, path):
        #print(path)
        self.path = path
        cdll.LoadLibrary(self.path)
        self.cLib = CDLL(self.path)
    def GetPositionIs(self):
        pPositionIs=c_long()
        pErrorCode=c_uint()
        self.ret=self.cLib.VCS_GetPositionIs(self.keyHandle, self.nodeID, byref(pPositionIs), byref(pErrorCode))
        return pPositionIs.value # motor steps
    def MoveToPositionSpeed(self, target_position, target_speed, acceleration = None, deceleration = None):
        if acceleration == None:
            acceleration = self.acceleration
        if deceleration == None:
            deceleration = self.deceleration 
        while True:
            if target_speed != 0:
                self.cLib.VCS_SetPositionProfile(self.keyHandle, self.nodeID, target_speed, acceleration, deceleration, byref(self.pErrorCode)) # set profile parameters
                start = time.process_time()
                self.cLib.VCS_MoveToPosition(self.keyHandle, self.nodeID, target_position, True, True, byref(self.pErrorCode)) # move to position
                #print(time.process_time() - start)
            elif target_speed == 0:
                epos.VCS_HaltPositionMovement(self.keyHandle, self.nodeID, byref(self.pErrorCode)) # halt motor
            true_position = self.GetPositionIs()
            if true_position == target_position:
                break
    def MoveWithVelocity(self, target_velocity):
        self.cLib.VCS_MoveWithVelocity(self.keyHandle, self.nodeID, target_velocity, byref(self.pErrorCode))
    def close(self):
        time.sleep(1)
        self.cLib.VCS_SetDisableState(self.keyHandle, self.nodeID, byref(self.pErrorCode)) # disable device
        self.cLib.VCS_CloseDevice(self.keyHandle, byref(self.pErrorCode)) # close device
    def home(self, dir, cur = 3500):
        self.cLib.VCS_ActivateHomingMode(self.keyHandle, self.nodeID, byref(self.pErrorCode))
        self.cLib.VCS_SetHomingParameter(self.keyHandle, self.nodeID, 50, 100, 100, 0, cur, 0, byref(self.pErrorCode))
        print(self.cLib.VCS_FindHome(self.keyHandle, self.nodeID, -4+dir, byref(self.pErrorCode)))
        print(self.cLib.VCS_WaitForHomingAttained(self.keyHandle, self.nodeID, 20000, byref(self.pErrorCode)))
        print(self.cLib.VCS_FindHome(self.keyHandle, self.nodeID, 35, byref(self.pErrorCode)))
    def getPosition(self):
        a = c_uint()
        self.cLib.VCS_GetPositionIs(self.keyHandle, self.nodeID, byref(a), byref(self.pErrorCode))
        a=a.value
        if(a & 0x80000000):
            a = -0x100000000 + a
        return a
    def getPositionDeg(self, gearing = True):
        if not gearing:
            return round(self.getPosition()/5.68888889, 2)
        return round(self.getPosition()/568.888888889, 2)
    def activatePosMode(self):
        self.cLib.VCS_ActivateProfilePositionMode(self.keyHandle, self.nodeID, byref(self.pErrorCode))
    def activateVelMode(self):
        self.cLib.VCS_ActivateVelocityMode(self.keyHandle, self.nodeID, byref(self.pErrorCode))
    def moveVelocity(self, vel):
        self.cLib.VCS_MoveWithVelocity(self.keyHandle, self.nodeID, vel, byref(self.pErrorCode))
    def haltVel(self):
        self.cLib.VCS_HaltVelocityMovement(self.keyHandle, self.nodeID, byref(self.pErrorCode))
if __name__ == "__main__":
    print("HELLASD")
    epos1 = epos()
    epos1.MoveToPositionSpeed(48,5000)
    print(epos1.GetPositionIs())