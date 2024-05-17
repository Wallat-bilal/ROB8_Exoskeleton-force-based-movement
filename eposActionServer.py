import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from std_msgs.msg import String
from epos import eposClass_test
from time import sleep
import time
import json
import epos_action_node.action as ep
from datetime import datetime

class EposActionServer(Node):

    def __init__(self):
        super().__init__('epos_node_test')
        self.epos = eposClass_test.epos("USB0", 1, True)
        self.epos1 = eposClass_test.epos("USB1", 3, True)
        self.publisher = self.create_publisher(String, 'motorPos', 10)
        self._action_server = ActionServer(
            self,
            ep.Move,
            'moveToPos',
            execute_callback=self.execute_callback)
            #goal_callback=self.goal_callback,
            #cancel_callback=self.cancel_callback)
            
    async def execute_callback(self, goal_handle):
        # implement your action logic here
        print("Goal received")
        self.parseJson(goal_handle.request.order)
        print("PARSED")
        #self.epos.MoveToPositionSpeed(goal_handle.request.order, 5000)
        result = ep.Move.Result()
        # check if the action has been canceled
        if goal_handle.is_cancel_requested:
            return result
        goal_handle.succeed()
        return result
        
    def parseJson(self, jsonCmd):
        jsonCmd = jsonCmd.replace("'",'"')
        cmd = json.loads(jsonCmd)
        if (cmd["type"]) == "homing":
            print("Homing")
            self.epos.home(True, 4000)
            self.epos1.home(False, 4000)
        elif cmd["type"] == "pos":
            motor0=cmd["motor0"]
            motor1=cmd["motor1"]
            self.epos.activate_position_profile_mode()
            self.epos.set_position_profile_DpS(int(motor0["dps"]),int(motor0["dps"]),int(motor0["dps"]))
            self.epos1.activate_position_profile_mode()
            self.epos1.set_position_profile_DpS(int(motor1["dps"]),int(motor1["dps"]),int(motor1["dps"]))
            self.epos.set_target_position_degree(float(motor0["value"]))
            self.epos1.set_target_position_degree(float(motor1["value"]))
            #print(self.epos.calculate_time_to_position())
            print(motor0["value"])
            self.epos.move_to_position_degree(int(motor0["value"]))
            self.epos1.move_to_position_degree(int(motor1["value"]))
            moving = True
            oldPos = 0
            oldPos1 = 0
            timeToPos0 = self.epos.calculate_time_to_position()
            timeToPos1 = self.epos1.calculate_time_to_position()
            startTime = time.time()
            curTime = 0
            
            # Define the log file path
            log_file_path = '/home/sam/exo_repo/ROB8-Project2/motor_log.txt'
            
            while moving:
                if time.time() - curTime > 0.02:
                    curTime = time.time()
                    newPos = self.epos.get_position_Degree()
                    newPos1 = self.epos1.get_position_Degree()
                    current_timestamp = datetime.now().strftime('%H:%M:%S.%f')[:-3]
                    msg = String()
                    msg.data = '{"timeStart":"'+str(startTime)+'","timeNow":"'+str(time.time())+'", "timestamp":"'+current_timestamp+'", "motor0":"'+str(newPos)+'", "motor1":"'+str(newPos1)+'"}'
                    self.publisher.publish(msg)

                    # Log motor positions to file with timestamp
                    with open(log_file_path, 'a') as log_file:
                        log_file.write(f"{current_timestamp} - motor0: {newPos}, motor1: {newPos1}\n")
                    
                    pos0 = newPos - oldPos
                    pos1 = newPos1 - oldPos1
                    timeSpent = round(curTime-startTime,3)
                    if (abs(pos0) < 0.7 and abs(pos1) < 0.7) and (timeSpent > timeToPos0 and timeSpent > timeToPos1):
                        moving = False
                    else:
                        print (pos1)
                        print(timeSpent-timeToPos1)
                    oldPos = newPos
                    oldPos1 = newPos1
            #sleep(1)

    def publish(self, msg):
        self.publisher.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    epos_action_server = EposActionServer()

    rclpy.spin(epos_action_server)


if __name__ == '__main__':
    main()

