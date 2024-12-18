#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(actionSave,SIGNAL(triggered(bool)),this,SLOT(?));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::saveFlie()
{

}
