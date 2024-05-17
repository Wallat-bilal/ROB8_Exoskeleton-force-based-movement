Welcome to our ROB 8 project repo!!!

Links:

https://www.maxongroup.com/maxon/view/product/control/Positionierung/520886

How to build package
Go into pck root dir
colcon build (Or colcon build –packages-select <package>)


Check if it is installed correctly: 
. install/setup.bash
ros2 interface show action_tutorials_interfaces/action/MoveToPos

To run the whole system run:
(In seperate terminals)
Start (Same for all):
    source /opt/ros/foxy/setup.bash(Not this one)
    . install/setup.bash
Nodes:
python3 EposActionServer.py
python3 EposActionClient.py
python3 loadcell_multi4.py (In loadcell dir) (sudo chmod 666 /dev/ttyACM0)
python3 UI.py
python3 subcriber.py

When all nodes are running, use UI for controlling skeleton