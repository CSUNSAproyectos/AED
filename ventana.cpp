#include "ventana.h"
#include <QPushButton>
#include <QTextEdit>
#include <QLabel>

ventana::ventana()
{
    width=600;
    height=400;
    this->resize(width,height);
    this->setMaximumSize(width,height);
    this->setMinimumSize(width,height);

    QLabel * titulo1=new QLabel("Codigo del Curso ",this);
    titulo1->setGeometry(30,30,90,25);

    QLabel * titulo2=new QLabel("Nombre del Curso ",this);
    titulo2->setGeometry(30,60,90,25);

    QLabel * titulo3=new QLabel("Creditos ",this);
    titulo3->setGeometry(30,100,50,25);

    QLabel * titulo4=new QLabel("Horas de Teoria ",this);
    titulo4->setGeometry(30,135,90,25);

    QLabel * titulo5=new QLabel("Horas de practica ",this);
    titulo5->setGeometry(190,135,90,25);

    QLabel * titulo6=new QLabel("Horas de laboratorio ",this);
    titulo6->setGeometry(350,135,110,25);

    QTextEdit * codigoCurso=new QTextEdit(this);
    codigoCurso->setGeometry(130,30,100,25);

    QTextEdit * nombreCurso=new QTextEdit(this);
    nombreCurso->setGeometry(130,60,100,25);

    QTextEdit * creditos=new QTextEdit(this);
    creditos->setGeometry(100,100,50,25);

    QTextEdit * horasTeoria=new QTextEdit(this);
    horasTeoria->setGeometry(120,135,50,25);

    QTextEdit * horasPractica=new QTextEdit(this);
    horasPractica->setGeometry(280,135,50,25);

    QTextEdit * horasLab=new QTextEdit(this);
    horasLab->setGeometry(460,135,50,25);

    QPushButton * button_add=new QPushButton("Add",this);
    button_add->setGeometry(400,30,60,30);

    QPushButton * button_flechaIzq=new QPushButton("|<",this);
    button_flechaIzq->setGeometry(200,350,50,30);
}
