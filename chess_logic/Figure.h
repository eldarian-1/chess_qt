#pragma once

#include <set>

class Path;

struct less;

class Figure {
protected:
    Figure();

public:
    bool isPossiblePath(Path *path);
    virtual std::set<Path> getPathSet(Path *path) = 0;

};
