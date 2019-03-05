cmake_minimum_required (VERSION 3.8)
project(dna_hamming_library)

add_library(dna_hamming_library "dna_hamming.cpp" "dna_hamming.h")
add_executable(01_dna_hamming_exe "main.cpp" "dna_hamming.cpp")




