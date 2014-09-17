#ifndef AREAGRAFICA_H
#define AREAGRAFICA_H

#include <QWidget>
#include <QMouseEvent>
#include <list>

class AreaGrafica : public QWidget
{
    Q_OBJECT
public:
    explicit AreaGrafica(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    void mouseReleaseEvent(QMouseEvent *);
    std::list<QPoint> puntos;
    void IdVertice(QString ID);

signals:
    
public slots:
    
};

#endif // AREAGRAFICA_H
