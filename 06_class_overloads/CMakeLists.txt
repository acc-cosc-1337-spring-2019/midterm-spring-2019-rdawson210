cmake_minimum_required (VERSION 3.8)
project( roll_ol_library)

add_library(roll_ol_library "roll_ol.cpp" "roll_ol.h")
add_executable(06_roll_ol_exe "main.cpp" "roll_ol.cpp")
target_link_libraries(06_roll_ol_exe  roll_ol_library die_library)




