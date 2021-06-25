#pragma once

class Pawn : public Figure {
public:
    std::set<Position> getPossiblePositions(const Board &board, const Position &position) override {
        return board.pawnPaths(position);
    }
};
