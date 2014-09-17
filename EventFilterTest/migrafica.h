#ifndef MIGRAFICA_H
#define MIGRAFICA_H

#include <QWidget>
#include <QGraphicsView>
#include <QMouseEvent>

class MiGRafica : public QGraphicsView
{
    Q_OBJECT
public:
    explicit MiGRafica(QWidget *parent = 0);
    void mousePressEvent(QMouseEvent *event);
signals:
    
public slots:
    
};

#endif // MIGRAFICA_H
