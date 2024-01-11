cmake_minimum_required(VERSION 3.12)
project(CProject)

set(CMAKE_C_STANDARD 11)

LINK_LIBRARIES(m pthread)

file(REMOVE_RECURSE "cmake-build-debug")
include_directories(header) 
aux_source_directory(src DIR_SRCS)

add_executable(CProject.so main.c ${DIR_SRCS})
