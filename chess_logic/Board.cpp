#include "Board.h"

#include "Structures.h"
#include "Figure.h"

Board::Board() {

}

bool Board::isPossible(const Path &path) {
    return _figures[path.from].isPossiblePath(*this, path);
}

std::set<Position> Board::possiblePositions(const Position &position) {
    return _figures[position].getPossiblePositions(*this, position);
}

std::set<Position> Board::kingPositions(const Position &position) {
    return std::set<Position>();
}

std::set<Position> Board::queenPositions(const Position &position) {
    return std::set<Position>();
}

std::set<Position> Board::knightPositions(const Position &position) {
    return std::set<Position>();
}

std::set<Position> Board::rookPositions(const Position &position) {
    return std::set<Position>();
}

std::set<Position> Board::bishopPositions(const Position &position) {
    return std::set<Position>();
}

std::set<Position> Board::pawnPositions(const Position &position) {
    return std::set<Position>();
}
