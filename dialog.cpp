#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
   ui->setupUi(this);

    ui->label->setStyleSheet("color : Black");
    ui->label_2->setStyleSheet("color : Black");
    ui->label_3->setStyleSheet("color : Black");
    ui->label_4->setStyleSheet("color : Black");
    ui->label_5->setStyleSheet("color : Black");
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
     this->close();
}

