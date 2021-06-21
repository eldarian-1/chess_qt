#include <QApplication>

#include "LMain.h"

#include "ChessView.h"

int chessView(int argc, char **argv)
{
    srand(time(0));
    QApplication app(argc, argv);
    LMain wgtMain;
    wgtMain.show();
    return app.exec();
}
