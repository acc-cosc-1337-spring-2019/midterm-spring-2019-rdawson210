cmake_minimum_required (VERSION 3.8)
project(die_library)

add_library(die_library "die.cpp" "die.h")
add_executable(04_die_exe "main.cpp" "die.cpp")




