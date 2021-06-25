#pragma once

class Knight : public Figure {
public:
    std::set<Position> getPossiblePositions(const Board &board, const Position &position) override {
        return board.knightPaths(position);
    }
};
