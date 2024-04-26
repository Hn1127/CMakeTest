cmake_minimum_required(VERSION 3.20.0)
project(CMakeTest)
set(CMAKE_CXX_STANDARD 17)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

aux_source_directory(${PROJECT_SOURCE_DIR} SRC_LIST)

add_executable(main ${SRC_LIST})