#include "Figure.h"

#include "Structures.h"

Figure::Figure() {}

bool Figure::isPossiblePath(const Board *board, const Path *path) {
    std::set<Position> positions = getPossiblePositions(board, path->from);
    return positions.find(path->to) != positions.end();
}