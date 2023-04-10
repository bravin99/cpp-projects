cmake_minimum_required(VERSION 3.0)

project(nucleotide-count)

add_executable(nucleotide-count main.cpp)

install(TARGETS nucleotide-count RUNTIME DESTINATION bin)
