cmake_minimum_required(VERSION 3.20.3)

project(Snake_Game C CXX)

add_executable(${PROJECT_NAME} main.cpp)

configure_file(Snake_Game_Config.h.in Snake_Game_Config.h)

#added in case of tests being run
option(RUN_TESTS "run tests for TDD" ON)

#tests logic
if(RUN_TESTS)
    add_subdirectory(test)
    list(APPEND EXTRA_INCLUDE_DIRECTORIES "${PROJECT_SOURCE_DIR}/test")
    list(APPEND EXTRA_LIBRARY_DIRECTORIES "${PROJECT_SOURCE_DIR}/test")
    list(APPEND EXTRA_LINKED_SOURCES test_env)
endif()

target_include_directories(${PROJECT_NAME}
    PUBLIC ${PROJECT_BINARY_DIR}
    PUBLIC ${EXTRA_INCLUDE_DIRECTORIES}
)
target_link_directories(${PROJECT_NAME}
    PUBLIC ${EXTRA_LINK_DIRECTORIES}
)

target_link_libraries(${PROJECT_NAME}
    ${EXTRA_LINKED_SOURCES}
)

