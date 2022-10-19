#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "login.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QPushButton* target = qobject_cast<QPushButton*>(sender());
    if (target != nullptr)
    {
        target->setStyleSheet(QString("#%1 { background-color: green; }").arg(target->objectName()));
    }

    QSqlDatabase db = QSqlDatabase:: addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("password");
    db.setDatabaseName("login");


/*   //checking if data base connected no need to un comment
            if (db.open()){
            QMessageBox::information(this,"Connection","Database Connected");
}
*/

//     for login window
    Login login_obj;
    login_obj.setModal(true);
    login_obj.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    QPushButton* target = qobject_cast<QPushButton*>(sender());
    if (target != nullptr)
    {
        target->setStyleSheet(QString("#%1 { background-color: red; }").arg(target->objectName()));
    }
}

