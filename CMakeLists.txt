cmake_minimum_required(VERSION 3.20)
project(ConsFPS)

set(CMAKE_CXX_STANDARD 14)

# Find the ncurses library
find_package(Curses REQUIRED)

add_executable(ConsFPS main.cpp)

# Link the ncurses library
target_link_libraries(ConsFPS PRIVATE ${CURSES_LIBRARIES})