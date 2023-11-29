#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include <std_msgs/Float64.h>
#include <sstream>
#include <math.h>

using namespace std;

std_msgs::Float64 g_current_pose_x;
std_msgs::Float64 g_current_pose_y;
std_msgs::Float64 g_current_pose_th;

std_msgs::Float64 g_goal_pose_x;
std_msgs::Float64 g_goal_pose_y;
std_msgs::Float64 g_goal_pose_th;

std_msgs::Float64 g_lin_vel;
std_msgs::Float64 g_ang_vel;

ros::Subscriber sub_1;
ros::Subscriber sub_2;
ros::Subscriber sub_3;
ros::Subscriber sub_4;

ros::Publisher pub_1;
ros::Publisher pub_2;
ros::Publisher pub_3;
ros::Publisher pub_4;

const double PI = 3.14159265359;

void pose();
void move();
void rotate();
void VelCallback(const geometry_msgs::Twist& cmd_vel);
void GoalPoseXCallback(const std_msgs::Float64& message_holder);
void GoalPoseYCallback(const std_msgs::Float64& message_holder);
void GoalPoseTHCallback(const std_msgs::Float64& message_holder);

void VelCallback(const geometry_msgs::Twist& cmd_vel) {
    g_lin_vel.data = cmd_vel.linear.x;
    g_ang_vel.data = cmd_vel.angular.z;
}

void GoalPoseXCallback(const std_msgs::Float64& message_holder) {
    g_goal_pose_x.data = message_holder.data;     
}

void GoalPoseYCallback(const std_msgs::Float64& message_holder) {
    g_goal_pose_y.data = message_holder.data;
}

void GoalPoseTHCallback(const std_msgs::Float64& message_holder) {
    g_goal_pose_th.data = message_holder.data;       
}

int main(int argc, char **argv) {
	ros::init(argc, argv, "turtlesim_cleaner");
	ros::NodeHandle nh;
	double speed, angular_speed;
	double distance, angle;
	bool isForward, clockwise;

    sub_1 = nh.subscribe("/goal/pose_x", 1, GoalPoseXCallback);
    sub_2 = nh.subscribe("/goal/pose_y", 1, GoalPoseYCallback);
    sub_3 = nh.subscribe("/goal/pose_th", 1, GoalPoseTHCallback);
    sub_4 = nh.subscribe("/cmd_vel", 1, VelCallback);

    pub_1 = nh.advertise<std_msgs::Float64>("/current/pose_x", 1);
    pub_2 = nh.advertise<std_msgs::Float64>("/current/pose_y", 1);
    pub_3 = nh.advertise<std_msgs::Float64>("/current/pose_th", 1);
    pub_4 = nh.advertise<geometry_msgs::Twist>("cmd_vel", 1000);

    ros::Rate loop_rate(100);
    while (ros::ok()) {
        double D = sqrt(pow((g_goal_pose_x.data-g_current_pose_x.data),2) + pow((g_goal_pose_y.data-g_current_pose_y.data),2));

        pose();
        move();
        if (D < 0.01) {
            rotate();
        }

        loop_rate.sleep();
        ros::spinOnce();
    }
    return 0;
}

void pose() {
    double L = 1.0;
    double dt = 0.01;
    double sample_rate = 1.0 / dt;
    ros::Rate naptime(sample_rate);
    
    double vel_left = (g_lin_vel.data - L * g_ang_vel.data);
    double vel_right = (g_lin_vel.data + L * g_ang_vel.data);
        
    if (vel_left == vel_right) {
        g_current_pose_th.data = g_current_pose_th.data + g_ang_vel.data * dt;
        g_current_pose_x.data = g_current_pose_x.data + vel_left * cos(g_current_pose_th.data) * dt;
        g_current_pose_y.data = g_current_pose_y.data + vel_left * sin(g_current_pose_th.data) * dt;
    }
    else {
        double R = L / 2.0 * ((vel_left + vel_right) / (vel_right - vel_left));
        double ICC_x = g_current_pose_x.data - R * sin(g_current_pose_th.data);                     
        double ICC_y = g_current_pose_y.data + R * cos(g_current_pose_th.data);          
        double omega = (vel_right - vel_left) / L;         
        g_current_pose_x.data = cos(omega * dt) * (g_current_pose_x.data - ICC_x) - sin(omega * dt) * (g_current_pose_y.data -ICC_y) + ICC_x;         
        g_current_pose_y.data = sin(omega * dt) * (g_current_pose_x.data - ICC_x) + cos(omega * dt) * (g_current_pose_y.data -ICC_y) + ICC_y;          
        g_current_pose_th.data = g_current_pose_th.data + g_ang_vel.data * dt + omega * dt;
    }
    pub_1.publish(g_current_pose_x);
    pub_2.publish(g_current_pose_y);                
    pub_3.publish(g_current_pose_th);

    ROS_INFO("Current Pose\n X : %f\n Y : %f\n TH : %f", g_current_pose_x.data, g_current_pose_y.data, g_current_pose_th.data);

}

void move() {
    geometry_msgs::Twist vel;
    double D = sqrt(pow((g_goal_pose_x.data-g_current_pose_x.data),2) + pow((g_goal_pose_y.data-g_current_pose_y.data),2));
    double thD = atan2(g_goal_pose_y.data - g_current_pose_y.data, g_goal_pose_x.data - g_current_pose_x.data)-g_current_pose_th.data ;

    if (D > 0.01) {
	    vel.linear.x = min(1.5* D, 5.0);        // 1.5 is approximate proportional k value in PID controller with linear velocity
	    vel.linear.y = 0;
	    vel.linear.z = 0;

	    vel.angular.x = 0;
	    vel.angular.y = 0;
	    vel.angular.z = 2 * thD;                // 2.0 is approximate proportional k value in PID controller with angular velocity
        pub_4.publish(vel);
    }
    else {
        vel.linear.x = 0;
        vel.angular.z = 0;
	    pub_4.publish(vel);	 
    }
}

void rotate() {
    geometry_msgs::Twist vel;
    
	vel.linear.x = 0;
	vel.linear.y = 0;
	vel.linear.z = 0;

	vel.angular.x = 0;
	vel.angular.y = 0;
	vel.angular.z = 2 * (g_goal_pose_th.data - g_current_pose_th.data);
    pub_4.publish(vel);

    if (-0.01 < g_goal_pose_th.data - g_current_pose_th.data < 0.01) {
        vel.angular.z = 0;
	    pub_4.publish(vel);
    }
}
