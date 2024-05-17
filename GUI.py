import sys
import os
from std_msgs.msg import String
from PyQt5.QtWidgets import QApplication, QGraphicsScene, QWidget, QPushButton, QFileDialog, QMainWindow, QMessageBox, QGraphicsView
from PyQt5.QtCore import Qt
from PyQt5.uic import loadUi


from PyQt5 import QtCore, QtGui, QtWidgets

import rclpy
from rclpy.node import Node



from std_msgs.msg import Float32MultiArray

import json

from threading import Thread
from rclpy.executors import MultiThreadedExecutor
import datetime
import matplotlib.pyplot as plt







# os.environ['LD_LIBRARY_PATH'] = ''


class ExePublisher(Node):
    def __init__(self):
        super().__init__("exe_pub")
        self.publisher = self.create_publisher(String, 'exerciseAvail', 10)
    def publish(self, msg):
        self.publisher.publish(msg)



class ExeSubscriber(Node):  # This is where we receive data on the forces and positions of the engines 
    def __init__(self, nod_name):
        super().__init__("exe_sub")
        self.subscriberLoadCell = self.create_subscription(Float32MultiArray, 'serial_data', self.listener_callback_Load, 10)
        self.subscriber = self.create_subscription(String, 'motorPos', self.listener_callback, 10)
        
        self.datalist = dataset()
        self.motor0 = 0
        self.motor1 = 0
        # self.dialog = dialog
        self.recording =False
        self.start_writing = False
        self.stop_writing = False
       
    def listener_callback(self, msg):
        data = msg.data
        data = json.loads(data)
        self.motor0 = float(data["motor0"]) +27   #
        self.motor1 = float(data["motor1"])
        
        
        
        
    def start_writing_data(self):
        self.start_writing = True
        self.stop_writing = False
        
        
    def stop_writing_data(self):
        self.stop_writing = True

    def listener_callback_Load(self, msg):
        now = datetime.datetime.now().strftime("%H:%M:%S.%f")[:-3]
        self.data_loadcell = msg.data
        data_sum = str(now) + "," + ' ' *3 + str(self.data_loadcell[0]) + "," + ' '*2 + str(self.data_loadcell[1]) + "," + ' '*2 + str(self.data_loadcell[2]) + "," + ' '*2 + str(self.data_loadcell[3]) + "," + ' '*2 + str(self.data_loadcell[0]+self.data_loadcell[1])+ "," + ' ' *2+ str(self.data_loadcell[2]+self.data_loadcell[3])+ "," + ' ' *2 + str(self.data_loadcell[0]+self.data_loadcell[1]+self.data_loadcell[2]+self.data_loadcell[3])+ "," + ' '*2 + str(self.motor0) + "," + ' '*2 + str(self.motor1) 
        
        if self.start_writing and not self.stop_writing:
            print(self.motor0, "  ", self.motor1)
            self.datalist.append(data_sum)
        

    def get_data(self):
        self.data_loadcell[0]+self.data_loadcell[1], self.data_loadcell[2]+self.data_loadcell[3], self.motor0, self.motor1

    def get_datalist(self):
        return self.datalist.get_data()
    
class dataset():
    def __init__(self, data_sum : list = None):
        if data_sum is None:
            data_sum = []
        if data_sum is not None:
            self.data_sum = data_sum
    def append(self, data):
        self.data_sum.append(data) 
    def get_data(self):
        return self.data_sum
    def clear(self):
        self.data_sum.clear()

class Ui_Dialog(object):    # here we create the GUI
    def setupUi(self, Dialog):
        self.Dialog = Dialog
        self.data_sum = []
        self.file_path = " "
        Dialog.setObjectName("Dialog")
        Dialog.resize(726, 935)
        font = QtGui.QFont()
        font.setPointSize(14)
        Dialog.setFont(font)
        self.verticalLayoutWidget = QtWidgets.QWidget(Dialog)
        self.verticalLayoutWidget.setGeometry(QtCore.QRect(20, 240, 181, 491))
        self.verticalLayoutWidget.setObjectName("verticalLayoutWidget")
        self.verticalLayout_2 = QtWidgets.QVBoxLayout(self.verticalLayoutWidget)
        self.verticalLayout_2.setContentsMargins(0, 0, 0, 0)
        self.verticalLayout_2.setObjectName("verticalLayout_2")
        self.label_3 = QtWidgets.QLabel(self.verticalLayoutWidget)
        font = QtGui.QFont()
        font.setPointSize(15)
        self.label_3.setFont(font)
        self.label_3.setObjectName("label_3")
        self.verticalLayout_2.addWidget(self.label_3)
        self.label_4 = QtWidgets.QLabel(self.verticalLayoutWidget)
        font = QtGui.QFont()
        font.setPointSize(15)
        self.label_4.setFont(font)
        self.label_4.setObjectName("label_4")
        self.verticalLayout_2.addWidget(self.label_4)
        self.label_9 = QtWidgets.QLabel(self.verticalLayoutWidget)
        font = QtGui.QFont()
        font.setPointSize(15)
        self.label_9.setFont(font)
        self.label_9.setObjectName("label_9")
        self.verticalLayout_2.addWidget(self.label_9)
        self.horizontalLayoutWidget = QtWidgets.QWidget(Dialog)
        self.horizontalLayoutWidget.setGeometry(QtCore.QRect(230, 40, 381, 81))
        self.horizontalLayoutWidget.setObjectName("horizontalLayoutWidget")
        self.horizontalLayout = QtWidgets.QHBoxLayout(self.horizontalLayoutWidget)
        self.horizontalLayout.setContentsMargins(0, 0, 0, 0)
        self.horizontalLayout.setObjectName("horizontalLayout")
        self.label = QtWidgets.QLabel(self.horizontalLayoutWidget)
        font = QtGui.QFont()
        font.setPointSize(20)
        font.setBold(True)
        font.setWeight(75)
        self.label.setFont(font)
        self.label.setObjectName("label")
        self.horizontalLayout.addWidget(self.label)
        self.label_2 = QtWidgets.QLabel(self.horizontalLayoutWidget)
        font = QtGui.QFont()
        font.setPointSize(20)
        font.setBold(True)
        font.setWeight(75)
        self.label_2.setFont(font)
        self.label_2.setObjectName("label_2")
        self.horizontalLayout.addWidget(self.label_2)
        self.horizontalLayoutWidget_3 = QtWidgets.QWidget(Dialog)
        self.horizontalLayoutWidget_3.setGeometry(QtCore.QRect(210, 440, 301, 81))
        self.horizontalLayoutWidget_3.setObjectName("horizontalLayoutWidget_3")
        self.horizontalLayout_3 = QtWidgets.QHBoxLayout(self.horizontalLayoutWidget_3)
        self.horizontalLayout_3.setContentsMargins(0, 0, 0, 0)
        self.horizontalLayout_3.setObjectName("horizontalLayout_3")
        self.hipvelocity = QtWidgets.QDoubleSpinBox(self.horizontalLayoutWidget_3)
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Minimum, QtWidgets.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(10)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.hipvelocity.sizePolicy().hasHeightForWidth())
        self.hipvelocity.setSizePolicy(sizePolicy)
        self.hipvelocity.setMaximumSize(QtCore.QSize(100, 50))
        font = QtGui.QFont()
        font.setPointSize(15)
        self.hipvelocity.setFont(font)
        self.hipvelocity.setDecimals(0)
        self.hipvelocity.setMaximum(60.0)
        self.hipvelocity.setSingleStep(1.0)
        self.hipvelocity.setObjectName("hipvelocity")
        self.horizontalLayout_3.addWidget(self.hipvelocity)
        spacerItem = QtWidgets.QSpacerItem(40, 20, QtWidgets.QSizePolicy.Expanding, QtWidgets.QSizePolicy.Minimum)
        self.horizontalLayout_3.addItem(spacerItem)
        self.kneevelocity = QtWidgets.QDoubleSpinBox(self.horizontalLayoutWidget_3)
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Minimum, QtWidgets.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(10)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.kneevelocity.sizePolicy().hasHeightForWidth())
        self.kneevelocity.setSizePolicy(sizePolicy)
        self.kneevelocity.setMaximumSize(QtCore.QSize(100, 50))
        font = QtGui.QFont()
        font.setPointSize(15)
        self.kneevelocity.setFont(font)
        self.kneevelocity.setDecimals(0)
        self.kneevelocity.setMaximum(60.0)
        self.kneevelocity.setSingleStep(1.0)
        self.kneevelocity.setObjectName("kneevelocity")
        self.horizontalLayout_3.addWidget(self.kneevelocity)
        self.label_7 = QtWidgets.QLabel(Dialog)
        self.label_7.setGeometry(QtCore.QRect(330, 280, 67, 17))
        font = QtGui.QFont()
        font.setPointSize(14)
        self.label_7.setFont(font)
        self.label_7.setObjectName("label_7")
        self.label_8 = QtWidgets.QLabel(Dialog)
        self.label_8.setGeometry(QtCore.QRect(340, 330, 67, 17))
        font = QtGui.QFont()
        font.setPointSize(14)
        self.label_8.setFont(font)
        self.label_8.setObjectName("label_8")
        self.pushButton = QtWidgets.QPushButton(Dialog)
        self.pushButton.setGeometry(QtCore.QRect(180, 760, 361, 41))
        font = QtGui.QFont()
        font.setPointSize(16)
        self.pushButton.setFont(font)
        self.pushButton.setObjectName("pushButton")
        self.loopbox = QtWidgets.QDoubleSpinBox(Dialog)
        self.loopbox.setGeometry(QtCore.QRect(300, 620, 100, 50))
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Minimum, QtWidgets.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(10)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.loopbox.sizePolicy().hasHeightForWidth())
        self.loopbox.setSizePolicy(sizePolicy)
        self.loopbox.setMaximumSize(QtCore.QSize(100, 50))
        font = QtGui.QFont()
        font.setPointSize(15)
        self.loopbox.setFont(font)
        self.loopbox.setDecimals(0)
        self.loopbox.setMinimum(1.0)
        self.loopbox.setMaximum(20.0)
        self.loopbox.setObjectName("loopbox")
        self.Move = QtWidgets.QCheckBox(Dialog)
        self.Move.setGeometry(QtCore.QRect(530, 290, 100, 50))
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Minimum, QtWidgets.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(10)
        sizePolicy.setVerticalStretch(10)
        sizePolicy.setHeightForWidth(self.Move.sizePolicy().hasHeightForWidth())
        self.Move.setSizePolicy(sizePolicy)
        self.Move.setMaximumSize(QtCore.QSize(100, 50))
        font = QtGui.QFont()
        font.setFamily("Ubuntu")
        font.setPointSize(20)
        font.setBold(False)
        font.setWeight(50)
        self.Move.setFont(font)
        self.Move.setObjectName("Move")
        self.homing = QtWidgets.QPushButton(Dialog)
        self.homing.setGeometry(QtCore.QRect(270, 140, 181, 61))
        font = QtGui.QFont()
        font.setPointSize(15)
        self.homing.setFont(font)
        self.homing.setObjectName("homing")
        self.StopButton = QtWidgets.QPushButton(Dialog)
        self.StopButton.setGeometry(QtCore.QRect(180, 810, 361, 41))
        self.StopButton.setObjectName("StopButton")
        self.verticalLayoutWidget_2 = QtWidgets.QWidget(Dialog)
        self.verticalLayoutWidget_2.setGeometry(QtCore.QRect(210, 260, 101, 111))
        self.verticalLayoutWidget_2.setObjectName("verticalLayoutWidget_2")
        self.verticalLayout = QtWidgets.QVBoxLayout(self.verticalLayoutWidget_2)
        self.verticalLayout.setContentsMargins(0, 0, 0, 0)
        self.verticalLayout.setObjectName("verticalLayout")
        self.hipinitbox = QtWidgets.QDoubleSpinBox(self.verticalLayoutWidget_2)
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Minimum, QtWidgets.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(5)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.hipinitbox.sizePolicy().hasHeightForWidth())
        self.hipinitbox.setSizePolicy(sizePolicy)
        self.hipinitbox.setMaximumSize(QtCore.QSize(100, 50))
        self.hipinitbox.setSizeIncrement(QtCore.QSize(0, 0))
        font = QtGui.QFont()
        font.setPointSize(15)
        self.hipinitbox.setFont(font)
        self.hipinitbox.setDecimals(0)
        self.hipinitbox.setMinimum(-65.0)
        self.hipinitbox.setMaximum(28.0)
        self.hipinitbox.setSingleStep(1.0)
        self.hipinitbox.setObjectName("hipinitbox")
        self.verticalLayout.addWidget(self.hipinitbox)
        self.hipendbox = QtWidgets.QDoubleSpinBox(self.verticalLayoutWidget_2)
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Minimum, QtWidgets.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(5)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.hipendbox.sizePolicy().hasHeightForWidth())
        self.hipendbox.setSizePolicy(sizePolicy)
        self.hipendbox.setMaximumSize(QtCore.QSize(100, 50))
        font = QtGui.QFont()
        font.setPointSize(15)
        self.hipendbox.setFont(font)
        self.hipendbox.setDecimals(0)
        self.hipendbox.setMinimum(-65.0)
        self.hipendbox.setMaximum(28.0)
        self.hipendbox.setSingleStep(1.0)
        self.hipendbox.setObjectName("hipendbox")
        self.verticalLayout.addWidget(self.hipendbox)
        self.verticalLayoutWidget_3 = QtWidgets.QWidget(Dialog)
        self.verticalLayoutWidget_3.setGeometry(QtCore.QRect(410, 260, 101, 111))
        self.verticalLayoutWidget_3.setObjectName("verticalLayoutWidget_3")
        self.verticalLayout_3 = QtWidgets.QVBoxLayout(self.verticalLayoutWidget_3)
        self.verticalLayout_3.setContentsMargins(0, 0, 0, 0)
        self.verticalLayout_3.setObjectName("verticalLayout_3")
        self.kneeinitbox = QtWidgets.QDoubleSpinBox(self.verticalLayoutWidget_3)
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Minimum, QtWidgets.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(5)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.kneeinitbox.sizePolicy().hasHeightForWidth())
        self.kneeinitbox.setSizePolicy(sizePolicy)
        self.kneeinitbox.setMaximumSize(QtCore.QSize(100, 50))
        font = QtGui.QFont()
        font.setPointSize(15)
        self.kneeinitbox.setFont(font)
        self.kneeinitbox.setDecimals(0)
        self.kneeinitbox.setMaximum(120.0)
        self.kneeinitbox.setSingleStep(1.0)
        self.kneeinitbox.setObjectName("kneeinitbox")
        self.verticalLayout_3.addWidget(self.kneeinitbox)
        self.kneeendbox = QtWidgets.QDoubleSpinBox(self.verticalLayoutWidget_3)
        sizePolicy = QtWidgets.QSizePolicy(QtWidgets.QSizePolicy.Minimum, QtWidgets.QSizePolicy.Fixed)
        sizePolicy.setHorizontalStretch(5)
        sizePolicy.setVerticalStretch(0)
        sizePolicy.setHeightForWidth(self.kneeendbox.sizePolicy().hasHeightForWidth())
        self.kneeendbox.setSizePolicy(sizePolicy)
        self.kneeendbox.setMaximumSize(QtCore.QSize(100, 50))
        font = QtGui.QFont()
        font.setPointSize(15)
        self.kneeendbox.setFont(font)
        self.kneeendbox.setDecimals(0)
        self.kneeendbox.setMaximum(120.0)
        self.kneeendbox.setSingleStep(1.0)
        self.kneeendbox.setObjectName("kneeendbox")
        self.verticalLayout_3.addWidget(self.kneeendbox)
        self.Savebutton = QtWidgets.QCheckBox(Dialog)
        self.Savebutton.setGeometry(QtCore.QRect(320, 710, 92, 23))
        font = QtGui.QFont()
        font.setPointSize(20)
        self.Savebutton.setFont(font)
        self.Savebutton.setObjectName("Savebutton")

        self.retranslateUi(Dialog)
        QtCore.QMetaObject.connectSlotsByName(Dialog)

        self.scene = QGraphicsScene()

        self.pushButton.clicked.connect(self.pushButtonCallback)
        
        
        self.Savebutton.stateChanged.connect(self.save_data)
        
        self.homing.clicked.connect(self.Homing)
        nod_name = Node

        self.pub = ExePublisher()
        self.sub = ExeSubscriber(nod_name)
        

        
        self.StopButton.clicked.connect(self.stop_writing)
        



    def pushButtonCallback(self):   # connects the OK button with these functions (when the OK button is clicked, these functions are executed)
        self.handle_accepted()
        self.start_writing() # set the start writing flag in the subscriber to True
        

    def retranslateUi(self, Dialog):
        _translate = QtCore.QCoreApplication.translate
        Dialog.setWindowTitle(_translate("Dialog", "Dialog"))
        self.label_3.setText(_translate("Dialog", "Range of motion :"))
        self.label_4.setText(_translate("Dialog", "Velocity :"))
        self.label_9.setText(_translate("Dialog", "Loop :"))
        self.label.setText(_translate("Dialog", "HIP"))
        self.label_2.setText(_translate("Dialog", "KNEE"))
        self.label_7.setText(_translate("Dialog", "initial"))
        self.label_8.setText(_translate("Dialog", "end"))
        self.pushButton.setText(_translate("Dialog", "OK"))
        self.Move.setText(_translate("Dialog", "Move"))
        self.homing.setText(_translate("Dialog", "HOMING"))
        self.StopButton.setText(_translate("Dialog", "Stop"))
        self.Savebutton.setText(_translate("Dialog", "Save"))



        QtCore.QMetaObject.connectSlotsByName(Dialog)
        

    def publish_message(self):
        self.publish_message()


    def handle_accepted(self, args=None):   # function enabling an exercise to be run according to the values written in the boxes
        selectedAction = ""
        angle_hip_init = self.hipinitbox.value() - 27
        angle_hip_end = self.hipendbox.value() -27
        angle_knee_init = self.kneeinitbox.value()
        angle_knee_end = self.kneeendbox.value()
        loop_value = self.loopbox.value()
        velocity_hip = self.hipvelocity.value()
        velocity_knee = self.kneevelocity.value()


        exercises=['{"loop": '+ str(loop_value)+',"commands":[{"type":"pos","motor0":{"value":'+str(angle_hip_init)+',"dps":'+str(velocity_hip)+'}, "motor1":{"value":'+str(angle_knee_init)+',"dps":'+str(velocity_knee)+'}},{"type":"pos","motor0":{"value":'+str(angle_hip_end)+',"dps":'+str(velocity_hip)+'}, "motor1":{"value":'+str(angle_knee_end)+',"dps":'+str(velocity_knee)+'}}]}',
                 '{"loop": '+str(loop_value)+',"commands":[{"type":"pos","motor0":{"value": '+str(angle_hip_init)+',"dps":'+str(velocity_hip)+'}, "motor1":{"value":'+str(angle_knee_init)+',"dps":'+str(velocity_knee)+'}}]}']

        
       

        if self.Move.isChecked():
            selectedAction = exercises[0]      #to create a movement with a start and end angle value, the 'Move' box must be ticked
        else :
            selectedAction = exercises[1]      #when the 'Move' box is unchecked, the angle values in the 'end' boxes are not taken into account
        
        if selectedAction != "":
            msg = String()
            msg.data = selectedAction
            self.pub.publish(msg)
            print("Message publié :", selectedAction)
        else:
            print("Aucune action sélectionnée.")

    def Homing(self, args=None):   # Homing
        exercises=['{"loop":1,"commands":[{"type":"homing","distance":"0"}]}']
        selectedAction = exercises[0]
        msg = String()
        msg.data = selectedAction
        self.pub.publish(msg)
        print("Message publié :", selectedAction)
    


        
    def save_data(self, state):    # To save data
        if state == Qt.Checked:
            file_dialog = QFileDialog()
            file_path, _ = file_dialog.getSaveFileName(None, "Choisir un emplacement de fichier", "", "Fichiers texte (*.txt)")
            if file_path:
                self.file_path = file_path
 
   
    
    def write_data(self):   # to write data
        if self.Savebutton.isChecked():
            print("data will be saved")
            with open(self.file_path, 'w') as file:
                #print("gggggggggggggggg", self.sub.get_datalist())
                for data in self.sub.get_datalist():                      
                    file.write(data + "\n")
                        
        else : 
            print("data isn't save")
        
    def start_writing(self): # set the start_writing variable to True in the subscriber
        self.sub.start_writing_data()

    def stop_writing(self): # set the stop_writing variable to False in the subscriber
        self.write_data()
        self.sub.stop_writing_data()
        self.sub.datalist.clear()
                

    
if __name__ == "__main__":
    # Set the QT_QPA_PLATFORM environment variable to "xcb"
    os.environ["QT_QPA_PLATFORM"] = "xcb"

    rclpy.init(args=sys.argv)

    app = QtWidgets.QApplication(sys.argv)
    #dialog = Ui_Dialog()
    window = QtWidgets.QWidget()
    ui = Ui_Dialog()
    ui.setupUi(window)
    

    # exe_subscriber = ExeSubscriber("exe_sub", ui)

    executor = MultiThreadedExecutor()
    executor.add_node(ui.sub)
    thread = Thread(target=executor.spin)
    thread.start()

    

    # publisher = ExePublisher()

    window.show()
    # rclpy.spin(ui.sub)
    # rclpy.shutdown()
    # rclpy.spin(exe_subscriber)
    sys.exit(app.exec_())
