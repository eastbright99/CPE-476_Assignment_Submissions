# Assignment 5 - Donghyung(Dean)

## #1 Mapping
### Mapping Test  
<img src="./images/mapping.png" width="700" height="450"/>

[Mapping Test vid](https://youtu.be/trhHgOyOMUs)

<br/><br/><br/>

### Sample Datas  
Lab  
<img src="./images/1.jpg" width="300" height="200"/><img src="./images/2.jpg" width="300" height="200"/>

<br/>

Seb 3rd Floor  
<img src="./images/3.jpg" width="600" height="200"/>  
<img src="./images/4.jpg" width="600" height="400"/>  

<br/><br/><br/>

## #2 Navigation

### Navigation Test  
<img src="./images/navigation.png" width="700" height="450"/>

[Navigation Test vid](https://youtu.be/-R1TFmbU0J0)

<br/><br/><br/>

### Main Function
<img src="./images/5.png"/> : enter your current position

<br/>

<img src="./images/6.png"/> : enter your goal position

<br/><br/><br/>

### Results and Discussion
Everything generally proceeds smoothly when we provide proper <img src="./images/5.png"/> and <img src="./images/6.png"/>.  
However, a navigation error occurs in the second video between 1:35 and 2:30.  
I believe there are several possible reasons for this issue.  
<br/>
Firstly, there is a height disparity between the lidar and the wheels. For instance, from the perspective of a wheel, an obstacle might appear in front of the rover. However, since the lidar is positioned at the top, it perceives the space above and may not detect any obstacles.  
<br/>
Secondly, the rover may require sufficient space for steering. In narrow spaces, it produces mixed outputs, causing the rover to come to a stop in its current position.  
<br/>
Finally, there seems to be an odometry gap between the calculated movement and the actual rover position. To be more specific, the program commands output a certain movement, but due to a slip between the wheels and the floor, the rover doesn't actually move as expected.  

<br/><br/>
