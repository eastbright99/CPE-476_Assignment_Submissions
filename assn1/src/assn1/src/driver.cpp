#include<ros/ros.h>
#include <geometry_msgs/Twist.h>
#include<std_msgs/Float64.h>

geometry_msgs::Twist cmd_vel;
std_msgs::Float64 g_lin_vel;
std_msgs::Float64 g_ang_vel;
std_msgs::Float64 g_cmd_vel_left;
std_msgs::Float64 g_cmd_vel_right;

void VelCallback(const geometry_msgs::Twist& message_holder) {
    g_lin_vel.data = message_holder.linear.x;
    g_ang_vel.data = message_holder.angular.z;
}

int main(int argc, char **argv) {
    ros::init(argc, argv, "driver");
    ros::NodeHandle nh;

    ros::Subscriber sub_object = nh.subscribe("cmd_vel", 1, VelCallback);
    ros::Publisher pub_object1 = nh.advertise<std_msgs::Float64>("cmd_vel_left", 1);
    ros::Publisher pub_object2 = nh.advertise<std_msgs::Float64>("cmd_vel_right", 1);

    double L = 1.0; //axle length
    double dt = 0.01;
    double sample_rate = 1.0 / dt;
    ros::Rate naptime(sample_rate);
    
    g_lin_vel.data = 0.0;
    g_ang_vel.data = 0.0;
    g_cmd_vel_left.data = 0.0;
    g_cmd_vel_right.data = 0.0;

    while (ros::ok()) {
        g_cmd_vel_left.data = (g_lin_vel.data - L * g_ang_vel.data);
        g_cmd_vel_right.data = (g_lin_vel.data + L * g_ang_vel.data);
        
        pub_object1.publish(g_cmd_vel_left);
        pub_object2.publish(g_cmd_vel_right);
        ROS_INFO("left side velocity value = %f", g_cmd_vel_left.data);
        ROS_INFO("right side velocity value = %f", g_cmd_vel_right.data);
        
        ros::spinOnce();
        naptime.sleep();
    }
    return 0;
}

