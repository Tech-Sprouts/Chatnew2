/********************************************************************************
** Form generated from reading UI file 'alterpwd.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALTERPWD_H
#define UI_ALTERPWD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_alterPwd
{
public:
    QWidget *widget;
    QPushButton *submitButton;
    QLabel *newpwdLab2;
    QPushButton *cancelButton;
    QLineEdit *newpwd2;
    QLineEdit *newpwd;
    QLabel *newpwdLab;
    QLineEdit *oldpwd;
    QLabel *oldpwdLab;

    void setupUi(QWidget *alterPwd)
    {
        if (alterPwd->objectName().isEmpty())
            alterPwd->setObjectName(QString::fromUtf8("alterPwd"));
        alterPwd->resize(440, 340);
        alterPwd->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
"	background-color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton#submitButton{\n"
"border-style:none;\n"
"}\n"
"QPushButton#cancelButton{\n"
"border-style:none;\n"
"text-decoration:underline;\n"
"}\n"
"QLineEdit{\n"
"border:none;\n"
"border-bottom:1px solid rgb(0, 0, 0);\n"
"}"));
        widget = new QWidget(alterPwd);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 400, 300));
        submitButton = new QPushButton(widget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(140, 210, 112, 51));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/button.png"), QSize(), QIcon::Normal, QIcon::Off);
        submitButton->setIcon(icon);
        submitButton->setIconSize(QSize(100, 60));
        newpwdLab2 = new QLabel(widget);
        newpwdLab2->setObjectName(QString::fromUtf8("newpwdLab2"));
        newpwdLab2->setGeometry(QRect(50, 150, 101, 20));
        newpwdLab2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cancelButton = new QPushButton(widget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(311, 260, 71, 34));
        newpwd2 = new QLineEdit(widget);
        newpwd2->setObjectName(QString::fromUtf8("newpwd2"));
        newpwd2->setGeometry(QRect(180, 150, 141, 25));
        newpwd = new QLineEdit(widget);
        newpwd->setObjectName(QString::fromUtf8("newpwd"));
        newpwd->setGeometry(QRect(180, 100, 141, 25));
        newpwdLab = new QLabel(widget);
        newpwdLab->setObjectName(QString::fromUtf8("newpwdLab"));
        newpwdLab->setGeometry(QRect(90, 100, 61, 20));
        newpwdLab->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        oldpwd = new QLineEdit(widget);
        oldpwd->setObjectName(QString::fromUtf8("oldpwd"));
        oldpwd->setGeometry(QRect(180, 50, 141, 25));
        oldpwdLab = new QLabel(widget);
        oldpwdLab->setObjectName(QString::fromUtf8("oldpwdLab"));
        oldpwdLab->setGeometry(QRect(90, 50, 61, 20));
        oldpwdLab->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        retranslateUi(alterPwd);

        QMetaObject::connectSlotsByName(alterPwd);
    } // setupUi

    void retranslateUi(QWidget *alterPwd)
    {
        alterPwd->setWindowTitle(QApplication::translate("alterPwd", "Form", nullptr));
        submitButton->setText(QString());
        newpwdLab2->setText(QApplication::translate("alterPwd", "\347\241\256\350\256\244\346\226\260\345\257\206\347\240\201", nullptr));
        cancelButton->setText(QApplication::translate("alterPwd", "\345\217\226\346\266\210", nullptr));
        newpwdLab->setText(QApplication::translate("alterPwd", "\346\226\260\345\257\206\347\240\201", nullptr));
        oldpwdLab->setText(QApplication::translate("alterPwd", "\346\227\247\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class alterPwd: public Ui_alterPwd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALTERPWD_H
