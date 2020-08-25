if(NOT "/home/uncomment/MicronUVGIRobot/Support/cmake-3.15.6/Tests/CMakeTests" MATCHES "^/")
  set(slash /)
endif()
set(url "file://${slash}/home/uncomment/MicronUVGIRobot/Support/cmake-3.15.6/Tests/CMakeTests/FileDownloadInput.png")
set(dir "/home/uncomment/MicronUVGIRobot/Support/cmake-3.15.6/Tests/CMakeTests/downloads")

file(DOWNLOAD
  ${url}
  ${dir}/file3.png
  TIMEOUT 2
  STATUS status
  EXPECTED_HASH SHA1=5555555555555555555555555555555555555555
  )
