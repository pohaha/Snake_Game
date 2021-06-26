cmake_minimum_required(VERSION 3.19.7)

cmake_minimum_required(VERSION 3.20.3)

set(This Snake_Game)

project(${This} C CXX)

add_executable(${This} main.cpp)

add_subdirectory(test)
target_link_libraries(${This} test_env)

#add_subdirectory(Distribution)

#target_link_directories(${PROJECT_NAME} PRIVATE Distribution/)

#target_link_libraries(${PROJECT_NAME} distribution)