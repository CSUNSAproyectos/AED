#include "ventana.h"
#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ventana * w=new ventana();
    w->show();

    return a.exec();
}
