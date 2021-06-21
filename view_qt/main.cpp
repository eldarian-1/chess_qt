#include <QApplication>
#include <QPushButton>

#include "a.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    QPushButton button(hello_a().c_str(), nullptr);
    button.resize(200, 100);
    button.show();
    return QApplication::exec();
}
