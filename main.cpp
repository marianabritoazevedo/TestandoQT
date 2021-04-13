#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); //Chama Qaplication
    MainWindow w; //Cria objeto da classe MainWindow
    w.show(); //Mostra esse objeto
    return a.exec();
}
