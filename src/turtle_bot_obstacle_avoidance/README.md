# A Obstacle AvoidanceTurtlebot 3 implemented in ROS


## Introduction 
This is an obstacle avoidance technique simulated with Turtlebot 3 in Gazebo, ROS. The Turtlebot uses planar laser range-finder to detect obstacles in front as well as 15 degrees left and right from the front. Then based on the obstacle range, it either goes forward with linear velocity or, stops and rotates with angular velocity until it finds an obstacle-free path to go forward again.


## Usage
- After pulling docker cointainer and running docker_run script in the root 
- README.md file, do 
- In root Micron folder, do this first. Then 
```
catkin_make
source devel/setup.bash 
```
```
roslaunch turtlebot3_gazebo turtlebot3_world.launch
roslaunch turtle_bot_obstacle_avoidance simulate_obstacle_avoidance.launch
```

## Demo
[youtube](demo/demo.gif)

### Note
This is implemented on Ubuntu 18.04, ROS Melodic Morenia.

