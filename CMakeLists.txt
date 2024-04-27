cmake_minimum_required(VERSION 3.20.0)

project(CMakeTest
    VERSION 0.1.1
    DESCRIPTION "a demo of a CMakeTest"
    HOMEPAGE_URL "https://github.com/Hn1127/CMakeTest"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

set(Pre_Process_Dir ${CMAKE_SOURCE_DIR}/src/pre_process)
set(Process_Dir ${CMAKE_SOURCE_DIR}/src/my_process)

# 进入子目录下寻找子目录的CMakeLists.txt
add_subdirectory(src)