cmake_minimum_required(VERSION 3.0)

project(rna-transcription)

add_executable(rna-transcription main.cpp)

install(TARGETS rna-transcription RUNTIME DESTINATION bin)
