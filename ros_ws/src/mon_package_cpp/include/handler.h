/** \file handler.h
 * \brief Example C++ ROS handler class
 *
 * \author Sébastien Darche <sebastien.darche@polymtl.ca>
 */

#ifndef _FORMATION_ROS_HANDLER_H
#define _FORMATION_ROS_HANDLER_H

// Std includes

#include <iostream>

// ROS includes

#include <ros/ros.h>
#include <std_msgs/String.h>

class Handler {
  public:
    Handler(ros::NodeHandle& n) : nh(n) {}
  
    void msgCallback(const std_msgs::StringConstPtr& str) {
        std::cout << "Node C++ : " << str->data << '\n';
        count++;
    }

  private:
    ros::NodeHandle& nh;
    unsigned int count = 0u;
};

#endif

