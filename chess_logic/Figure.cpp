#include "Figure.h"

#include "Path.h"

Figure::Figure() {}

bool Figure::isPossiblePath(Path *path) {
    std::set<Path> set = getPathSet(path);
    return set.find(*path) == set.end();
}