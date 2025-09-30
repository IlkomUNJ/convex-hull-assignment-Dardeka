# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Darren_Assignment1_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Darren_Assignment1_autogen.dir/ParseCache.txt"
  "Darren_Assignment1_autogen"
  )
endif()
