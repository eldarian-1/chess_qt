cmake_minimum_required(VERSION 3.19)
project(chess_qt)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_PREFIX_PATH "/home/eldarian/Qt/6.1.1/gcc_64")
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(QT_VERSION 6)
set(REQUIRED_LIBS Core Gui Widgets)
set(REQUIRED_LIBS_QUALIFIED Qt6::Core Qt6::Gui Qt6::Widgets)

include_directories(chess_logic)
set(VIEW_QT view_qt/main.cpp)

add_executable(view_qt ${VIEW_QT})
add_subdirectory(chess_logic)

set(CHESS_MODULES view_qt chess_logic)

if (NOT CMAKE_PREFIX_PATH)
    message(WARNING "CMAKE_PREFIX_PATH is not defined, you may need to set it "
            "(-DCMAKE_PREFIX_PATH=\"path/to/Qt/lib/cmake\" or -DCMAKE_PREFIX_PATH=/usr/include/{host}/qt{version}/ on Ubuntu)")
endif ()

find_package(Qt${QT_VERSION} COMPONENTS ${REQUIRED_LIBS} REQUIRED)
target_link_libraries(${CHESS_MODULES} ${REQUIRED_LIBS_QUALIFIED})
