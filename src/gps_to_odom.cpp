#include "ros/ros.h"

// write first node here

int main(int argc, char **argv){

    ros::init(argc, argv, "gps_to_odom");

  	while (ros::ok()){

    	ROS_INFO("%s", "hello gps_to_odom!");


    	ros::spinOnce();
  	
    }
  	return 0;
}