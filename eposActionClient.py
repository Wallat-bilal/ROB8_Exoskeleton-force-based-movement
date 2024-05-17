import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from std_msgs.msg import String
import time
import epos_action_node.action as ep
import json
class EposActionClient(Node):

    def __init__(self):
        super().__init__('epos_node_test')
        self._action_client = ActionClient(self, ep.Move, 'moveToPos')
        self.publisher = self.create_publisher(String, 'exerciseAvail', 10)
        #self.subscriber = self.create_subscription(String, 'exerciseAvail', self.listener_callback, 10)
    def send_goal(self, order):
        goal_msg = ep.Move.Goal()
        goal_msg.order = order
        print(goal_msg.order)
        self._action_client.wait_for_server()
        self._send_goal_future = self._action_client.send_goal_async(goal_msg)
        self._send_goal_future.add_done_callback(self.goal_response_callback)
    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            print('Goal rejected :(')
            return
        print('Goal accepted :)')
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        rclpy.shutdown()
    def publish(self, msg):
        self.publisher.publish(msg)
        print("Publishing msg"+msg.data)
def performGoal(goal):
    rclpy.init(args=None)
    action_client = EposActionClient()
    future = action_client.send_goal(goal)
    rclpy.spin(action_client)

def publish(msg):
    rclpy.init(args=None)
    msgTemp = String()
    msgTemp.data = msg
    publisher = EposActionClient()
    publisher.publish(msgTemp)
    rclpy.shutdown()
class ExeSubscriber(Node):
    def __init__(self):
        super().__init__("exe_sub")
        self.subscriber = self.create_subscription(String, 'exerciseAvail', self.listener_callback, 10)
        self.result = None
    def listener_callback(self, msg):
        print(msg.data)
        self.result = msg.data

class LoopCounterPublisher(Node):
    def __init__(self):
        super().__init__("loop_counter_publisher")
        # rclpy.init(args=None)
        self.publisher = self.create_publisher(String, 'loopCounter', 10)
        print("Loop counter publisher initialized")

    def publish_loop_counter(self, count):
        msg = String()
        msg.data = str(count)
        self.publisher.publish(msg)
        print("Publishing loop count: "+ str(count))
        self.get_logger().info(f'Publishing: {msg.data}')
def main(args=None):  
    while True:
        commands = None
        while commands is None:  
            rclpy.init(args=None)                    
            sub = ExeSubscriber() 
            while commands is None:
                rclpy.spin_once(sub)
                commands = sub.result
                print("Command received")
            rclpy.shutdown()
        loop = int(json.loads(commands)["loop"])
          # Initialize the new publisher
        for x in range(loop):
            rclpy.init(args=args)
            loop_publisher = LoopCounterPublisher()         
            loop_publisher.publish_loop_counter(x)
            rclpy.spin_once(loop_publisher,timeout_sec=0.1)
            rclpy.shutdown()

            # time.sleep(0.1)
            print("Loop counter publisher: "+str(x))
            for command in json.loads(commands)["commands"]:
                performGoal(str(command))
                print(str(command))
                print("\n"+str(x)+"\n")
            
        
    rclpy.shutdown()
if __name__ == '__main__':
    main()	
