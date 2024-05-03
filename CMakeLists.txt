cmake_minimum_required(VERSION 3.28)
project(CommandPattern)

include(FetchContent)
set(BUILD_SHARED_LIBS OFF)
FETCHCONTENT_DECLARE(SFML GIT_REPOSITORY https://github.com/SFML/SFML.git GIT_TAG 2.5.1)
FETCHCONTENT_MAKEAVAILABLE(SFML)

set(CMAKE_CXX_STANDARD 23)

add_executable(CommandPattern main.cpp
        Command.h
        InputHandler.h
        InputHandler.cpp
        Player.cpp
        Player.h
)

target_link_libraries(CommandPattern sfml-graphics)