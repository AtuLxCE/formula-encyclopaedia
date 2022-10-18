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
    QPushButton* target = qobject_cast<QPushButton*>(sender());
    if (target != nullptr)
    {
        target->setStyleSheet(QString("#%1 { background-color: red; }").arg(target->objectName()));
    }
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

/*#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->myPushButton, &QPushButton::clicked, this, &MainWindow::onClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onClicked()
{
    QPushButton* target = qobject_cast<QPushButton*>(sender());
    if (target != nullptr)
    {
        target->setStyleSheet(QString("#%1 { background-color: red; }").arg(target->objectName()));
    }
}
*/
