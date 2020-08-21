# MicronUVGIRobot
## If you dont have docker, then install git & docker 
sudo apt-get remove docker docker-engine docker.io containerd runc  

curl -fsSL https://get.docker.com -o get-docker.sh

sudo sh get-docker.sh

sudo usermod -aG docker $USER

## Follow these steps after cloning this repository to your home/ 
#### TODO: for other ros versions and Nvidia implementations , as of now , only melodic version is used. 
cd ~/MicronUVGIRobot/ros-docker-gui 

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
--name ros_melodic1 \
turlucode/ros-melodic:cpu

```






### Ignore below
```
For documentation purpose only , the below depedencies are used inside the docker
 

Additional Software 
- sudo apt update
- sudo apt-get install byobu

Dependencies 
- sudo apt-get install ros-melodic-pid
- sudo apt-get install ros-melodic-joy ros-melodic-joystick-drivers
- sudo apt-get install ros-melodic-gmapping
- sudo apt-get install ros-melodic-navigation

Installing real-sense2
sudo apt-get update
sudo apt-get install ros-melodic-ddynamic-reconfigure

might be needed
sudo apt-key adv --keyserver 'hkp://keyserver.ubuntu.com:80' --recv-key C1CF6E31E6BADE8868B172B4F42ED6FBAB17C654
sudo apt-key del 421C365BD9FF1F717815A3895523BAEEB01FA116

Installing realsense
(realsense2)[https://github.com/IntelRealSense/librealsense/blob/master/doc/distribution_linux.md]

Steps for installing all realsense dependenceis 

sudo apt-key adv --keyserver keys.gnupg.net --recv-key F6E65AC044F831AC80A06380C8B3A55A6F3EFCDE || sudo apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv-key F6E65AC044F831AC80A06380C8B3A55A6F3EFCDE

sudo add-apt-repository "deb http://realsense-hw-public.s3.amazonaws.com/Debian/apt-repo bionic main" -u

sudo apt-get update
sudo apt-get install librealsense2-dkms librealsense2-utils librealsense2-dev
 
sudo apt-get install librealsense2-dbg
sudo apt install -y librealsense-object-recognition-dev librealsense-persontracking-dev librealsense-slam-dev libopencv-dev



```

### Commands 
roslaunch turtlebot3_slam turtlebot3_gmapping_v1.launch 


