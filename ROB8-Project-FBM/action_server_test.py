import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
import time
from epos_node_test.action import Fibonacci
from epos import eposClass

class FibonacciActionServer(Node):

    def __init__(self):
        self.epos = eposClass.epos("USB0", 3)
        super().__init__('fibonacci_action_server')
        self._action_server = ActionServer(
            self,
            Fibonacci,
            'fibonacci',
            self.execute_callback)

    def execute_callback(self, goal_handle):
        self.epos.MoveToPositionSpeed(goal_handle.request.order, 5000)
        goal_handle.succeed()
        result = Fibonacci.Result()
        return result


def main(args=None):
    rclpy.init(args=args)

    fibonacci_action_server = FibonacciActionServer()

    rclpy.spin(fibonacci_action_server)


if __name__ == '__main__':
    main()