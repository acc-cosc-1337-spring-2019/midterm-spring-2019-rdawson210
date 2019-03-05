cmake_minimum_required (VERSION 3.8)
project( roll_library)

add_library(roll_library "roll.cpp" "roll.h")
add_executable(05_roll_exe "main.cpp" "roll.cpp")
target_link_libraries(05_roll_exe  roll_library die_library)




