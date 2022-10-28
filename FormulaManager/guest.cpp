#include "guest.h"
#include "ui_guest.h"

guest::guest(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::guest)
{
    ui->setupUi(this);
}

guest::~guest()
{
    delete ui;
}
