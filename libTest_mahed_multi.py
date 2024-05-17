# from epos import DataPlotter as dp
from epos import eposClass_test as eposClass
from time import sleep
import time
from matplotlib import pyplot as plt
import numpy as np
import pandas as pd
from loadcell import testserial_multi4_pygame_oop as loadcells
import threading

# from epos import DataPlotter as dp
# data = np.empty((2000,3))
# epos1 = eposClass.epos("USB0", 1, plot=True)
# print("epos1 created")
# loadcell = loadcell.SerialDataPlotter()

# epos1.home(True, 350)
# sleep(1)
# print("Homed")


def loadcell_thread():
    loadcell = loadcells.SerialDataPlotter()
    loadcell.run()

def epos_thread():
    data = np.empty((2000,3))
    epos1 = eposClass.epos("USB0", 1, plot=True)
    print("epos1 created")
    epos1.home(True, 350)
    sleep(1)
    print("Homed")


#epos2 = eposClass.epos("USB0", 3)
#sleep(5)
#epos1.MoveToPositionSpeed(20000, 5000)
#sleep(1)

    epos1.activatePositionProfileMode()
    epos1.setPositionProfile(100, 100, 100)
    time.sleep(1)
    toc = time.time()

#########
    epos1.setRecorderParameter(300, 0)
    epos1.enableTrigger(trigger_type = 1) # 1 = movement start
    # epos1.activat
    # posActual = (actual_postion_object = 0x6064, object_subindex = 0x00, object_size = 4 )
    epos1.activateChannelRecorder(1)
    recorder_starting_time = time.time()
    epos1.startRecorder()
    print("Recorder started")
    print(epos1.isRecorderRunning(), "is recorder running")

# #########

    epos1.moveToPosition(-2048*2)

# epos1.getVelocityUnits()
# epos1.getIncEncoderParameter()

#epos1.activateVelMode()
#epos1.moveVelocity(100)

# sleep(1)
#epos1.moveVelocity(0)
    counter = 0
    while(True):
        tic = time.time()
        pos = epos1.GetPositionIs(gearing = False)
        current = epos1.getCurrnetIsEx()
        counter += 1
        if counter == 1 :
            print(time.time()-toc)
        if counter % 2:
            epos1.plot.run_once(pos, current) 
        current_row = np.array([[time.time() - toc, pos, current]])
        data = np.vstack((data, current_row))  

        # bool_rec = epos1.isRecorderRunning()
        sleep(0.005)
        print(pos, '\t', current, '\t', round((time.time()-tic)*1000,2))

        if counter >= 400:
            epos1.plot.quit()
            break
    # print(pos, '\t', counter, '\t', round((time.time()-tic)*1000,2))

# epos1.moveToPosition(0)
# counter = 0
# while(True):
#     tic = time.time()
#     pos = epos1.GetPositionIs(gearing = False)
#     counter += 1
#     if counter == 1 :
#         print(time.time()-toc)
#     # epos1.plot.run_once(pos, counter)
#     bool_rec = epos1.isRecorderRunning()
#     print(pos, '\t', bool_rec, '\t', round((time.time()-recorder_starting_time)*1000,2))
#     sleep(0.01)
#     if counter >= 400:
#         epos1.plot.quit()
#         break

######### recorder
    epos1.stopRecorder()
    print("Recorder stopped", round((time.time()-recorder_starting_time)*1000))   
    data_vector_size = epos1.readChannelVectorSize()
    print(data_vector_size)

    data_vector = epos1.readChannelDataVector(1, data_vector_size)
    numpy_array = np.frombuffer(data_vector, dtype=np.int32)

######### end recorder
# pos = epos1.getPositionDeg(False)
# print(epos1.getPositionDeg())
# print(pos)
# #print(pos.value)
# print("Stop")
# sleep(1)

###############


    df = pd.DataFrame(data, columns=['time', 'position', 'current'])

    # create a figure with subplots
    fig, (ax1, ax2) = plt.subplots(2, 1, sharex=True)

    # plot the position against time
    ax1.plot(df['time'], df['position'])
    ax1.set_ylabel('Position')

    # plot the current against time
    ax2.plot(df['time'], df['current'])
    ax2.set_xlabel('Time')
    ax2.set_ylabel('Current')

    plt.show()

##############



#print(epos1.getPosition())
#epos1.MoveToPositionSpeed(0, 5000)
#epos2.MoveToPositionSpeed(100, 5000)
# plt.plot(numpy_array)
# plt.show()
    epos1.close()   
#epos2.close()

if __name__ == "__main__":
    motor_thread = threading.Thread(target=epos_thread)
    loadcell_threaded = threading.Thread(target=loadcell_thread)
    motor_thread.start()
    loadcell_threaded.start()
    motor_thread.join()
    loadcell_threaded.join()