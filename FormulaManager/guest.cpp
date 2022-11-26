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

void guest::on_pushButton_logout_clicked()
{
    close();
}

void guest::on_pushButton_view_formula_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void guest::on_pushButton_go_back_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
