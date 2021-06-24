cmake_minimum_required(VERSION 3.19)
project(chess_qt)

set(CMAKE_CXX_STANDARD 20)

include_directories(view_qt)

add_executable(chess_qt main.cpp view_qt/resources.qrc)
add_subdirectory(view_qt)

target_link_libraries(chess_qt view_qt)
