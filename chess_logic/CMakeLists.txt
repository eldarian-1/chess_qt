cmake_minimum_required(VERSION 3.5)
project(chess_logic)

set(CMAKE_CXX_STANDARD 20)

set(CHESS_LOGIC Board.cpp Board.h Figure.cpp Figure.h Structures.h FigureFactory.cpp FigureFactory.h
        figures/Bishop.h figures/Pawn.h figures/King.h figures/Rook.h figures/Queen.h figures/Knight.h)

add_library(chess_logic STATIC ${CHESS_LOGIC})