#include "mainwindow.h"
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
   // int x=w.width()*1.1;
    //int y=w.height()*1.0;
   // w.setFixedSize(x,y);
    w.setWindowTitle("Memory Allocation.exe");
    w.show();


    return a.exec();
}
