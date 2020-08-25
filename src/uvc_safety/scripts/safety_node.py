#!/usr/bin/env python

import rospy
from std_msgs.msg import String
from sensor_msgs.msg import Range
from pal_detection_msgs.msg import Detections2d

#NVIDIA Jetson UVC controller 
import RPi.GPIO as GPIO
import time


# Pin Definitions
output_pin = 18  # BOARD pin 12, BCM pin 18


class Safety_check:
    def __init__(self):
        self.ultrasonic_range=None
        self.detected=None
        self.human_flag=0
        self.range_flag=0
        self.safety_flag=0

    def ultrasonic_callback(self,msg):
        self.ultrasonic_range=msg.range
        # rospy.loginfo(self.ultrasonic_range)
        self.safety()
        
    
    def detection_callback(self,msg):
        self.detected=msg.detections
        # rospy.loginfo(self.detected)

        self.safety()

    
    def safety(self):

        if self.detected == []: #no humans detected , safety
            rospy.loginfo("Safely operating, no Damm Humans :) ")
        elif self.ultrasonic_range > 2:
            rospy.loginfo("ALERT::SAW HUMAN , BUT FAR Away!! Ultrasonic > 3 meters")

        elif self.ultrasonic_range > 1.5 and self.ultrasonic_range <= 2:

            rospy.loginfo("WARKING::ALARM !!!, Go away Human, Else I will kill you!!!")

        elif self.ultrasonic_range <= 1.5:
            self.human_flag=1
            self.range_flag=1
            
            rospy.loginfo("Stopping UVC lamps because I am not programmed to kill humans but I would have If I could")
        
        self.safety_flag= self.human_flag * self.range_flag
        if self.safety_flag:
            #Turining off the uvc lamps. 
            #setting gpio value to low for safety check 
            GPIO.setup(output_pin, GPIO.OUT,GPIO.LOW)




if __name__ == '__main__':
    try:
        rospy.init_node('uvc_safety')
        safety_check_front = Safety_check()

        rospy.Subscriber("/person_detector/detections",Detections2d,safety_check_front.detection_callback)
        rospy.Subscriber("/sensor/front_ultrasonic",Range,safety_check_front.ultrasonic_callback)
        rospy.spin()

        # Setting up UVC pin to high 
        # Pin Setup:
        # Board pin-numbering scheme
        GPIO.setmode(GPIO.BCM)
        # set pin as an output pin with optional initial state of HIGH
        GPIO.setup(output_pin, GPIO.OUT, initial=GPIO.HIGH)


    except rospy.ROSInterruptException:
        pass




## Simple code for viewing the data inputs .
# def ultrasonic_viewer():
#     rospy.init_node('uvc_safety')
#     rospy.Subscriber("/sensor/front_ultrasonic",Range,ultrasonic_callback)
#     rospy.spin()

# def ultrasonic_callback(msg):
#     rospy.loginfo(msg.range)

# def detection_viewer():
#     rospy.init_node('uvc_safety')
#     rospy.Subscriber("/person_detector/detections",Detections2d,detection_callback)
#     rospy.spin()

# def detection_callback(msg):
#     if not msg.detections:
#         rospy.loginfo("No human detected")
#     else:
#         rospy.loginfo(msg.detections)