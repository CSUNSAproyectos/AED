#ifndef VENTANA_H
#define VENTANA_H
#include <QMainWindow>
#include "tipos.h"

class ventana:public QMainWindow
{
    private:
        int width;
        int height;
    public:
        ventana();
};

#endif // VENTANA_H
