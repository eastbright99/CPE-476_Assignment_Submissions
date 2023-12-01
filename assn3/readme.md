# Assignment 3 - Donghyung(Dean)

## #1 modify the URDF

based on "drive_robot.launch"
<img src="./images/1.png"/>
<br/>
you just need to modify the "mobile_robot.urdf.xacro" file
<br/>
1) change chassis size
<img src="./images/2.png"/>
2) change wheel joint's position
<img src="./images/3.png"/>

<br/><br/>

## #2 Display robot with Rviz
<img src="./images/7.png" width="400" height="300"/><img src="./images/5.png" width="400" height="300"/><img src="./images/6.png" width="400" height="300"/>

<br/><br/>

## #3 Move robot with rqt_robot_steering
<img src="./images/8.png" width="200" height="300"/>

```
roslaunch ros_mobile_robot drive_robot.launch
rosrun rqt_robot_steering rqt_robot_steering
```

you can see robot move

<br/><br/>



## #4 Move robot with keyboard

```
rostopic list
```
<img src="./images/9.png"/>
you can find robot moves based on "/robot_diff_drive_controller/cmd_vel" topic

<br/><br/>

so in "yahboom_keyboard.py"

<br/>

<img src="./images/4.png"/>

you need to modify
'cmd_vel' -> 'robot_diff_drive_controller/cmd_vel'

after finishing change

```
roslaunch ros_mobile_robot drive_robot.launch
roslaunch yahboomcar_ctrl yahboom_keyboard.launch
```
you can see robot move

[Lidar Test vid](https://youtu.be/mS8J2_pSlNk)

<br/><br/>


