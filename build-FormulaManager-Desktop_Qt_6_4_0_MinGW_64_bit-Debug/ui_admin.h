/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLineEdit *username;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLineEdit *password;
    QPushButton *loginBtn;

    void setupUi(QDialog *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName("admin");
        admin->resize(1280, 720);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/admin.png"), QSize(), QIcon::Normal, QIcon::Off);
        admin->setWindowIcon(icon);
        label = new QLabel(admin);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 61, 61));
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/admin.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(admin);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 10, 211, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Agency FB")});
        font.setPointSize(24);
        font.setBold(true);
        label_2->setFont(font);
        pushButton = new QPushButton(admin);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(1180, 680, 91, 29));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bahnschrift Condensed")});
        font1.setPointSize(12);
        font1.setBold(false);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton:hover {\n"
"	background-color:rgb(200, 58, 58)\n"
"}"));
        groupBox = new QGroupBox(admin);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(520, 210, 248, 296));
        groupBox->setFont(font);
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Agency FB")});
        font2.setPointSize(14);
        font2.setBold(true);
        label_3->setFont(font2);

        verticalLayout->addWidget(label_3);

        username = new QLineEdit(groupBox);
        username->setObjectName("username");
        username->setFont(font2);

        verticalLayout->addWidget(username);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setFont(font2);

        verticalLayout_2->addWidget(label_4);

        password = new QLineEdit(groupBox);
        password->setObjectName("password");
        password->setFont(font2);
        password->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(password);


        verticalLayout_3->addLayout(verticalLayout_2);

        loginBtn = new QPushButton(groupBox);
        loginBtn->setObjectName("loginBtn");
        loginBtn->setFont(font2);

        verticalLayout_3->addWidget(loginBtn);


        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QDialog *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "Admin", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("admin", "Admin Mode", nullptr));
        pushButton->setText(QCoreApplication::translate("admin", "Log Out", nullptr));
        groupBox->setTitle(QCoreApplication::translate("admin", "User Registration ", nullptr));
        label_3->setText(QCoreApplication::translate("admin", "Username", nullptr));
        label_4->setText(QCoreApplication::translate("admin", "Password", nullptr));
        password->setText(QString());
        loginBtn->setText(QCoreApplication::translate("admin", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
