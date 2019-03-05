cmake_minimum_required (VERSION 3.8)
project(fibonacci_library)

add_library(fibonacci_library "fibonacci.cpp" "fibonacci.h")
add_executable(02_fibonacci_exe "main.cpp" "fibonacci.cpp")




