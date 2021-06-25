#pragma once

#include "../Figure.h"

class King : public Figure {
public:
    std::set<Position> getPossiblePositions(const Board *board, const Position &position) override {
        return board.kingPaths(position);
    }
};
