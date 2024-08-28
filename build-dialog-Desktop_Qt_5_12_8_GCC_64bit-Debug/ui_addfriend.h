/********************************************************************************
** Form generated from reading UI file 'addfriend.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFRIEND_H
#define UI_ADDFRIEND_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addfriend
{
public:
    QWidget *widget;
    QTextEdit *textEdit;
    QPushButton *noUse;
    QPushButton *addFriendButton;
    QToolButton *toolButton;

    void setupUi(QWidget *addfriend)
    {
        if (addfriend->objectName().isEmpty())
            addfriend->setObjectName(QString::fromUtf8("addfriend"));
        addfriend->resize(443, 249);
        addfriend->setStyleSheet(QString::fromUtf8("QToolButton#toolButton{\n"
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
        widget = new QWidget(addfriend);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 401, 211));
        widget->setStyleSheet(QString::fromUtf8(""));
        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(60, 50, 291, 41));
        textEdit->setAutoFillBackground(false);
        textEdit->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(227, 227, 227);"));
        noUse = new QPushButton(widget);
        noUse->setObjectName(QString::fromUtf8("noUse"));
        noUse->setGeometry(QRect(10, 50, 41, 41));
        noUse->setStyleSheet(QString::fromUtf8("border:none;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        noUse->setIcon(icon);
        noUse->setIconSize(QSize(30, 30));
        addFriendButton = new QPushButton(widget);
        addFriendButton->setObjectName(QString::fromUtf8("addFriendButton"));
        addFriendButton->setGeometry(QRect(250, 120, 111, 71));
        addFriendButton->setStyleSheet(QString::fromUtf8("border:none;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/button2.png"), QSize(), QIcon::Normal, QIcon::Off);
        addFriendButton->setIcon(icon1);
        addFriendButton->setIconSize(QSize(250, 80));
        toolButton = new QToolButton(widget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(350, 0, 47, 41));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/no.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon2);
        toolButton->setIconSize(QSize(30, 30));

        retranslateUi(addfriend);

        QMetaObject::connectSlotsByName(addfriend);
    } // setupUi

    void retranslateUi(QWidget *addfriend)
    {
        addfriend->setWindowTitle(QApplication::translate("addfriend", "Form", nullptr));
        textEdit->setPlaceholderText(QApplication::translate("addfriend", "\350\257\267\350\276\223\345\205\245\345\257\271\346\226\271\347\232\204id\345\217\267", nullptr));
        noUse->setText(QString());
        addFriendButton->setText(QString());
        toolButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class addfriend: public Ui_addfriend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFRIEND_H
