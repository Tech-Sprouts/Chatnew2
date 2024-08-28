/********************************************************************************
** Form generated from reading UI file 'chooseimage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEIMAGE_H
#define UI_CHOOSEIMAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChooseImage
{
public:
    QWidget *widget;
    QPushButton *sendImg;
    QPushButton *chooseImg;
    QLineEdit *lineEdit;
    QPushButton *cancelButton;
    QLabel *label;

    void setupUi(QWidget *ChooseImage)
    {
        if (ChooseImage->objectName().isEmpty())
            ChooseImage->setObjectName(QString::fromUtf8("ChooseImage"));
        ChooseImage->resize(440, 340);
        ChooseImage->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
"background-image: url(:/img/bg__3.png); \n"
"color:rgba(76, 108, 179, 0.7);\n"
"}\n"
"QPushButton#cancelButton{\n"
"border-style:none;\n"
"text-decoration:underline;\n"
"}\n"
"QPushButton#pushButton_2{\n"
"border:none;\n"
"}\n"
"QPushButton#pushButton{\n"
"border:1px solid rgba(76, 108, 179, 0.7); /* \350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"color:rgba(76, 108, 179, 0.7);\n"
"}\n"
"QLineEdit#lineEdit{\n"
"background-color:rgba(255,255,255,0.5)\n"
"}\n"
"\n"
"QPushButton#chooseImg{\n"
"border:1px solid rgba(76, 108, 179, 0.7); /* \350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"color:rgba(76, 108, 179, 0.7);\n"
"}\n"
"\n"
"QPushButton#submitButton{\n"
"border:none;\n"
"	background-color: rgba(255, 233, 202, 0.2);\n"
"border-radius:8px;\n"
"}"));
        widget = new QWidget(ChooseImage);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 400, 300));
        sendImg = new QPushButton(widget);
        sendImg->setObjectName(QString::fromUtf8("sendImg"));
        sendImg->setGeometry(QRect(132, 180, 111, 61));
        sendImg->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border:none;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/button.png"), QSize(), QIcon::Normal, QIcon::Off);
        sendImg->setIcon(icon);
        sendImg->setIconSize(QSize(100, 80));
        chooseImg = new QPushButton(widget);
        chooseImg->setObjectName(QString::fromUtf8("chooseImg"));
        chooseImg->setGeometry(QRect(50, 70, 91, 34));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(50, 110, 259, 25));
        cancelButton = new QPushButton(widget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        cancelButton->setGeometry(QRect(320, 260, 71, 34));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 20, 101, 31));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        retranslateUi(ChooseImage);

        QMetaObject::connectSlotsByName(ChooseImage);
    } // setupUi

    void retranslateUi(QWidget *ChooseImage)
    {
        ChooseImage->setWindowTitle(QApplication::translate("ChooseImage", "Form", nullptr));
        sendImg->setText(QString());
        chooseImg->setText(QApplication::translate("ChooseImage", "\351\200\211\346\213\251", nullptr));
        cancelButton->setText(QApplication::translate("ChooseImage", "\345\217\226\346\266\210", nullptr));
        label->setText(QApplication::translate("ChooseImage", "\345\217\221\351\200\201\345\233\276\347\211\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChooseImage: public Ui_ChooseImage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEIMAGE_H
