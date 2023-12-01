# Assignment 3 - Donghyung(Dean)

## #1 modify the URDF
<img src="./images/1.png"/>
based on "drive_robot.launch" you just need to modify the "mobile_robot.urdf.xacro" file

<br/><br/>

1) change chassis size
  <img src="./images/2.png"/>

2) change wheel joint's position
  <img src="./images/3.png"/>

<br/><br/>

## #2 Display robot with Rviz
<img src="./images/7.png" width="400" height="300"/><img src="./images/5.png" width="400" height="300"/><img src="./images/6.png" width="400" height="300"/>

<br/><br/>

## #3 Move robot with rqt_robot_steering
after you type these
```
roslaunch ros_mobile_robot drive_robot.launch
rosrun rqt_robot_steering rqt_robot_steering
```
<img src="./images/8.png" width="200" height="300"/>

you can see robot move with[rqt_robot_steering](https://youtu.be/mS8J2_pSlNk)

<br/><br/>

## #4 Move robot with keyboard
if you type this
```
rostopic list
```
<img src="./images/9.png"/>
you can find robot moves based on "/robot_diff_drive_controller/cmd_vel" topic

<br/><br/><br/>

<img src="./images/4.png"/>

so in "yahboom_keyboard.py"<br/>
you need to modify 'cmd_vel' -> 'robot_diff_drive_controller/cmd_vel'

<br/><br/>

after finishing change, type these
```
roslaunch ros_mobile_robot drive_robot.launch
roslaunch yahboomcar_ctrl yahboom_keyboard.launch
```
<img src="./images/10.png"/>


you can see robot[move with keyboard](https://youtu.be/mS8J2_pSlNk)

<br/><br/>
