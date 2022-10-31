#include "user.h"
#include "ui_user.h"

user::user(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::user)
{
    ui->setupUi(this);
}

user::~user()
{
    delete ui;
}

void user::on_pushButton_clicked()
{
    close();
}


void user::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void user::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}




void user::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}




void user::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void user::on_pushButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void user::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void user::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void user::on_pushButton_10_clicked()
{
  ui->stackedWidget->setCurrentIndex(0);
}


void user::on_pushButton_11_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void user::on_pushButton_12_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void user::on_pushButton_13_clicked()
{
   ui->stackedWidget->setCurrentIndex(0);
}


void user::on_pushButton_14_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

