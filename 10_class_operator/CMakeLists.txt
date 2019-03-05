cmake_minimum_required (VERSION 3.8)
project(craps_library)

add_library(craps_library "craps.cpp" "craps.h")
add_executable(10_craps_exe "main.cpp" "craps.cpp")
target_link_libraries(10_craps_exe craps_library shooter_library roll_library die_library)




