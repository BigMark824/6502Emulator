cmake_minimum_required(VERSION 3.0)
project(6502 C)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Include)


file(GLOB SOURCES "Source/*.c")

add_executable(${PROJECT_NAME} ${SOURCES})

