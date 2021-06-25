#include "FigureFactory.h"

#include "figures/King.h"
#include "figures/Queen.h"
#include "figures/Knight.h"
#include "figures/Rook.h"
#include "figures/Bishop.h"
#include "figures/Pawn.h"

std::shared_ptr<Figure> FigureFactory::king() {
    return new King();
}

std::shared_ptr<Figure> FigureFactory::queen() {
    return new Queen();
}

std::shared_ptr<Figure> FigureFactory::knight() {
    return new Knight();
}

std::shared_ptr<Figure> FigureFactory::rook() {
    return new Rook();
}

std::shared_ptr<Figure> FigureFactory::bishop() {
    return new Bishop();
}

std::shared_ptr<Figure> FigureFactory::pawn() {
    return new Pawn();
}
