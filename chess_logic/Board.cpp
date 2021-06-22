#include "Board.h"

#include "Path.h"
#include "Figure.h"

Board::Board() {

}

bool Board::isPossible(const int &x0, const int &y0, const int &x1, const int &y1) {
    Path path(x0, y0, x1, y1);
    return _figures[y0][x0].isPossiblePath(&path);
}