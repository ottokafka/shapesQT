#include "mainwindow.h"
#include <QApplication>

// default code on creation of the project
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
