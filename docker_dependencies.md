## Docker Dependcies documentation which is concantinated into to Dockerfile

Changes made in the following Dockerfile to create the docker image
/MicronUVGIRobot/Support/ros-docker-gui/cpu/melodic/base/Dockerfile

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



REALSENSE 

(realsense2)[https://github.com/IntelRealSense/librealsense/blob/master/doc/distribution_linux.md]

Steps for installing all realsense dependenceis 

sudo apt-key adv --keyserver keys.gnupg.net --recv-key F6E65AC044F831AC80A06380C8B3A55A6F3EFCDE || sudo apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv-key F6E65AC044F831AC80A06380C8B3A55A6F3EFCDE && \
sudo add-apt-repository "deb http://realsense-hw-public.s3.amazonaws.com/Debian/apt-repo bionic main" -u && \
sudo apt-get update && \
sudo apt-get install librealsense2-dkms librealsense2-utils librealsense2-dev
 
sudo apt-get install librealsense2-dbg
sudo apt install -y librealsense-object-recognition-dev librealsense-persontracking-dev librealsense-slam-dev libopencv-dev



HUMAN DETECTION DEPENDECIES 

(Download the file tiago_public.rosinstall) [http://wiki.ros.org/Robots/TIAGo/Tutorials/Installation/TiagoSimulation]
rosinstall src /opt/ros/melodic tiago_public.rosinstall

sudo rosdep init
rosdep update

rosdep install --from-paths src --ignore-src --rosdistro melodic --skip-keys="opencv2 opencv2-nonfree pal_laser_filters speed_limit_node sensor_to_cloud hokuyo_node libdw-dev python-graphitesend-pip python-statsd pal_filters pal_vo_server pal_usb_utils pal_pcl pal_pcl_points_throttle_and_filter pal_karto pal_local_joint_control camera_calibration_files pal_startup_msgs pal-orbbec-openni2 dummy_actuators_manager pal_local_planner gravity_compensation_controller current_limit_controller dynamic_footprint dynamixel_cpp tf_lookup opencv3"

source /opt/ros/melodic/setup.bash
catkin build -DCATKIN_ENABLE_TESTING=0

or do catkin_make in the source root folder.


#OPENPOSE 
(OpenPose)[https://github.com/CMU-Perceptual-Computing-Lab/openpose/blob/master/doc/prerequisites.md]

Installing protobuf is also a must .
sudo apt-get install autoconf automake libtool curl make g++ unzip -y
git clone https://github.com/google/protobuf.git
cd protobuf
git submodule update --init --recursive
./autogen.sh
./configure
make
make check
sudo make install
sudo ldconfig


(ref)[https://stackoverflow.com/questions/44226462/how-to-make-the-openpose-use-caffe-without-cuda-supported#:~:text=you%20can%20simply%20use%20the,card%20is%20nvidia%20or%20else.&text=There%20is%20no%20way%20not,with%20OpenPose%20at%20the%20moment.]

in openpose config.
set(GPU_MODE "CPU_ONLY")

In caffee config
For cpu only 
# USE_CUDNN := 1
CPU_ONLY := 1



sudo apt install libcanberra-gtk-module libcanberra-gtk3-module

```