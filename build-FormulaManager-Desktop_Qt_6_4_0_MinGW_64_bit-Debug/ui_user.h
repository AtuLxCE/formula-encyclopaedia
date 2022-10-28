/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_user
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *user)
    {
        if (user->objectName().isEmpty())
            user->setObjectName("user");
        user->resize(1280, 720);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        user->setWindowIcon(icon);
        label = new QLabel(user);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 10, 211, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Agency FB")});
        font.setPointSize(24);
        font.setBold(true);
        label->setFont(font);
        label_2 = new QLabel(user);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 10, 61, 61));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/image/user.png")));
        label_2->setScaledContents(true);
        pushButton = new QPushButton(user);
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

        retranslateUi(user);

        QMetaObject::connectSlotsByName(user);
    } // setupUi

    void retranslateUi(QDialog *user)
    {
        user->setWindowTitle(QCoreApplication::translate("user", "User", nullptr));
        label->setText(QCoreApplication::translate("user", "User Mode", nullptr));
        label_2->setText(QString());
        pushButton->setText(QCoreApplication::translate("user", "Log Out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user: public Ui_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
