#pragma once

#include <set>

class Path {
private:
    const int &x0;
    const int &y0;
    const int &x1;
    const int &y1;

public:
    Path(const int &x0, const int &y0, const int &x1, const int &y1);

    std::set<Path> kingPaths();
    std::set<Path> queenPaths();
    std::set<Path> knightPaths();
    std::set<Path> rookPaths();
    std::set<Path> bishopPaths();
    std::set<Path> pawnPaths();

    bool isPossible(std::set<Path> &set);
};

bool operator < (Path left, Path right);
