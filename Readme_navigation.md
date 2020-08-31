# MicronUVGIRobot
// Clone the github repository in home folder
cd ~/
git clone https://github.com/sandy1618/MicronUVGIRobot.git

export TURTLEBOT3_MODEL=burger3
source ~/.bashrc


// Start SLAM:
roslaunch turtlebot3_slam turtlebot3_slam.launch slam_methods:=gmapping

// Start autonomous navigation in a new terminal tab:
roslaunch turtlebot3_navigation turtlebot3_navigation.launch map_file:=$HOME/map.yaml

roslaunch turtlebot3_gazebo turtlebot3_house.launch


//NOTE: Make sure move_base is in the list when you run $ ls /opt/ros/<distro>/lib/move_base/  and configured properly

//If not, this means move_base has not been installed properly, run sudo apt-get install ros-<distro>-move-base and then run rospack profile to update your package list and then you can try to run your move_base node again.

//to start waypoint navigation
cd follow_waypoints
chmod +x waypointCreation.py
rosrun follow_waypoints waypointCreation.py
roslaunch follow_waypoints follow_waypoints.launch

//if connected to motors
rosrun diff_drive diff_drive_go_to_goal


//Setup the Navigation Stack following these tutorial 
https://wiki.ros.org/navigation/Tutorials/RobotSetup
http://wiki.ros.org/navigation/Tutorials/SendingSimpleGoals 
https://emanual.robotis.com/docs/en/platform/turtlebot3/navigation/#ros-1-navigation 


