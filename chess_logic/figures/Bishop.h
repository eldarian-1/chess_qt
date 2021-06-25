#pragma once

#include "Bishop.h"

class Bishop : public Figure {
public:
    std::set<Position> getPossiblePositions(const Board &board, const Position &position) override {
        return board.bishopPaths(position);
    }
};
