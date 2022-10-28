/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *topPannel;
    QLabel *label;
    QLabel *label_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QComboBox *comboBox;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *username;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *password;
    QPushButton *loginBtn;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(893, 610);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/logo.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Login->setWindowIcon(icon);
        Login->setStyleSheet(QString::fromUtf8("#Login {\n"
"\n"
"border-image: \n"
"}"));
        topPannel = new QWidget(Login);
        topPannel->setObjectName("topPannel");
        topPannel->setGeometry(QRect(0, 0, 891, 111));
        topPannel->setStyleSheet(QString::fromUtf8("#topPannel {\n"
"border-image:url(:/image/topPannel.jpg);\n"
"}"));
        label = new QLabel(topPannel);
        label->setObjectName("label");
        label->setGeometry(QRect(260, 40, 311, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Agency FB")});
        font.setPointSize(24);
        font.setBold(true);
        label->setFont(font);
        label_4 = new QLabel(topPannel);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(170, 40, 71, 51));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/image/logo.jpg")));
        label_4->setScaledContents(true);
        groupBox = new QGroupBox(Login);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(320, 170, 248, 296));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        groupBox->setFont(font1);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName("comboBox");

        verticalLayout_3->addWidget(comboBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        QFont font2;
        font2.setPointSize(14);
        label_2->setFont(font2);

        verticalLayout->addWidget(label_2);

        username = new QLineEdit(groupBox);
        username->setObjectName("username");
        username->setFont(font2);

        verticalLayout->addWidget(username);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);

        verticalLayout_2->addWidget(label_3);

        password = new QLineEdit(groupBox);
        password->setObjectName("password");
        password->setFont(font2);
        password->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(password);


        verticalLayout_3->addLayout(verticalLayout_2);

        loginBtn = new QPushButton(groupBox);
        loginBtn->setObjectName("loginBtn");
        loginBtn->setFont(font1);

        verticalLayout_3->addWidget(loginBtn);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        label->setText(QCoreApplication::translate("Login", "Formula Encyclopedia Login", nullptr));
        label_4->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("Login", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("Login", "Password", nullptr));
        password->setText(QString());
        loginBtn->setText(QCoreApplication::translate("Login", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
