import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node

import epos_homing.action as ep

class EposActionClient(Node):

    def __init__(self):
        super().__init__('epos_homing')
        self._action_client = ActionClient(self, ep.Home, 'homing')
        #self._action_client = ActionClient(self, ep.Home, 'home')

    def send_goal(self, order):
        goal_msg = ep.Home.Goal()
        goal_msg.order = order
        self._action_client.wait_for_server()
        return self._action_client.send_goal_async(goal_msg)


def main(args=None):
    rclpy.init(args=args)

    action_client = EposActionClient()
    print("a")
    deg = 0
    future = action_client.send_goal(True)
    #future = action_client.send_goal(int(682.7*deg))
    print("b")
    #future = action_client.send_goal(10000)
    rclpy.spin_until_future_complete(action_client, future)


if __name__ == '__main__':
    main()