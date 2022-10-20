#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->comboBox->setPlaceholderText("Select UserType");
    ui->comboBox->setCurrentIndex(-1);
    ui ->comboBox->addItem("Admin");
    ui ->comboBox->addItem("User");
    ui ->comboBox->addItem("Guest");
    ui->username->setPlaceholderText("Enter Username");
    ui->password->setPlaceholderText("Enter Password");
}
Login::~Login()
{
    delete ui;
}
