add_library(test_env test.cpp)

configure_file("../Snake_Game_Config.h.in" Snake_Game_Config.h)

list(APPEND EXTRA_INCLUDE_DIRECTORIES "${PROJECT_SOURCE_DIR}/graphics_engine/includes")
list(APPEND EXTRA_LINKED_SOURCES Graphics_Engine)
target_include_directories(test_env 
                    PUBLIC ${PROJECT_BINARY_DIR}
                    PUBLIC ${EXTRA_INCLUDE_DIRECTORIES})

target_link_libraries(test_env
                      ${EXTRA_LINKED_SOURCES}
                     )