import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from std_msgs.msg import Float32MultiArray
import epos_action_node.action as ep
from epos.DataPlotter import DataPlotter
import json
import time
import logging
logging.basicConfig(filename="Test4.log", format='%(asctime)s %(message)s', level=logging.INFO)
class ExeSubscriber(Node):
    def __init__(self):
        super().__init__("exe_sub")
        self.subscriber = self.create_subscription(String, 'motorPos', self.listener_callback, 10)
        self.subscriberLoadCell = self.create_subscription(Float32MultiArray, 'serial_data', self.listener_callback_Load, 10)
        hipLimits = (10,40)
        kneeLims = (20,30)
        self.plot = DataPlotter(hipLimits[0],hipLimits[1],kneeLims[0],kneeLims[1])
        #self.plot1 = DataPlotter(10,40,-20,-50)
        self.motor0 = 0
        self.motor1 = 0
    def listener_callback(self, msg):
        data = msg.data
        data = json.loads(data)
        print(data["motor0"], data["motor1"])
        self.motor0 = float(data["motor0"]) + 27
        self.motor1 = data["motor1"]
        #self.plot1.run_once(float(data["motor0"]), float(data["motor1"]))
    def listener_callback_Load(self, msg):
        tic = time.time()
        data = msg.data
        # decompose the array into its components
        logging.info(str(data[0]+data[1])+","+ str(data[2]+data[3])+","+ str(self.motor0)+","+ str(self.motor1))
        self.plot.run_once(abs(float(data[0]+data[1])), abs(float(data[2]+data[3])), float(self.motor0), float(self.motor1))
        # print(f'Received data: {data}')
        #print(round(data[0],2), round(data[4],2), round((time.time()-tic)*1000,2))

def main(args=None):
    rclpy.init(args=args)
    sub = ExeSubscriber()
    while True:
        rclpy.spin_once(sub)


if __name__ == '__main__':
    main()