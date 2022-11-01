#include "guest.h"
#include "ui_guest.h"

guest::guest(QWidget *parent) : QDialog(parent),
                                ui(new Ui::guest)
{
    ui->setupUi(this);
}

guest::~guest()
{
    delete ui;
}

void guest::on_pushButton_clicked()
{
    close();
}

void guest::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void guest::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
