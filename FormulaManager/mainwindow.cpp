#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    QSqlDatabase db = QSqlDatabase:: addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("password");
    db.setDatabaseName("login");

    if (db.open()){
        QMessageBox::information(this,"Connection","Database Connected.");
    }
    else {
        QMessageBox::information(this,"Not Connection","Database Not Connected.");
    }
}

