#include<ros/ros.h>
#include <geometry_msgs/Twist.h>
#include<std_msgs/Float64.h>
#include <math.h>

std_msgs::Float64 g_cmd_vel_left;
std_msgs::Float64 g_cmd_vel_right;
std_msgs::Float64 g_pose_x;
std_msgs::Float64 g_pose_y;
std_msgs::Float64 g_pose_theta;

void LeftCallback(const std_msgs::Float64& message_holder) {
    g_cmd_vel_left.data = message_holder.data;
}

void RightCallback(const std_msgs::Float64& message_holder) {
    g_cmd_vel_right.data = message_holder.data;
}

int main(int argc, char **argv) {
    ros::init(argc, argv, "simulator");
    ros::NodeHandle nh;

    ros::Subscriber sub_object1 = nh.subscribe("cmd_vel_left", 1, LeftCallback);
    ros::Subscriber sub_object2 = nh.subscribe("cmd_vel_right", 1, RightCallback);
    ros::Publisher pub_object1 = nh.advertise<std_msgs::Float64>("pose_x", 1);
    ros::Publisher pub_object2 = nh.advertise<std_msgs::Float64>("pose_y", 1);
    ros::Publisher pub_object3 = nh.advertise<std_msgs::Float64>("pose_theta", 1);
    
    double L = 1.0; //axle length
    double dt = 0.01;
    double sample_rate = 1.0 / dt;
    ros::Rate naptime(sample_rate);
    
    g_cmd_vel_left.data = 0.0;
    g_cmd_vel_right.data = 0.0;
    g_pose_x.data = 0.0;
    g_pose_y.data = 0.0;
    g_pose_theta.data = 0.0;

    while (ros::ok()) {
        if (g_cmd_vel_left.data == g_cmd_vel_right.data) {
            
            g_pose_theta.data = g_pose_theta.data;
            g_pose_x.data = g_pose_x.data + g_cmd_vel_left.data * cos(g_pose_theta.data) * dt;
            g_pose_y.data = g_pose_y.data + g_cmd_vel_left.data * sin(g_pose_theta.data) * dt;
                  
        }
        
        else {
        
            
            double R = L / 2.0 * ((g_cmd_vel_left.data + g_cmd_vel_right.data) / (g_cmd_vel_right.data - g_cmd_vel_left.data));
            
            double ICC_x = g_pose_x.data - R * sin(g_pose_theta.data);
                      
            double ICC_y = g_pose_y.data + R * cos(g_pose_theta.data);
            
            double omega = (g_cmd_vel_right.data - g_cmd_vel_left.data) / L;
            
            g_pose_x.data = cos(omega * dt) * (g_pose_x.data - ICC_x) - sin(omega * dt) * (g_pose_y.data -ICC_y) + ICC_x;
            
            g_pose_y.data = sin(omega * dt) * (g_pose_x.data - ICC_x) + cos(omega * dt) * (g_pose_y.data -ICC_y) + ICC_y;
            
            g_pose_theta.data = g_pose_theta.data + omega * dt;
        
        }

                
        pub_object1.publish(g_pose_x);
        pub_object2.publish(g_pose_y);                
        pub_object3.publish(g_pose_theta);
        ROS_INFO("current pose X location = %f", g_pose_x.data);
        ROS_INFO("current pose Y location = %f", g_pose_y.data);
        ROS_INFO("current pose Theta value = %f", g_pose_theta.data);
        
        ros::spinOnce();
        naptime.sleep();
    }
    return 0;
} 

