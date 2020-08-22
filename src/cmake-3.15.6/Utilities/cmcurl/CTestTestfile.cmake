# CMake generated Testfile for 
# Source directory: /home/uncomment/MicronUVGIRobot/src/cmake-3.15.6/Utilities/cmcurl
# Build directory: /home/uncomment/MicronUVGIRobot/src/cmake-3.15.6/Utilities/cmcurl
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(curl "curltest" "http://open.cdash.org/user.php")
set_tests_properties(curl PROPERTIES  _BACKTRACE_TRIPLES "/home/uncomment/MicronUVGIRobot/src/cmake-3.15.6/Utilities/cmcurl/CMakeLists.txt;1295;add_test;/home/uncomment/MicronUVGIRobot/src/cmake-3.15.6/Utilities/cmcurl/CMakeLists.txt;0;")
subdirs("lib")
