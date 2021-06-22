cmake_minimum_required(VERSION 3.5)
project(chess_logic)

set(CHESS_LOGIC Board.cpp Board.h Figure.cpp Figure.h Path.cpp Path.h figures/Bishop.cpp figures/Bishop.h figures/Pawn.cpp figures/Pawn.h figures/King.cpp figures/King.h figures/Rook.cpp figures/Rook.h figures/Queen.cpp figures/Queen.h figures/Knight.cpp figures/Knight.h FigureFactory.cpp FigureFactory.h)

add_library(chess_logic STATIC ${CHESS_LOGIC})