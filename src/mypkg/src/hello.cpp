// Hello, ROS!
// This i s a ROS version of the standard " h e l l o , world"
// program .

// This header defines the standard ROS c l a s s e s .
#include <ros/ros.h>

int main(int argc, char** argv) {
 // Initialize the ROS system .
	ros::init(argc, argv, "hello_ros");

 // Establish this program as a ROS node .
	ros::NodeHandle nh ;

 // Send some output as a log message .
	ROS_INFO("Hello, ROS!");
	return 0;
}

// int main(int argc, char const *argv[])
// {
// 	/* code */
// 	return 0;
// }