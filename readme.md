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
* driver.cpp (link : ~/src/assn1/src/driver.cpp)
1. subscribe cmd_vel
2. calculate vel_left and right with equations
3. publish cmd_vel_left and right

<br/>

* simulator.cpp (link : ~/src/assn1/src/simulator.cpp)
1. subscribe cmd_vel_left and right
2. calculate pose_x, y, theta with equations
3. publish pose_x, y, theta data

## Instruction
Installation
```
$ cd  
$ git clone  
$ cd assn1  
$ catkin_make  
```
Execution
'''
$ source ~/assn1/devel/setup.bash //when opening every terminal
$ rosrun assn1 driver.cpp
$ rosrun assn1 simulator.cpp
'''
making input
'''
$ rqt
'''

## Screenshots
![screenshot1](./images/screenshot1.png)

## Video
Execution video [LINK](https://pages.github.com/).
