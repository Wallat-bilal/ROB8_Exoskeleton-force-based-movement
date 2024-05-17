# ROB8
This project is about implementing a Force based movement (FBM) on the exoskeleton. 
To use our code there are multi steup needs to be done.
First, to use the robot and the code, you need to use a Linux PC, as using VMW has a lot of problems with USB communications. To save yourself a lot of headaches, use a Linux PC.


If you're only interested in using the FBM, then all you need to do is run the load cells sensor first, then run FBM.py.

# Do the following

- `source /opt/ros/humble/setup.bash`
- `source ~/exo_repo/ROB8-Project2/install/setup.bash`
- `cd ~/exo_repo/ROB8-Project2`

Remember, those commands only work based on where you save your files, so make sure that all your files are placed in the right location and make sure to run them in order.

Once you do that, run the following:

- `cd loadcell`
- `python3 loadcell_multi4.py`

Then open a new terminal and make sure you're not in the `cd loadcell` directory in the new terminal. After that you would do something like this:

- `cd ~/exo_repo/ROB8-Project2`
- `python3 FBM_UI.py` or `FBMGravey_UI.py`

This will bring up a UI where you can insert parameters. In this case, you will input hip degrees, knee degrees, scale of the velocity (where scale 1 = 5 degrees per second), a timer for how long to lock in the new position, and the threshold of the load cells for hip and knee.


To make sure that the robot is homed, we need to use the old code. Make sure that you have turned off `FBM_UI.py` with `CTRL+C`. Then, you need to open 3 new terminals and do the following:

# Do the following

- `source /opt/ros/humble/setup.bash`
- `source ~/exo_repo/ROB8-Project2/install/setup.bash`
- `cd ~/exo_repo/ROB8-Project2`
- `python3 eposActionServer.py`
- `python3 eposActionClient.py`
- `python3 UI.py`

Once you have done the following commands, go into the UI and press 1. If nothing happens to the robot or any motors move, look in the `eposActionClient.py` terminal and `eposActionServer.py` terminal. If you see them turned off, you need to do the following in the correct directory of your PC:

- `cd ~/exo_repo/ROB8-Project2`
- `rm -rf build install log`
- `colcon build --packages-select epos_action_node`
- `source install/setup.bash`

Then run them once more and try to input the following in the UI: 1, then 3 to home (full homing). Once it is homed, make sure to `CTRL+C` out of the `eposActionServer.py` terminal only.

Then restart:
- `cd loadcell`
- `python3 loadcell_multi4.py`
- `python3 FBM_UI.py`

When running the `FBM_UI.py` or `FBMGravey_UI.py`, there will be 3 loggers: one for load cells, one for motor positions, and one for degrees per second.

