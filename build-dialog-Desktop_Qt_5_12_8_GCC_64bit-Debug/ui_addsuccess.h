/********************************************************************************
** Form generated from reading UI file 'addsuccess.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSUCCESS_H
#define UI_ADDSUCCESS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addsuccess
{
public:
    QWidget *widget;
    QTextEdit *textEdit;
    QToolButton *toolButton;
    QPushButton *ok;

    void setupUi(QWidget *addsuccess)
    {
        if (addsuccess->objectName().isEmpty())
            addsuccess->setObjectName(QString::fromUtf8("addsuccess"));
        addsuccess->resize(439, 249);
        addsuccess->setStyleSheet(QString::fromUtf8("QToolButton#toolButton{\n"
"color:rgba(255,255,255,0.2);\n"
"border-style:none;\n"
"}\n"
"QToolButton#toolButton::hover{\n"
"color:rgb(255,255,255);\n"
"background-color: rgba(255, 56, 56, 150)\n"
"}\n"
"QWidget#widget{\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
"QWidget#widget{\n"
"background-image: url(:/img/bg__3.png); \n"
"}\n"
"QPushButton#toolButton{\n"
"border-style:none;\n"
"text-decoration:underline;\n"
"}\n"
"QPushButton#pushButton_2{\n"
"border:none;\n"
"}\n"
"QLineEdit#textEdit{\n"
"background-color:rgba(255,255,255,0.2);\n"
"}\n"
"\n"
"QPushButton#pushButton{\n"
"border:2px solid rgb(76, 108, 179, 0.7);\n"
"	background-color: rgba(255, 233, 202, 0.2);\n"
"border-radius:8px;\n"
"}"));
        widget = new QWidget(addsuccess);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 401, 211));
        widget->setStyleSheet(QString::fromUtf8(""));
        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(40, 50, 311, 41));
        textEdit->setAutoFillBackground(false);
        textEdit->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"border:none;"));
        textEdit->setReadOnly(true);
        toolButton = new QToolButton(widget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(350, 0, 47, 41));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/no.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(30, 30));
        ok = new QPushButton(widget);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setGeometry(QRect(250, 110, 111, 71));
        ok->setStyleSheet(QString::fromUtf8("border:none;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/button.png"), QSize(), QIcon::Normal, QIcon::Off);
        ok->setIcon(icon1);
        ok->setIconSize(QSize(250, 80));

        retranslateUi(addsuccess);

        QMetaObject::connectSlotsByName(addsuccess);
    } // setupUi

    void retranslateUi(QWidget *addsuccess)
    {
        addsuccess->setWindowTitle(QApplication::translate("addsuccess", "Form", nullptr));
        textEdit->setPlaceholderText(QString());
        toolButton->setText(QString());
        ok->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class addsuccess: public Ui_addsuccess {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSUCCESS_H
