#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->centralwidget->setStyleSheet(" background-color: White");
    ui->label->setStyleSheet("color : Black");
    ui->label_2->setStyleSheet("color : Black");
    ui->label_3->setStyleSheet("color : Black");
    ui->label_4->setStyleSheet("color : Black");
    ui->label_5->setStyleSheet("color : Black");
    ui->pushButton->setStyleSheet("color : Green");
    ui->pushButton_2->setStyleSheet("color : Red");


}

MainWindow::~MainWindow()
{
    delete ui;
}

