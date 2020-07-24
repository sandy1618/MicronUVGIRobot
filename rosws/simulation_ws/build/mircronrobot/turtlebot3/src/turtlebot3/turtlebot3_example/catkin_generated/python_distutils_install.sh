#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/sandy/MicronUVGIRobot/rosws/simulation_ws/src/mircronrobot/turtlebot3/src/turtlebot3/turtlebot3_example"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/sandy/MicronUVGIRobot/rosws/simulation_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/sandy/MicronUVGIRobot/rosws/simulation_ws/install/lib/python2.7/dist-packages:/home/sandy/MicronUVGIRobot/rosws/simulation_ws/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/sandy/MicronUVGIRobot/rosws/simulation_ws/build" \
    "/usr/bin/python2" \
    "/home/sandy/MicronUVGIRobot/rosws/simulation_ws/src/mircronrobot/turtlebot3/src/turtlebot3/turtlebot3_example/setup.py" \
    build --build-base "/home/sandy/MicronUVGIRobot/rosws/simulation_ws/build/mircronrobot/turtlebot3/src/turtlebot3/turtlebot3_example" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/sandy/MicronUVGIRobot/rosws/simulation_ws/install" --install-scripts="/home/sandy/MicronUVGIRobot/rosws/simulation_ws/install/bin"
