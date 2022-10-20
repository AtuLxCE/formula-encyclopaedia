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

void Login::on_loginBtn_clicked()
{
    //MySql Connection
     QSqlDatabase db;
    db = QSqlDatabase:: addDatabase("QMYSQL","MyConnect");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("password");
    db.setDatabaseName("login");

    QString username = ui-> username->text();
    QString password = ui-> password->text();
    QString type = ui-> comboBox->currentText();


    if (db.open()){
        //Creating Queries
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("Select * from credentials where username = :username AND password= :password AND type = :type"));
        query.bindValue(":username",username);
        query.bindValue(":password",password);
        query.bindValue(":type",type);

        if(!query.exec()){
            QMessageBox::information(this,"Failed","Query Failed To  Execute");
        }
        else{
            if (type == "Guest"){
                QMessageBox::information(this,"Guest","This is guest");
            }

            while (query.next()){
            QString usernameFromDB = query.value(0).toString();
            QString passwordFromDB = query.value(1).toString();
            QString typeFromDB = query.value(2).toString();

            if (usernameFromDB == username && passwordFromDB == password && typeFromDB == type){
                QMessageBox::information(this,"Success","Login Succcess");
                if (type == "Admin"){
                }
                else if (type == "User"){
                }
                else {
                    //Opening formula manager for Guest
                }
            }
            else{
                QMessageBox::information(this,"Fail","Login Failed");
            }
            }             
        }
    }
    else {
        QMessageBox::information(this,"Database failed","Database Connection Failed");
    }
}
