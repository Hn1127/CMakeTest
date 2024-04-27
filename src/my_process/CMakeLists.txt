project(myProcess)

add_library(${PROJECT_NAME}
    SHARED
    my_process.cpp
)

target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${Pre_Process_Dir}
)

target_link_libraries(${PROJECT_NAME}
    PUBLIC
    preProcess
)