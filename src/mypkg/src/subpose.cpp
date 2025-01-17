/* This program subscribes to turtle1/pose and shows its
messages on the screen
*/
#include <ros/ros.h>
#include <turtlesim/Pose.h>
#include <iomanip> // for std::setprecision and std::fixed

void poseMessageRecieved(const turtlesim::Pose& msg);

int main(int argc, char** argv) {
	// Initialize the ROS system and become a node .
	ros::init(argc, argv, "subscribe_to_pose") ;
	ros::NodeHandle nh;

	// create a subscriber object
	ros::Subscriber sub = nh.subscribe("turtle1/pose", 1000, &poseMessageRecieved);

	// ros section
	ros::spin();
}

//a callback function, executed each time a new pose message
// arrives
void poseMessageRecieved(const turtlesim::Pose& msg) {
	ROS_INFO_STREAM(std::setprecision(2) << std::fixed
		<< "position=(" << msg.x << ", "<< msg.y <<")"
		<< "direction=" << msg.theta);
}

