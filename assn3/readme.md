# Assignment 3 - Donghyung(Dean)

## #1 modify the URDF

based on "drive_robot.launch"
<img src="./images/1.png"/>
<br/>
you just need to modify the "mobile_robot.urdf.xacro" file

<br/><br/>

1) change chassis size
<img src="./images/2.png"/>

2) change wheel joint's position
<img src="./images/3.png"/>

<br/><br/>

## #2 Display robot with Rviz

* Motor Test
<img src="./images/motor.png" width="400" height="400"/>

[Motor Test vid](https://youtube.com/shorts/FEDPxpPm5LE)


<br/><br/>

## #3 Move robot with rqt_robot_steering
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
you can find robot moves based on "/robot_diff_drive_controller/cmd_vel" topic

so you need to change yahboom_keyboard.py
<img src="./images/4.png"/>
```
cmd_vel -> robot_diff_drive_controller/cmd_vel
```
after finishing change

```
roslaunch ros_mobile_robot drive_robot.launch
roslaunch yahboomcar_ctrl yahboom_keyboard.launch
```

[Lidar Test vid](https://youtu.be/mS8J2_pSlNk)

<br/><br/>


