#pragma once

#include <map>
#include <set>

class Position;
class Figure;
class Path;

class Board {
private:
    std::map<Position, Figure> _figures;

public:
    Board();

    bool isPossible(const Path &path);
    std::set<Position> possiblePositions(const Position &position);

    std::set<Position> kingPositions(const Position &position);
    std::set<Position> queenPositions(const Position &position);
    std::set<Position> knightPositions(const Position &position);
    std::set<Position> rookPositions(const Position &position);
    std::set<Position> bishopPositions(const Position &position);
    std::set<Position> pawnPositions(const Position &position);

    void makeMove(const Path &path);

};
