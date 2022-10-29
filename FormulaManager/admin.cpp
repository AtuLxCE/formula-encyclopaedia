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


void admin::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}




void admin::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void admin::on_pushButton_4_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
    //connecting to mysql database
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setPassword("password");
    database.setDatabaseName("login");

    if (database.open()){
        qm = new QSqlQueryModel();
        qm->setQuery("Select * from credentials");
        ui->tableView->setModel(qm);

    }
}


void admin::on_pushButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void admin::on_pushButton_11_clicked()
{
   ui->stackedWidget->setCurrentIndex(0);
}


void admin::on_pushButton_10_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void admin::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void admin::on_loginBtn_3_clicked()
{

    //connecting to mysql database
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setPassword("password");
    database.setDatabaseName("login");

    if (database.open()){
        QString username = ui->username_3->text();
        QSqlQuery qry;
        qry.prepare("DELETE FROM credentials WHERE username = ?");
        qry.addBindValue(username);

        if (qry.exec()){
            QMessageBox::information(this,"Deleted","Deletion Success");
        }
        else{
            QMessageBox::information(this,"Failed","User doesn't exist");
        }
     }
}

