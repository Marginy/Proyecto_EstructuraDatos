#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QGraphicsEllipseItem>
#include <QMainWindow>
#include <QPoint>
#include "algoritmostds.h"
#include "areagrafica.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void Parametros();
    AlgoritmosTDS *nodo;
    int IdVert;


    
private slots:
    void on_btn_vertice_clicked();
    void on_btn_conexa_clicked();



    void on_btn_completa_clicked();

private:
    Ui::MainWindow *ui;
    //Ui::MainWindow *ui;
    QGraphicsScene *Scene;
    QGraphicsEllipseItem * Elipse;
    QGraphicsLineItem * linea;
    QGraphicsTextItem * texto;
    //void BotonVertice();
    AreaGrafica* areaGrafica;
};

#endif // MAINWINDOW_H
