/********************************************************************************
** Form generated from reading UI file 'altername.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALTERNAME_H
#define UI_ALTERNAME_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_alterName
{
public:
    QWidget *widget;
    QPushButton *submitButton;
    QPushButton *cancelButton;
    QTextEdit *newName;

    void setupUi(QWidget *alterName)
    {
        if (alterName->objectName().isEmpty())
            alterName->setObjectName(QString::fromUtf8("alterName"));
        alterName->resize(440, 340);
        alterName->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
"background-image: url(:/img/bg__3.png); \n"
"}\n"
"QPushButton#cancelButton{\n"
"border-style:none;\n"
"text-decoration:underline;\n"
"}\n"
"QPushButton#pushButton_2{\n"
"border:none;\n"
"}\n"
"QLineEdit#lineEdit{\n"
"background-color:rgba(255,255,255,0.5)\n"
"}\n"
"\n"
"QPushButton#submitButton{\n"
"border:none;\n"
"	background-color: rgba(255, 233, 202, 0.2);\n"
"border-radius:8px;\n"
"}"));
        widget = new QWidget(alterName);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 400, 300));
        submitButton = new QPushButton(widget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));
        submitButton->setGeometry(QRect(140, 160, 112, 61));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/button.png"), QSize(), QIcon::Normal, QIcon::Off);
        submitButton->setIcon(icon);
        submitButton->setIconSize(QSize(100, 80));
        cancelButton = new QPushButton(widget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(310, 260, 71, 34));
        newName = new QTextEdit(widget);
        newName->setObjectName(QString::fromUtf8("newName"));
        newName->setGeometry(QRect(60, 90, 291, 41));
        newName->setAutoFillBackground(false);
        newName->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(227, 227, 227);"));

        retranslateUi(alterName);

        QMetaObject::connectSlotsByName(alterName);
    } // setupUi

    void retranslateUi(QWidget *alterName)
    {
        alterName->setWindowTitle(QApplication::translate("alterName", "Form", nullptr));
        submitButton->setText(QString());
        cancelButton->setText(QApplication::translate("alterName", "\345\217\226\346\266\210", nullptr));
        newName->setPlaceholderText(QApplication::translate("alterName", "\350\257\267\350\276\223\345\205\245\346\202\250\347\232\204\346\226\260\346\230\265\347\247\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class alterName: public Ui_alterName {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALTERNAME_H
