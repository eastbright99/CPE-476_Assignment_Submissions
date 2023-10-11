# Assignment 1 - Donghyung(Dean)

## Assignment Interpretation
* develop two cpp or python files, the driver and the simulator.

* The driver's topic/msg 
    1) constantly publishes the cmd_vel (both velocities left and right). 

* The simulator's two topics/msgs 
    1) a subscriber that consumes cmd_vel.
    1) a publisher that publishes the pose (not consumed).

* The simulator implements a simple differential driver forward kinematics of a mobile robot to determine the pose of the robot.

## Brief Description
* driver.cpp (link : ~/assn1/src/assn1/src/driver.cpp)
1. receive cmd_vel with geometry_msgs/Twist
2. calculate vel_left and right with equations
3. publish cmd_vel_left and right

<br/>

* simulator.cpp (link : ~/assn1/src/assn1/src/simulator.cpp)
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
$ rosrun assn1 driver
$ rosrun assn1 simulator
```

<br/>

Putting input
```
$ rqt
```
With rqt, Plugins >> Topics >> Message Publisher >> [+] >> cmd_vel  
change values with linear.x and angular.z  

Finally, check the diffrence with output on the terminal

## Screenshots
Initial Velocity
![int_vel](./images/int_vel.png)
<br/>
Initial Pose
![int_pose](./images/int_pose.png)
<br/>
rqt
![rqt](./images/rqt.png)
<br/>
Current Velocity
![cur_vel](./images/cur_vel.png)
<br/>
Current Pose
![cur_pose](./images/cur_pose.png)

## Video
Execution video [LINK](https://pages.github.com/).

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
