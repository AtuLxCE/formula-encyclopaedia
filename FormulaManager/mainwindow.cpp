#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "login.h"
#include <iostream>

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
//     for login window
    Login login_obj;
    login_obj.setModal(true);
    login_obj.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    QCoreApplication::quit();
}

