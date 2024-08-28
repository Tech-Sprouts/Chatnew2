/********************************************************************************
** Form generated from reading UI file 'alterimg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALTERIMG_H
#define UI_ALTERIMG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_alterImg
{
public:
    QWidget *widget;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QPushButton *cancelButton;

    void setupUi(QWidget *alterImg)
    {
        if (alterImg->objectName().isEmpty())
            alterImg->setObjectName(QString::fromUtf8("alterImg"));
        alterImg->resize(440, 340);
        alterImg->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
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
"QPushButton#pushButton{\n"
"border:2px solid rgb(76, 108, 179, 0.7);\n"
"	background-color: rgba(255, 233, 202, 0.2);\n"
"border-radius:8px;\n"
"}"));
        widget = new QWidget(alterImg);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 400, 300));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(132, 180, 111, 61));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/button.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(100, 80));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 70, 91, 34));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(50, 110, 259, 25));
        cancelButton = new QPushButton(widget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(320, 260, 71, 34));

        retranslateUi(alterImg);

        QMetaObject::connectSlotsByName(alterImg);
    } // setupUi

    void retranslateUi(QWidget *alterImg)
    {
        alterImg->setWindowTitle(QApplication::translate("alterImg", "Form", nullptr));
        pushButton_2->setText(QString());
        pushButton->setText(QApplication::translate("alterImg", "\351\200\211\346\213\251", nullptr));
        cancelButton->setText(QApplication::translate("alterImg", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class alterImg: public Ui_alterImg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALTERIMG_H
