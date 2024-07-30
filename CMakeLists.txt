cmake_minimum_required(VERSION 3.25)
project(Algorithm C)
set(CMAKE_C_STANDARD 11)

message("PROJECT_SOURCE_DIR=${PROJECT_SOURCE_DIR}")
link_libraries(ws2_32)

include_directories(${PROJECT_SOURCE_DIR}/includes ${PROJECT_SOURCE_DIR}/sources)

aux_source_directory(${PROJECT_SOURCE_DIR}/includes HDR)
aux_source_directory(${PROJECT_SOURCE_DIR}/sources SRC)

add_executable(Algorithm ${PROJECT_SOURCE_DIR}/sources/main.c ${HDR} ${SRC})
target_link_libraries(Algorithm ws2_32)