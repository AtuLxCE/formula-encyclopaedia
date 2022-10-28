#include "admin.h"
#include "ui_admin.h"

admin::admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::admin)
{
    QApplication::setWindowIcon(QPixmap(":/../admin.png"));
    ui->setupUi(this);
}

admin::~admin()
{
    delete ui;
}
