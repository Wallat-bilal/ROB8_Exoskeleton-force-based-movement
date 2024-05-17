import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import epos_action_node.action as ep

class ExePublisher(Node):
    def __init__(self):
        super().__init__("exe_sub")
        self.publisher = self.create_publisher(String, 'exerciseAvail', 10)

    def publish(self, msg):
        self.publisher.publish(msg)
        print("Publishing msg: " + msg.data)

def main(args=None):
    rclpy.init(args=args)
    publisher = ExePublisher()
    msgTemp = String()
    exercises = [
        '{"loop":1,"commands":[{"type":"homing","distance":"0"}]}',
        '{"loop":3,"commands":[{"type":"pos","motor0":{"value":"-7","dps":"10"}, "motor1":{"value":"40","dps":"10"}},{"type":"pos","motor0":{"value":"-47","dps":"10"}, "motor1":{"value":"0","dps":"10"}}]}',
        
        '{"loop":1,"commands":[{"type":"pos","motor0":{"value":"-27","dps":"8"}, "motor1":{"value":"0","dps":"8"}}]}',
        '{"loop":6,"commands":[{"type":"pos","motor0":{"value":"-37","dps":"5"}, "motor1":{"value":"50","dps":"5"}},{"type":"pos","motor0":{"value":"-17","dps":"5"}, "motor1":{"value":"70","dps":"5"}}]}',
        '{"loop":3,"commands":[{"type":"pos","motor0":{"value":"-37","dps":"10"}, "motor1":{"value":"40","dps":"10"}},{"type":"pos","motor0":{"value":"-57","dps":"10"}, "motor1":{"value":"0","dps":"10"}}]}',
        '{"loop":3,"commands":[{"type":"pos","motor0":{"value":"-27","dps":"20"}, "motor1":{"value":"0","dps":"20"}},{"type":"pos","motor0":{"value":"-92","dps":"20"}, "motor1":{"value":"65","dps":"20"}}]}',
        '{"loop":3,"commands":[{"type":"pos","motor0":{"value":"-87","dps":"10"}, "motor1":{"value":"0","dps":"10"}},{"type":"pos","motor0":{"value":"-7","dps":"10"}, "motor1":{"value":"80","dps":"10"}}]}',

    ]

    while True:
        try:
            choice = int(input("Select exercise: 1-8, 1 and 3 is homing: "))
            if choice < 1 or choice > 8:
                raise ValueError
            msgTemp.data = exercises[choice - 1]
            publisher.publish(msgTemp)
        except ValueError:
            print("Invalid selection. Please enter a number between 1 and 8.")

if __name__ == '__main__':
    main()
    
    #        '{"loop":3,"commands":[{"type":"pos","motor0":{"value":"-7","dps":"10"}, "motor1":{"value":"40","dps":"10"}},{"type":"pos","motor0":{"value":"-47","dps":"10"}, "motor1":{"value":"0","dps":"10"}}]}',
    
    #        '{"loop":1,"commands":[{"type":"pos","motor0":{"value":"-58","dps":"10"}, "motor1":{"value":"0","dps":"10"}}]}',
