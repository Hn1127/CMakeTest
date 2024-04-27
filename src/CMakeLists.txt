project(CMakeTest_main)

add_subdirectory(pre_process)
add_subdirectory(my_process)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${Process_Dir}
)

target_link_libraries(${PROJECT_NAME}
    PUBLIC
    myProcess
)