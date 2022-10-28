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
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName("admin");
        admin->resize(893, 610);
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

        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QDialog *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "Admin", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("admin", "Admin Mode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
