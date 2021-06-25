#pragma once

class Rook : public Figure {
public:
    std::set<Position> getPossiblePositions(const Board &board, const Position &position) override {
        return board.rookPaths(position);
    }
};
