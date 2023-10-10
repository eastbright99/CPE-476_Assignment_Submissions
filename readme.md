# Forward Kinematics of a DDMWR/Assignment 1 - Donghyung(Dean)

## Assignment Interpretation
* develop two cpp or python files, the driver and the simulator.

* The driver's topic/msg 
    1) constantly publishes the cmd_vel (both velocities left and right). 

* The simulator's two topics/msgs 
    1) a subscriber that consumes cmd_vel
    1) a publisher that publishes the pose (not consumed)

* The simulator implements a simple differential driver forward kinematics of a mobile robot to determine the pose of the robot.

## Brief Description
driver\
1. sub cmd_vel
2. calculate vel_left and right with linear_vel and angular_vel
3. pub cmd_vel_left and right\
link to driver : ~/src/assn1/src/driver.cpp

simulator\
link to simulator : ~/src/assn1/src/simulator.cpp

## Instruction to excute


## Screenshots
![screenshot1](./images/screenshot1.png)

## Video
Execution video [LINK](https://pages.github.com/).
