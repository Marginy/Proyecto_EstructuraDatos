#include "mainwindow.h"
#include <QDebug>
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    graphicsView.setGeometry(20, 20, 240, 240);
    graphicsView.setEnabled(true);
    graphicsView.setInteractive(true);
    graphicsView.setBackgroundBrush(QBrush(Qt::white));
}

MainWindow::~MainWindow()
{
    delete ui;
}
