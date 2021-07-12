project(Graphics_Engine C CXX)

add_library(${PROJECT_NAME} "src/game.cpp")

configure_file(Graphics_Engine_Config.h.in Graphics_Engine_Config.h)

target_include_directories(Graphics_Engine
                   PUBLIC "${PROJECT_SOURCE_DIR}/includes"
                   PUBLIC ${PROJECT_BINARY_DIR}
                   PUBLIC ${EXTRA_INCLUDE_DIRECTORIES}
                    )
