# Assignment 1
develop two cpp or python files, the simulator and the driver.

The driver's topic/msg 
1) constantly publishes the cmd_vel (both velocities left and right). 

The simulator's two topics/msgs
1) a publisher that publishes the pose (not consumed)
2) a subscriber the consumes cmd_vel

The simulator implements a simple differential driver forward kinematics of a mobile robot to determine the pose of the robot.

## Source

driver
~/ws_assn1/src/assn1/src/driver.cpp

simulator
~/ws_assn1/src/assn1/src/simulator.cpp

