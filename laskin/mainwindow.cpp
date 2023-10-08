#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    result = 0.00;
    state = 1;
    connect(ui->Clear,SIGNAL(clicked(bool)),this,SLOT(clearAndEnterClickedHandler()));
    connect(ui->Enter,SIGNAL(clicked(bool)),this,SLOT(clearAndEnterClickedHandler()));
    connect(ui->Jako,SIGNAL(clicked(bool)),this,SLOT(addSubMulDivClickedHandler()));
    connect(ui->Plus,SIGNAL(clicked(bool)),this,SLOT(addSubMulDivClickedHandler()));
    connect(ui->Minus,SIGNAL(clicked(bool)),this,SLOT(addSubMulDivClickedHandler()));
    connect(ui->Kerto,SIGNAL(clicked(bool)),this,SLOT(addSubMulDivClickedHandler()));
    connect(ui->N0,SIGNAL(clicked(bool)),this,SLOT(numberClickedHandler()));
    connect(ui->N1,SIGNAL(clicked(bool)),this,SLOT(numberClickedHandler()));
    connect(ui->N2,SIGNAL(clicked(bool)),this,SLOT(numberClickedHandler()));
    connect(ui->N3,SIGNAL(clicked(bool)),this,SLOT(numberClickedHandler()));
    connect(ui->N4,SIGNAL(clicked(bool)),this,SLOT(numberClickedHandler()));
    connect(ui->N5,SIGNAL(clicked(bool)),this,SLOT(numberClickedHandler()));
    connect(ui->N6,SIGNAL(clicked(bool)),this,SLOT(numberClickedHandler()));
    connect(ui->N7,SIGNAL(clicked(bool)),this,SLOT(numberClickedHandler()));
    connect(ui->N8,SIGNAL(clicked(bool)),this,SLOT(numberClickedHandler()));
    connect(ui->N9,SIGNAL(clicked(bool)),this,SLOT(numberClickedHandler()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickedHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug()<<"Button name: "<<name;
}

void MainWindow::clearAndEnterClickedHandler()
{

}

void MainWindow::addSubMulDivClickedHandler()
{

}

void MainWindow::resetLineEdits()
{

}

