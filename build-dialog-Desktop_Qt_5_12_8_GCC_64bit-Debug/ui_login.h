/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *widget;
    QLineEdit *account;
    QLineEdit *password;
    QToolButton *loginButton;
    QToolButton *closeButton;
    QToolButton *minimizeButton;
    QLabel *accountLabel;
    QLabel *passwordLabel;
    QPushButton *registerButton;
    QLabel *label;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(440, 640);
        login->setMinimumSize(QSize(440, 640));
        login->setMaximumSize(QSize(440, 640));
        login->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
"	background-image: url(:/img/login.png);\n"
"border-radius:15px;\n"
"}\n"
"QToolButton#closeButton{\n"
"color:rgb(0,0,0);\n"
"border-style:none;\n"
"border-top-right-radius:15px;\n"
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
"QToolButton#loginButton{\n"
"border-style:none;\n"
"}\n"
"QToolButton#loginButton::hover{\n"
"	border-image: url(:/img/loginbtnhover.png);\n"
"}\n"
"QPushButton#registerButton{\n"
"border-style:none;\n"
"text-decoration:underline;\n"
"}\n"
"QPushButton#registerButton::hover{\n"
"border-style:none;\n"
"color:rgb(0,0,255);\n"
"text-decoration:underline;\n"
"}\n"
"QLineEdit#account{\n"
"border:none;\n"
"border-bottom:1px solid rgb(150, 150, 150);\n"
"}\n"
"QLineEdit#password{\n"
""
                        "border:none;\n"
"border-bottom:1px solid rgb(150, 150, 150);\n"
"}"));
        widget = new QWidget(login);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 400, 600));
        widget->setMinimumSize(QSize(400, 600));
        widget->setMaximumSize(QSize(400, 600));
        account = new QLineEdit(widget);
        account->setObjectName(QString::fromUtf8("account"));
        account->setGeometry(QRect(110, 302, 221, 45));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        account->setFont(font);
        account->setClearButtonEnabled(false);
        password = new QLineEdit(widget);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(110, 382, 221, 45));
        QFont font1;
        font1.setPointSize(6);
        font1.setKerning(false);
        password->setFont(font1);
        loginButton = new QToolButton(widget);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(280, 470, 60, 60));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/loginbtn.png"), QSize(), QIcon::Normal, QIcon::Off);
        loginButton->setIcon(icon);
        loginButton->setIconSize(QSize(60, 60));
        closeButton = new QToolButton(widget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(360, 0, 40, 40));
        minimizeButton = new QToolButton(widget);
        minimizeButton->setObjectName(QString::fromUtf8("minimizeButton"));
        minimizeButton->setGeometry(QRect(320, 0, 40, 40));
        accountLabel = new QLabel(widget);
        accountLabel->setObjectName(QString::fromUtf8("accountLabel"));
        accountLabel->setGeometry(QRect(40, 300, 50, 50));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        accountLabel->setFont(font2);
        accountLabel->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        accountLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        passwordLabel = new QLabel(widget);
        passwordLabel->setObjectName(QString::fromUtf8("passwordLabel"));
        passwordLabel->setGeometry(QRect(40, 380, 50, 50));
        passwordLabel->setFont(font2);
        passwordLabel->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        passwordLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        registerButton = new QPushButton(widget);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));
        registerButton->setGeometry(QRect(10, 560, 80, 30));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 170, 71, 51));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font3.setPointSize(15);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/logintext.PNG")));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Widget", nullptr));
        account->setText(QString());
        loginButton->setText(QString());
        closeButton->setText(QApplication::translate("login", "\303\227", nullptr));
        minimizeButton->setText(QApplication::translate("login", "-", nullptr));
        accountLabel->setText(QApplication::translate("login", "\350\264\246\345\217\267", nullptr));
        passwordLabel->setText(QApplication::translate("login", "\345\257\206\347\240\201", nullptr));
        registerButton->setText(QApplication::translate("login", "\346\263\250\345\206\214\350\264\246\345\217\267", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
