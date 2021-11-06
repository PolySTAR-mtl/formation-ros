/** \file mon_noeud_cpp.cpp
 * \brief Exemple de noeud en C++
 *
 * \author Sébastien Darche <sebastien.darche@polytmtl.ca>
 */

#include "ros/ros.h"

#include "handler.h"
#include "mon_package_cpp/MonMessage.h"

int main(int argc, char** argv) {
    ros::init(argc, argv, "node1");
    ros::NodeHandle nh;
    Handler handler(nh);

    ros::Publisher pub = nh.advertise<mon_package_cpp::MonMessage>("topic1", 1);
    ros::Subscriber sub = nh.subscribe("topic2", 1, &Handler::msgCallback, &handler);

    ros::spin();
}

