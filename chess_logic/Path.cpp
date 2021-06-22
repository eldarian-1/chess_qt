#include "Path.h"

Path::Path(const int &x0, const int &y0, const int &x1, const int &y1)
 : x0(x0), y0(y0), x1(x1), y1(y1) {

}

std::set<Path> Path::kingPaths() {
    return std::set<Path>();
}

std::set<Path> Path::queenPaths() {
    std::set<Path> result = rookPaths();
    result.merge(bishopPaths());
    return result;
}

std::set<Path> Path::knightPaths() {
    return std::set<Path>();
}

std::set<Path> Path::rookPaths() {
    return std::set<Path>();
}

std::set<Path> Path::bishopPaths() {
    return std::set<Path>();
}

std::set<Path> Path::pawnPaths() {
    return std::set<Path>();
}

bool Path::isPossible(std::set<Path> &set) {
    return set.find(*this) != set.end();
}

bool operator < (Path left, Path right) {
    return true;
}