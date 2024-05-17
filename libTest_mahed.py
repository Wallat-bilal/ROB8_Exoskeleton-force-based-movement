# from epos import DataPlotter as dp
from epos import eposClass_test as eposClass
from time import sleep
import time
from matplotlib import pyplot as plt
import numpy as np
import pandas as pd
# from epos import DataPlotter as dp
# data = np.empty((2000,3))
data_sequence_length = 400
data_sequence_number = 2

data_total_length = data_sequence_length * data_sequence_number 
epos1 = eposClass.epos("USB0", 1, plot=True, data_num=int(data_total_length*1.5) , gearing= False)
epos1.safety_functions()
print("epos1 created")


epos1.home(True, 1000)
sleep(2)
print("Homed")

# activate position profile mode
epos1.activate_position_profile_mode()
#epos1.set_position_profile(acceleration = 100, deceleration = 100, target_speed = 100)
epos1.set_position_profile_DpS(target_speed_DpS = 1000, acceleration_DpS2 = 300 , deacceleration_DpS2 = 300)
print(epos1.get_posotion_profile(), "position profile***********")

# activate position mode (different from position profile mode)
# epos1.activate_position_mode()
# epos1.set_position_must(-4096)

# activate current mode
# epos1.activate_current_mode()
# epos1.set_current_must(200)

# activate velocity profile mode
# epos1.activate_profile_velocity_mode()
# epos1.set_velocity_profile(50, 50) # rpm/s acceleration, rpm/s deceleration

# epos1.move_with_velocity(50) # rpm





######### recorder
# epos1.setRecorderParameter(300, 0)
# epos1.enableTrigger(trigger_type = 1) # 1 = movement start
# epos1.activat
# epos1.activateChannelRecorder(1)
# recorder_starting_time = time.time()
# epos1.startRecorder()
# print("Recorder started")
# print(epos1.isRecorderRunning(), "is recorder running")

# ######### recorder

print("safety defaults", epos1.get_max_following_error(), epos1.get_max_velocity(), epos1.get_max_acceleration())

# epos1.moveToPosition(-2048*2)

# epos1.getVelocityUnits()
# epos1.getIncEncoderParameter()

#epos1.activateVelMode()
#epos1.moveVelocity(100)

# sleep(1)
#epos1.moveVelocity(0)


# time.sleep(1)
toc = time.time()
# epos1.move_to_position(40)
# epos1.move_to_position_speed_degree(target_position_degree= 360 * 10, target_speed_DpS = 360)
epos1.move_to_position_degree(target_position_degree = 360 * 5 )
print(round((time.time()-toc)*1000,2), "time to move", epos1.calculate_time_to_position())


counter = 0
list_time = []
running = True
while(running):
    tic = time.time()
    pos = round(epos1.get_position_Degree(), 2)
    # pos = 0
    # time.sleep(0.005)
    # current = epos1.get_Current_avg()
    current = round(epos1.get_Current_object_avg(), 2)
    # current = 0
    counter += 1
    if counter == 1 :
        print(time.time()-toc)
    
    epos1.plot.run_once(pos, current) 
    epos1.data_current = np.array([[time.time() - toc, pos, current]])
    epos1.set_data_current(np.array([round(time.time() - toc,3), pos, current]))
    epos1.append_data_current()
    # round((time.time() - tic)*1000,2)
    # bool_rec = epos1.isRecorderRunning()
    # sleep(0.005)
    print(round(pos,1), '\t', current, '\t', round((time.time()-tic)*1000,2))
    # print(epos1.get_data_current())
    if counter >= data_sequence_length:
        # epos1.plot.quit()
        running = False
    # print(pos, '\t', counter, '\t', round((time.time()-tic)*1000,2))

# epos1.wait_for_target_reached()
epos1.move_to_position_degree(target_position_degree= 0, Immediately=False)
print("\n\n\n\nSecond move\n\n\n\n")
running = True
counter = 0
while(running):
    tic = time.time()
    pos = round(epos1.get_position_Degree(), 2)
    # pos = 0
    # time.sleep(0.005)
    current = epos1.get_Current_avg()
    current = round(epos1.get_Current_object_avg(), 2)
    # current = 0
    counter += 1
    if counter == 1 :
        print(time.time()-toc)
    
    epos1.plot.run_once(pos, current) 
    epos1.data_current = np.array([[time.time() - toc, pos, current]])
    epos1.set_data_current(np.array([round(time.time() - toc,3), pos, current]))
    epos1.append_data_current()
    # round((time.time() - tic)*1000,2)
    # bool_rec = epos1.isRecorderRunning()
    # sleep(0.005)
    print(round(pos,1), '\t', current, '\t', round((time.time()-tic)*1000,2))
    # print(epos1.get_data_current())
    if counter >= data_sequence_length:
        epos1.plot.quit()
        running = False
    # print(pos, '\t', counter, '\t', round((time.time()-tic)*1000,2))


# epos1.halt_velocity_movement()
######### recorder
# epos1.stopRecorder()

# print("Recorder stopped", round((time.time()-recorder_starting_time)*1000))   
# data_vector_size = epos1.readChannelVectorSize()
# print(data_vector_size)

# data_vector = epos1.readChannelDataVector(1, data_vector_size)
# numpy_array = np.frombuffer(data_vector, dtype=np.int32)

######### end recorder



# pos = epos1.getPositionDeg(False)
# print(epos1.getPositionDeg())
# print(pos)
# #print(pos.value)
# print("Stop")
# sleep(1)
print("Hello")

###############


df = pd.DataFrame(data= epos1.get_data(), columns=['time', 'position', 'current'])
df.to_csv('data.csv', index=False)
# create a figure with subplots
fig, (ax1, ax2) = plt.subplots(2, 1)

# plot the position against time
ax1.plot( df['time'], df['position'])
ax1.set_ylabel('Position')

# plot the current against time
ax2.plot( df['time'], df['current'])
ax2.set_xlabel('Time')
ax2.set_ylabel('Current')
# plt.plot(numpy_array)
plt.show()
# print(epos1.get_data())
##############


#print(epos1.getPosition())
#epos1.MoveToPositionSpeed(0, 5000)
#epos2.MoveToPositionSpeed(100, 5000)
# plt.plot(numpy_array)
# plt.show()
epos1.close()
#epos2.close()
