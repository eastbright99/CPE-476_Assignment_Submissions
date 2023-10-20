#include <ros/ros.h>
#include <std_msgs/Float64.h>
#include <math.h>

std_msgs::Float64 g_current_pose_x;
std_msgs::Float64 g_current_pose_y;
std_msgs::Float64 g_current_pose_th;

std_msgs::Float64 g_goal_pose_x;
std_msgs::Float64 g_goal_pose_y;
std_msgs::Float64 g_goal_pose_th;

void newgoal();

void CurrentPoseXCallback(const std_msgs::Float64& message_holder) {
    g_current_pose_x.data = message_holder.data;
}

void CurrentPoseYCallback(const std_msgs::Float64& message_holder) {
    g_current_pose_y.data = message_holder.data;
}

void CurrentPoseTHCallback(const std_msgs::Float64& message_holder) {
    g_current_pose_th.data = message_holder.data;
}

void newgoal(){
    int X = -50 + (rand() % 101);
    int Y = -50 + (rand() % 101);
    int TH = 0 + (rand() % 50); 
    g_goal_pose_x.data = X;
    g_goal_pose_y.data = Y;
    g_goal_pose_th.data = TH;
    
}

int main(int argc, char **argv) {
    ros::init(argc, argv, "driver");
    ros::NodeHandle nh;

    ros::Subscriber sub_1 = nh.subscribe("/current/pose_x", 1, CurrentPoseXCallback);
    ros::Subscriber sub_2 = nh.subscribe("/current/pose_y", 1, CurrentPoseYCallback);
    ros::Subscriber sub_3 = nh.subscribe("/current/pose_th", 1, CurrentPoseTHCallback);
       
    ros::Publisher pub_1 = nh.advertise<std_msgs::Float64>("/goal/pose_x", 1);
    ros::Publisher pub_2 = nh.advertise<std_msgs::Float64>("/goal/pose_y", 1);
    ros::Publisher pub_3 = nh.advertise<std_msgs::Float64>("/goal/pose_th", 1);

    double dt = 0.01;
    double sample_rate = 1.0 / dt;
    ros::Rate naptime(sample_rate);

    g_goal_pose_x.data = 0.0;
    g_goal_pose_y.data = 0.0;
    g_goal_pose_th.data = 0.0;
    g_current_pose_x.data = 0.0;
    g_current_pose_y.data = 0.0;
    g_current_pose_th.data = 0.0;

    pub_1.publish(g_goal_pose_x);
    pub_2.publish(g_goal_pose_y);
    pub_3.publish(g_goal_pose_th);
    ros::Rate loop_rate(1);
    while (ros::ok()) {
        double thD = sqrt(pow((g_goal_pose_th.data - g_current_pose_th.data),2));
        if (thD == 0) {
            newgoal();
        }
        else if (thD < 0.0001) {
            ROS_INFO("\n<<<<<<<<<<<<<<<Finished!>>>>>>>>>>>>>>>\n<<<<<<<<<<<<making new goal>>>>>>>>>>>>");
            sleep(3);
            int X = 0;
            int Y = 0;
            int TH = 0;        
            newgoal();
        }
        pub_1.publish(g_goal_pose_x);
        pub_2.publish(g_goal_pose_y);
        pub_3.publish(g_goal_pose_th);
        ROS_INFO("Goal Pose\n X : %f\n Y : %f\n TH : %f", g_goal_pose_x.data, g_goal_pose_y.data, g_goal_pose_th.data);

        loop_rate.sleep();
        ros::spinOnce();
    }
    return 0;
}
