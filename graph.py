import numpy as np
import matplotlib.pyplot as plt

txt_file = '/home/florine//Documents/result/04-07/Knee/knee20_2' # Replace with the name of the log file containing the results

data_list = []
data_list1 = []
data_list2 = []
data_list3 = []
data_list4 = []
data_list5 = []
data = []
with open(txt_file, 'r') as file: # Open the log file with the results
    for line in file:

        elements = line.strip().split(',')
        sublist = [element.strip() for element in elements]
        date_time = sublist[0].strip().split()
        sublist = [date_time[0]] + [date_time[1]] + [float(date_time[2])] + [float(element) for element in sublist[1:]]
        

    
        elem1 = float(sublist[2]) # Convert the 4 data points to float # data[0]+data[1]
        elem2 = float(sublist[3]) #data[2]+data[2]
        elem3 = float(sublist[4])  # hip position
        elem4 = float(sublist[5])    # knee position

        data_list5.append(abs(elem1)+ abs(elem2))       # abs(float(data[0] + data[1]) + abs(float(data[2]+data[3])  knee + hip 
        data_list1.append(abs(elem1))  # Create lists containing each type of data (motor0,...)   # data[0]+data[1] hip
        data_list2.append(abs(elem2))    # data[2]+data[3] knee
        data_list3.append(elem3)     # hip position
        data_list4.append(elem4)   # knee position
        

    # Create the graph
    plt.plot(data_list4, data_list2)

    plt.axhline(y=20, color='r', linestyle='--')  # Add a horizontal line at y=0, colored red with a dashed linestyle
    plt.axhline(y=40, color='r', linestyle='--')  # Add a horizontal line at y=10, colored green with a dotted linestyle

    # Add labels and title
    plt.xlabel('Knee Position')
    plt.ylabel('Force')
    plt.title('My Graph')

    # Display the graph
    plt.show()
