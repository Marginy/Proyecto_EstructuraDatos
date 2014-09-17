#include "migrafica.h"
#include <QDebug>

MiGRafica::MiGRafica(QWidget *parent) :
    QGraphicsView(parent)
{
}

void MiGRafica::mousePressEvent(QMouseEvent *event)
{
    qDebug() << event->pos();
}
