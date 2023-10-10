# Forward Kinematics of a DDMWR/Assignment 1 - Donghyung(Dean)

## Assignment Interpretation
* develop two cpp or python files, the driver and the simulator.

* The driver's topic/msg 
    1) constantly publishes the cmd_vel (both velocities left and right). 

* The simulator's two topics/msgs 
    1) a subscriber that consumes cmd_vel.
    1) a publisher that publishes the pose (not consumed).

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
$ git clone https://github.com/eastbright99/CPE-476_Assignment_Submissions/assn1.git
$ cd assn1
$ catkin_make
```

<br/>

Execution
```
$ roscore                            // just one time
$ source ~/assn1/devel/setup.bash    // when opening every terminal
$ rosrun assn1 driver.cpp
$ rosrun assn1 simulator.cpp
```

<br/>

making input
```
$ rqt
```
Plugins >> Topics >> Message Publisher >> [+] >> cmd_vel  
change values with linear.x and angular.z  

Finally, check the diffrence with output on the terminal

## Screenshots
![screenshot1](./images/screenshot1.png)

## Video
Execution video [LINK](https://pages.github.com/).
