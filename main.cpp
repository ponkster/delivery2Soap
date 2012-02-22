#include <QtGui/QApplication>
#include "mainwindow.h"
#include "soapH.h"
#include "soap/edeliveryApiBinding.nsmap"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
