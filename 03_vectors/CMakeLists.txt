cmake_minimum_required (VERSION 3.8)
project(dna_consensus_library)

add_library(dna_consensus_library "dna_consensus.cpp" "dna_consensus.h")
add_executable(03_dna_consensus_exe "main.cpp" "dna_consensus.cpp")




