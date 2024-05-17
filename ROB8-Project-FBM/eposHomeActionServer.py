import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from epos import eposClass
from time import sleep
import epos_node_test.action as ep

class EposActionServer(Node):

    def __init__(self):
        super().__init__('epos_node_test')
        self.epos = eposClass.epos("USB0", 3)
        self._action_server = ActionServer(
            self,
            ep.Home,
            'home',
            execute_callback=self.execute_callback)
            #goal_callback=self.goal_callback,
            #cancel_callback=self.cancel_callback)
            
    async def execute_callback(self, goal_handle):
        # implement your action logic here
        print("Goal received")
        self.epos.Home(goal_handle.request.order)
        print(goal_handle.request.order)
        result = ep.Home.Result()
        # check if the action has been canceled
        if goal_handle.is_cancel_requested:
            return result
        goal_handle.succeed()
        return result



def main(args=None):
    rclpy.init(args=args)

    epos_action_server = EposActionServer()

    rclpy.spin(epos_action_server)


if __name__ == '__main__':
    main()