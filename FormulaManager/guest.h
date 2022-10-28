#ifndef GUEST_H
#define GUEST_H

#include <QDialog>

namespace Ui {
class guest;
}

class guest : public QDialog
{
    Q_OBJECT

public:
    explicit guest(QWidget *parent = nullptr);
    ~guest();

private slots:
    void on_pushButton_clicked();

private:
    Ui::guest *ui;
};

#endif // GUEST_H
