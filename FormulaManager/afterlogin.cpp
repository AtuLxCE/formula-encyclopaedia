#include "afterlogin.h"
#include "ui_afterlogin.h"

afterLogin::afterLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::afterLogin)
{
    ui->setupUi(this);
}

afterLogin::~afterLogin()
{
    delete ui;
}
