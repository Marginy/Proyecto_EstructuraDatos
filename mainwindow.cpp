#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QBrush>
#include "algoritmostds.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->nodo = new AlgoritmosTDS();
    this->IdVert=0;
    areaGrafica = new AreaGrafica();
    areaGrafica->setGeometry(20, 20, 320, 240);
    ui->gridLayout->addWidget(areaGrafica);

}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_btn_vertice_clicked()
{

}



void MainWindow::on_btn_conexa_clicked()
{
    nodo->Conexo();
    qDebug()<<nodo;
       if(nodo->Conexo()== 1)

            QMessageBox::information(this, "Grafo", "Es Conexo");
       else
            QMessageBox::information(this, "Grafo", "No es conexo");

}

void MainWindow::on_btn_completa_clicked()
{
    nodo->Completo();
    if(nodo->Completo()== -1)
        QMessageBox::information(this, "Grafo", "Es Completo");
    else
        QMessageBox::information(this, "Grafo", "No es completo");
}
