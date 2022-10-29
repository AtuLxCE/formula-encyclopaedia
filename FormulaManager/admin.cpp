#include "admin.h"
#include "ui_admin.h"

admin::admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::admin)
{
    QApplication::setWindowIcon(QPixmap(":/../admin.png"));
    ui->setupUi(this);
    ui->username->setPlaceholderText("Enter Username");
    ui->password->setPlaceholderText("Enter Password");
}

admin::~admin()
{
    delete ui;
}

void admin::on_loginBtn_clicked()
{
    //connecting to mysql database
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setPassword("password");
    database.setDatabaseName("login");

    if (database.open()){
        //Retrieve Data from input fields
        QString username = ui->username->text();
        QString password = ui->password->text();
        QString type = "User";

        //Run our insert Query
        QSqlQuery qry;
        qry.prepare("insert into credentials (username,password,type)"
                    "values(:username,:password,:type)");

        qry.bindValue(":username",username);
        qry.bindValue(":password",password);
        qry.bindValue(":type",type);

        if (qry.exec()){
            QMessageBox::information(this,"Success","User Registered Successfully!!");
        }
        else{
            QMessageBox::information(this,"Failed","User Already Exists!!");
        }
    }

    else{
       QMessageBox::information(this,"Not Connected","Database is not connected");
    }

}


void admin::on_pushButton_clicked()
{
    close();
}

