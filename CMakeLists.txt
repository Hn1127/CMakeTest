cmake_minimum_required(VERSION 3.20.0)
project(CMakeTest)
set(CMAKE_CXX_STANDARD 17)

# 指定动态库dll和可执行文件dll的输出目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

# 动态库dll
# 生成动态库
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LISTS)
add_library(common
    SHARED
    ${SRC_LISTS}
)

# 包含库所依赖的头文件目录
target_include_directories(common
    PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)

# 可执行文件
add_executable(main main.cpp)

# 可执行文件也需要包含其所依赖的头文件
target_include_directories(main
    PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)

# 链接可执行文件和动态库
target_link_libraries(main
    PUBLIC
    common
)