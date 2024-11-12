#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.move(1,1);
    w.resize(640, 480);
    w.show();

    return a.exec();
}
