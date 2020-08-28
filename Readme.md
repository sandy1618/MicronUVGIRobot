# MicronUVGIRobot
## Clone the github repository in home folder
cd ~/
git clone https://github.com/sandy1618/MicronUVGIRobot.git

## Install docker
### If you dont have docker, then install git & docker 
sudo apt-get remove docker docker-engine docker.io containerd runc  

curl -fsSL https://get.docker.com -o get-docker.sh

sudo sh get-docker.sh

sudo usermod -aG docker $USER

## Two Methods: Method 1
### Downloading image file from Docker Hub

docker pull uvtar/trishul:UVtar_client

## Two Methods: Method 1
### Building Image from source repository 

### Follow these steps after cloning this repository to your home/ 
#### TODO: for other ros versions and Nvidia implementations , as of now , only melodic version is used. 

cd ~/MicronUVGIRobot/Support/ros-docker-gui 

chmod 666 /var/run/docker.so 

make cpu_ros_melodic



## Running docker. 
copy and paste from file docker_run in root or from here: 

```
docker run --rm -it --privileged --ipc=host \
--device=/dev/dri:/dev/dri \
--network host \
-v ~/.ssh:/home/.ssh \
-v /tmp/.X11-unix:/tmp/.X11-unix -e DISPLAY=$DISPLAY \
-v $HOME/.Xauthority:/home/$(id -un)/.Xauthority -e XAUTHORITY=/home/$(id -un)/.Xauthority \
-e DOCKER_USER_NAME=$(id -un) \
-e DOCKER_USER_ID=$(id -u) \
-e DOCKER_USER_GROUP_NAME=$(id -gn) \
-e DOCKER_USER_GROUP_ID=$(id -g) \
-e ROS_IP=127.0.0.1 \
-v $HOME/MicronUVGIRobot:$HOME/MicronUVGIRobot \
--name UVtar_client1 \
uvtar/trishul:UVtar_client

```
### Stopping Docker 
docker stop UVtar_client1

### Commands to run the simulation , UVTar Simulated alter-ego is burger3

```

export TURTLEBOT3_MODEL=burger3

// For simple environment with animated human actor , cannot be detected by lidar / ultrasonic sensor
roslaunch turtlebot3_slam turtlebot3_gmapping_v1.launch 

//For office based environent with static human models detected by lidar, ultrasonic sensor
roslaunch turtlebot3_slam turtlebot3_gmapping_v2.launch 
// Controlling turtlebot
roslaunch turtlebot3_teleop turtlebot3_teleop_key.launch

roslaunch pal_person_detector_opencv detector.launch image:=/front_realsense/color/image_raw
rosrun image_view image_view image:=/person_detector/debug
rostopic echo /person_detector/detections

roslaunch pal_face_detector_opencv detector.launch image:=/front_realsense/color/image_raw
rosrun image_view image_view image:=/pal_face/debug

rosrun gazebo_ros spawn_model -file $(find turtlebot3_gazebo)/obstacles/box_obstacle.urdf -urdf -z 1 -model my_object


```

