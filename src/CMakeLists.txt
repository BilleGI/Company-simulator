cmake_minimum_required(VERSION 3.5)

add_executable(untitled main.cpp ${MY_INCLUDE_DIR}/company.h company.cpp ${MY_INCLUDE_DIR}/director.h director.cpp
    ${MY_INCLUDE_DIR}/manager.h manager.cpp ${MY_INCLUDE_DIR}/worker.h worker.cpp)

target_include_directories(untitled PUBLIC ${MY_INCLUDE_DIR})
