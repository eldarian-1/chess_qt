#pragma once

#include <set>

class Board;
class Path;
class Position;

struct less;

class Figure {
protected:
    Figure();

public:
    bool isPossiblePath(const Board *board, const Path *path);
    virtual std::set<Position> getPossiblePositions(const Board *board, const Position *position) = 0;

};
