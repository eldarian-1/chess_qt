#pragma once

class Queen : public Figure {
public:
    std::set<Position> getPossiblePositions(const Board &board, const Position &position) override {
        return board.queenPaths(position);
    }
};
