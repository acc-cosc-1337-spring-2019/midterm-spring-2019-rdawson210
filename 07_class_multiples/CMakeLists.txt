cmake_minimum_required (VERSION 3.8)
project(shooter_library)

add_library(shooter_library "shooter.cpp" "shooter.h")
add_executable(07_shooter_exe "main.cpp" "shooter.cpp")
target_link_libraries(07_shooter_exe shooter_library roll_library die_library)

