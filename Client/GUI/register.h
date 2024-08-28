#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>
#include <QMouseEvent>
#include "DataModel/datamodel.h"
#include <QLineEdit>

namespace Ui {
class Register;
}

class Register : public QWidget
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();

private slots:

    void showRegisterSuccessful(UserInfo info);
    void showRegisterFailed();

    void on_loginButton_clicked();


    void on_closeButton_clicked();

    void on_minimizeButton_clicked();

    void on_btn_register_clicked();

private:
    Ui::Register *ui;

    void PasswordVisibility(QLineEdit *passwordLineEdit);
};

#endif // REGISTER_H
