import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from std_msgs.msg import Float32MultiArray
import epos_action_node.action as ep
# from epos.DataPlotter import DataPlotter
from barplot1 import SignalVisualization
import json
import time
import logging
logging.basicConfig(filename="exercise2.log", format='%(asctime)s %(message)s', level=logging.INFO)
class ExeSubscriber(Node):
    def __init__(self):
        super().__init__("exe_sub")
        self.subscriber = self.create_subscription(String, 'motorPos', self.listener_callback, 10)
        self.subscriberLoadCell = self.create_subscription(Float32MultiArray, 'serial_data', self.listener_callback_Load, 10)
        self.subscriberLoopCounter = self.create_subscription(String,'loopCounter',self.listener_callback_LoopCounter, 10)
        low_value = 10
        up_value = 30
        factor = 5# factor to enlarge the scale and better visualise the black rectangle, you need the same value as in the barplot1.py factor in the draw_bar_plot function
        # self.plot = DataPlotter(hipLimits[0],hipLimits[1],kneeLims[0],kneeLims[1])
        self.barplot = SignalVisualization(low_value* factor, up_value * factor , "Hip and Knee Torque Visualization")   # you can change the name of the window depending on what you're displaying  
        #self.plot1 = DataPlotter(10,40,-20,-50)
        self.motor0 = 0
        self.motor1 = 0
        self.motor0s = 0
        self.motor1s = 0
        self.loop_counter = 0
    def listener_callback(self, msg):
        data = msg.data
        data = json.loads(data)
        print(data["motor0"], data["motor1"])
        self.motor0 = data["motor0"]
        self.motor1 = data["motor1"]
        self.motor0s = data["motor0"]
        self.motor1s = data["motor1"]
        #self.plot.run_once(self.motor0s, self.motor1s)
        #self.plot1.run_once(float(data["motor0"]), float(data["motor1"]))
    def listener_callback_Load(self, msg):
        tic = time.time()
        data = msg.data
        # decompose the array into its components
        logging.info(str(data[0]+data[1])+","+ str(data[2]+data[3])+","+ str(self.motor0)+","+ str(self.motor1)+","+ str(self.motor0s)+","+ str(self.motor1s))

        # comment or uncommand depending on which data you want to display  
        #self.barplot._main(abs(float(data[0] + data[1]) + abs(float(data[2]+data[3])))) # some of all 4 load cells
        self.barplot._main(abs(float(data[0] + data[1]))) # first joint hip 
        #self.barplot._main(abs(float(data[2] + data[3])), self.loop_counter) # second joint knee

        print(self.loop_counter)
    def listener_callback_LoopCounter(self, msg):
        loop_counter_string = msg.data
        self.loop_counter = int(loop_counter_string)



                           
def main(args=None):
    rclpy.init(args=args)
    sub = ExeSubscriber()
    while True:
        rclpy.spin_once(sub)


if __name__ == '__main__':
    main()
