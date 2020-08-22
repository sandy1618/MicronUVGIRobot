# CMake generated Testfile for 
# Source directory: /home/uncomment/MicronUVGIRobot/src/cmake-3.15.6
# Build directory: /home/uncomment/MicronUVGIRobot/src/cmake-3.15.6
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
include("/home/uncomment/MicronUVGIRobot/src/cmake-3.15.6/Tests/EnforceConfig.cmake")
add_test(SystemInformationNew "/home/uncomment/MicronUVGIRobot/src/cmake-3.15.6/bin/cmake" "--system-information" "-G" "Unix Makefiles")
set_tests_properties(SystemInformationNew PROPERTIES  _BACKTRACE_TRIPLES "/home/uncomment/MicronUVGIRobot/src/cmake-3.15.6/CMakeLists.txt;801;add_test;/home/uncomment/MicronUVGIRobot/src/cmake-3.15.6/CMakeLists.txt;0;")
subdirs("Source/kwsys")
subdirs("Utilities/KWIML")
subdirs("Utilities/cmlibrhash")
subdirs("Utilities/cmzlib")
subdirs("Utilities/cmcurl")
subdirs("Utilities/cmexpat")
subdirs("Utilities/cmbzip2")
subdirs("Utilities/cmzstd")
subdirs("Utilities/cmliblzma")
subdirs("Utilities/cmlibarchive")
subdirs("Utilities/cmjsoncpp")
subdirs("Utilities/cmlibuv")
subdirs("Source/CursesDialog/form")
subdirs("Source")
subdirs("Utilities")
subdirs("Tests")
subdirs("Auxiliary")
