/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QWidget *widget;
    QLabel *accountLable;
    QLabel *pwdLable;
    QLabel *pwd2Lable;
    QLineEdit *account;
    QLineEdit *pwd;
    QLineEdit *pwd2;
    QToolButton *closeButton;
    QToolButton *minimizeButton;
    QPushButton *loginButton;
    QToolButton *registerButton;
    QLabel *label;

    void setupUi(QWidget *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QString::fromUtf8("Register"));
        Register->resize(440, 640);
        Register->setMinimumSize(QSize(440, 640));
        Register->setMaximumSize(QSize(440, 660));
        QFont font;
        font.setFamily(QString::fromUtf8("Goudy Old Style"));
        Register->setFont(font);
        Register->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
"border:none;\n"
"	background-image: url(:/img/login.png);\n"
"border-radius:15px;\n"
"}\n"
"QToolButton#closeButton{\n"
"color:rgb(0,0,0);\n"
"border-style:none;\n"
"}\n"
"QToolButton#closeButton::hover{\n"
"color:rgb(255,255,255);\n"
"background-color: rgba(255, 56, 56, 150);\n"
"}\n"
"QToolButton#minimizeButton{\n"
"border-style:none;\n"
"color:rgb(0,0,0);\n"
"}\n"
"QToolButton#minimizeButton::hover{\n"
"border-style:none;\n"
"color:rgb(0,0,0);\n"
"background-color: rgba(203, 203, 203, 150);\n"
"}\n"
"QToolButton#registerButton{\n"
"border-style:none;\n"
"}\n"
"QToolButton#registerButton::hover{\n"
"border-style:none;\n"
"border-image: url(:/img/loginbtnhover.png);\n"
"}\n"
"QPushButton#loginButton{\n"
"border-style:none;\n"
"text-decoration:underline;\n"
"}\n"
"QPushButton#loginButton::hover{\n"
"border-style:none;\n"
"color:rgb(0,0,255);\n"
"text-decoration:underline;\n"
"}\n"
"QLineEdit#account{\n"
"border:none;\n"
"border-bottom:1px solid rgb(0, 0, 0);\n"
"border-bottom:1px solid rgb("
                        "150, 150, 150);\n"
"}\n"
"QLineEdit#pwd{\n"
"border:none;\n"
"border-bottom:1px solid rgb(0, 0, 0);\n"
"border-bottom:1px solid rgb(150, 150, 150);\n"
"}\n"
"QLineEdit#pwd2{\n"
"border:none;\n"
"border-bottom:1px solid rgb(0, 0, 0);\n"
"border-bottom:1px solid rgb(150, 150, 150);\n"
"}"));
        widget = new QWidget(Register);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 400, 600));
        widget->setMinimumSize(QSize(400, 600));
        widget->setMaximumSize(QSize(400, 600));
        accountLable = new QLabel(widget);
        accountLable->setObjectName(QString::fromUtf8("accountLable"));
        accountLable->setGeometry(QRect(40, 280, 61, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        accountLable->setFont(font1);
        accountLable->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        accountLable->setTextFormat(Qt::AutoText);
        accountLable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pwdLable = new QLabel(widget);
        pwdLable->setObjectName(QString::fromUtf8("pwdLable"));
        pwdLable->setGeometry(QRect(50, 350, 50, 50));
        pwdLable->setFont(font1);
        pwdLable->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pwdLable->setTextFormat(Qt::AutoText);
        pwdLable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        pwd2Lable = new QLabel(widget);
        pwd2Lable->setObjectName(QString::fromUtf8("pwd2Lable"));
        pwd2Lable->setGeometry(QRect(10, 420, 90, 50));
        pwd2Lable->setFont(font1);
        pwd2Lable->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        pwd2Lable->setTextFormat(Qt::AutoText);
        pwd2Lable->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        account = new QLineEdit(widget);
        account->setObjectName(QString::fromUtf8("account"));
        account->setGeometry(QRect(130, 270, 200, 50));
        QFont font2;
        font2.setFamily(QString::fromUtf8("SimSun"));
        font2.setPointSize(10);
        account->setFont(font2);
        pwd = new QLineEdit(widget);
        pwd->setObjectName(QString::fromUtf8("pwd"));
        pwd->setGeometry(QRect(130, 340, 200, 50));
        QFont font3;
        font3.setFamily(QString::fromUtf8("SimSun"));
        font3.setPointSize(6);
        pwd->setFont(font3);
        pwd2 = new QLineEdit(widget);
        pwd2->setObjectName(QString::fromUtf8("pwd2"));
        pwd2->setGeometry(QRect(130, 410, 200, 50));
        pwd2->setFont(font3);
        closeButton = new QToolButton(widget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(350, 0, 50, 50));
        minimizeButton = new QToolButton(widget);
        minimizeButton->setObjectName(QString::fromUtf8("minimizeButton"));
        minimizeButton->setGeometry(QRect(300, 0, 50, 50));
        loginButton = new QPushButton(widget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(10, 560, 80, 30));
        registerButton = new QToolButton(widget);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));
        registerButton->setGeometry(QRect(270, 490, 60, 60));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/loginbtn.png"), QSize(), QIcon::Normal, QIcon::Off);
        registerButton->setIcon(icon);
        registerButton->setIconSize(QSize(60, 60));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 170, 71, 51));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font4.setPointSize(15);
        font4.setBold(true);
        font4.setWeight(75);
        label->setFont(font4);
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/registertext.PNG")));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QWidget *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Form", nullptr));
        accountLable->setText(QApplication::translate("Register", "\346\230\265\347\247\260", nullptr));
        pwdLable->setText(QApplication::translate("Register", "\345\257\206\347\240\201", nullptr));
        pwd2Lable->setText(QApplication::translate("Register", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        closeButton->setText(QApplication::translate("Register", "\303\227", nullptr));
        minimizeButton->setText(QApplication::translate("Register", "-", nullptr));
        loginButton->setText(QApplication::translate("Register", "\347\231\273\345\275\225\350\264\246\345\217\267", nullptr));
        registerButton->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
