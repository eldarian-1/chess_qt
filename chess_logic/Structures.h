#pragma once

struct Position {
    int x;
    int y;
    Position(int x, int y) : x(x), y(y) {}
};

struct Path {
    const Position &from;
    const Position &to;
    Path(const Position &from, const Position &to) : from(from), to(to) {}
};
