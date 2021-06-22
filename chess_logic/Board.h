#pragma once

class Figure;

class Board {
private:
    Figure** _figures;

public:
    Board();

    bool isPossible(const int &x0, const int &y0, const int &x1, const int &y1);

};
