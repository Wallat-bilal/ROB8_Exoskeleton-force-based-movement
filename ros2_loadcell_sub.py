import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray  # We will publish an array of float values
from epos.DataPlotter import DataPlotter
import time
class SerialDataSubscriber(Node):
    def __init__(self):
        super().__init__('serial_data_subscriber')
        self.subscription = self.create_subscription(Float32MultiArray, 'serial_data', self.listener_callback, 10)
        self.plot = DataPlotter(lower_exercise_limit=15, upper_exercise_limit=24)
    def listener_callback(self, msg):
        tic = time.time()
        data = msg.data
        # decompose the array into its components
        self.plot.run_once((float(data[0]+data[1])), float(data[2]+data[3]))
        # print(f'Received data: {data}')
        print(round(data[0],2), round(data[4],2), round((time.time()-tic)*1000,2))
def main(args=None):
    rclpy.init(args=args)
    node = SerialDataSubscriber()
    rclpy.spin(node)

if __name__ == '__main__':
    main()