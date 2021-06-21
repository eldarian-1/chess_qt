cmake_minimum_required(VERSION 3.19)
project(chess_qt)

set(CMAKE_CXX_STANDARD 20)

include_directories(chess_logic view_qt)

add_executable(chess_qt main.cpp)
add_subdirectory(chess_logic)
add_subdirectory(view_qt)

set(CHESS_MODULES chess_qt view_qt chess_logic)

target_link_libraries(${CHESS_MODULES})
