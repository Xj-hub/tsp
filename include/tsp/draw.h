#ifndef TSP_DRAW_H
#define TSP_DRAW_H

#include <ros/ros.h>
#include "std_msgs/Int32MultiArray.h"
#include "tsp/point.h"

class Draw{
private:
    std::vector<Point> points;
    ros::Publisher marker_pub;
    ros::Subscriber path_sub;

public:
    Draw(ros::NodeHandle * nh, std::vector<Point> points);
    void paint(const std_msgs::Int32MultiArray& msg);
};



#endif