#pragma once

#include <memory>

class Figure;

class FigureFactory {
    std::shared_ptr<Figure> king();
    std::shared_ptr<Figure> queen();
    std::shared_ptr<Figure> knight();
    std::shared_ptr<Figure> rook();
    std::shared_ptr<Figure> bishop();
    std::shared_ptr<Figure> pawn();
};
