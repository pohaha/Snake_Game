project(Graphics_Engine C CXX)

add_library(${PROJECT_NAME} "src/game.cpp")

target_include_directories(${PROJECT_NAME} PUBLIC "${PROJECT_SOURCE_DIR}/includes")
