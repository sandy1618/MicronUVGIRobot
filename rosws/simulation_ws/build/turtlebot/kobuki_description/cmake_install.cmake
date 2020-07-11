# Install script for directory: /home/sandy/MicronUVGIRobot/rosws/simulation_ws/src/turtlebot/kobuki_description

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/sandy/MicronUVGIRobot/rosws/simulation_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/sandy/MicronUVGIRobot/rosws/simulation_ws/build/turtlebot/kobuki_description/catkin_generated/installspace/kobuki_description.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kobuki_description/cmake" TYPE FILE FILES
    "/home/sandy/MicronUVGIRobot/rosws/simulation_ws/build/turtlebot/kobuki_description/catkin_generated/installspace/kobuki_descriptionConfig.cmake"
    "/home/sandy/MicronUVGIRobot/rosws/simulation_ws/build/turtlebot/kobuki_description/catkin_generated/installspace/kobuki_descriptionConfig-version.cmake"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kobuki_description" TYPE FILE FILES "/home/sandy/MicronUVGIRobot/rosws/simulation_ws/src/turtlebot/kobuki_description/package.xml")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kobuki_description" TYPE DIRECTORY FILES "/home/sandy/MicronUVGIRobot/rosws/simulation_ws/src/turtlebot/kobuki_description/launch")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kobuki_description" TYPE DIRECTORY FILES "/home/sandy/MicronUVGIRobot/rosws/simulation_ws/src/turtlebot/kobuki_description/meshes")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kobuki_description" TYPE DIRECTORY FILES "/home/sandy/MicronUVGIRobot/rosws/simulation_ws/src/turtlebot/kobuki_description/rviz")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/kobuki_description" TYPE DIRECTORY FILES "/home/sandy/MicronUVGIRobot/rosws/simulation_ws/src/turtlebot/kobuki_description/urdf")
endif()

