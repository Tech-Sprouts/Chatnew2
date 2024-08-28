/********************************************************************************
** Form generated from reading UI file 'addfriendalert.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFRIENDALERT_H
#define UI_ADDFRIENDALERT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addfriendalert
{
public:
    QWidget *widget;
    QTextEdit *textEdit;
    QPushButton *agree;
    QToolButton *toolButton;
    QPushButton *refuse;

    void setupUi(QWidget *addfriendalert)
    {
        if (addfriendalert->objectName().isEmpty())
            addfriendalert->setObjectName(QString::fromUtf8("addfriendalert"));
        addfriendalert->resize(441, 253);
        addfriendalert->setStyleSheet(QString::fromUtf8("QToolButton#toolButton{\n"
"color:rgb(0,0,0);\n"
"border-style:none;\n"
"}\n"
"QToolButton#toolButton::hover{\n"
"color:rgb(255,255,255);\n"
"background-color: rgba(255, 56, 56, 150)\n"
"}\n"
"QWidget#widget{\n"
"background-color: rgb(255, 255, 255);\n"
"}"));
        widget = new QWidget(addfriendalert);
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
        agree = new QPushButton(widget);
        agree->setObjectName(QString::fromUtf8("agree"));
        agree->setGeometry(QRect(240, 110, 111, 71));
        agree->setStyleSheet(QString::fromUtf8("border:none;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/button4.png"), QSize(), QIcon::Normal, QIcon::Off);
        agree->setIcon(icon);
        agree->setIconSize(QSize(250, 80));
        toolButton = new QToolButton(widget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(350, 0, 47, 41));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/no.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon1);
        toolButton->setIconSize(QSize(30, 30));
        refuse = new QPushButton(widget);
        refuse->setObjectName(QString::fromUtf8("refuse"));
        refuse->setGeometry(QRect(70, 110, 111, 71));
        refuse->setStyleSheet(QString::fromUtf8("border:none;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/button5.png"), QSize(), QIcon::Normal, QIcon::Off);
        refuse->setIcon(icon2);
        refuse->setIconSize(QSize(250, 80));

        retranslateUi(addfriendalert);

        QMetaObject::connectSlotsByName(addfriendalert);
    } // setupUi

    void retranslateUi(QWidget *addfriendalert)
    {
        addfriendalert->setWindowTitle(QApplication::translate("addfriendalert", "Form", nullptr));
        textEdit->setPlaceholderText(QString());
        agree->setText(QString());
        toolButton->setText(QString());
        refuse->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class addfriendalert: public Ui_addfriendalert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFRIENDALERT_H
