#include "areagrafica.h"
#include <QDebug>
#include <QPainter>

AreaGrafica::AreaGrafica(QWidget *parent) :
    QWidget(parent)
{

}

void AreaGrafica::paintEvent(QPaintEvent *e)
{
    QPainter* pintador = new QPainter(this);
    pintador->setBrush(Qt::yellow);
    pintador->drawRect(this->rect());
    std::list<QPoint>::iterator iter;
    pintador->setBrush(Qt::red);
    for(iter = puntos.begin(); iter != puntos.end(); iter++){
        pintador->drawEllipse((*iter), 25, 25);
    }
}

void AreaGrafica::mouseReleaseEvent(QMouseEvent *e)
{
    QPoint posicionClick = e->pos();
    qDebug() << posicionClick;
    puntos.push_back(posicionClick);
    this->repaint();
}

void AreaGrafica::IdVertice(QString ID){

}
