#!/usr/bin/env python
import rospy

from mon_package_cpp.msg import MonMessage # Autre module
from std_msgs.msg import String

def callback(msg):
    print('Node python : ', msg.data)

rospy.init_node('nom_noeud', anonymous=True)
pub = rospy.Publisher('topic1', MonMessage, queue_size=1)
sub = rospy.Subscriber('topic2', String, callback, queue_size=1)
rospy.spin()


