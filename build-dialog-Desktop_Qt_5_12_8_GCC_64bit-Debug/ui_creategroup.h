/********************************************************************************
** Form generated from reading UI file 'creategroup.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEGROUP_H
#define UI_CREATEGROUP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_createGroup
{
public:
    QWidget *widget;
    QLabel *accountLabel;
    QLineEdit *account;
    QToolButton *closeButton;
    QToolButton *createButton;

    void setupUi(QWidget *createGroup)
    {
        if (createGroup->objectName().isEmpty())
            createGroup->setObjectName(QString::fromUtf8("createGroup"));
        createGroup->resize(440, 240);
        createGroup->setStyleSheet(QString::fromUtf8("QWidget#widget{\n"
"background-image: url(:/img/bg__3.png); \n"
"color:rgba(76, 108, 179, 0.7);\n"
"}\n"
"QToolButton#closeButton{\n"
"border-style:none;\n"
"text-decoration:underline;\n"
"background-color: rgba(0,0,0,0);\n"
"}\n"
"QPushButton#pushButton_2{\n"
"border:none;\n"
"}\n"
"QPushButton#pushButton{\n"
"border:1px solid rgba(76, 108, 179, 0.7); /* \350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"color:rgba(76, 108, 179, 0.7);\n"
"}\n"
"QLineEdit#account{\n"
"background-color:rgba(255,255,255,0.5)\n"
"}\n"
"\n"
"QPushButton#submitButton{\n"
"border:none;\n"
"	background-color: rgba(255, 233, 202, 0.2);\n"
"border-radius:8px;\n"
"}\n"
"\n"
"QLabel#accountLabel{\n"
"color:rgba(76, 108, 179, 1.0);\n"
"}"));
        widget = new QWidget(createGroup);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 400, 200));
        widget->setMinimumSize(QSize(400, 200));
        widget->setMaximumSize(QSize(400, 200));
        accountLabel = new QLabel(widget);
        accountLabel->setObjectName(QString::fromUtf8("accountLabel"));
        accountLabel->setGeometry(QRect(10, 50, 101, 50));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        accountLabel->setFont(font);
        accountLabel->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        accountLabel->setTextFormat(Qt::AutoText);
        accountLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        account = new QLineEdit(widget);
        account->setObjectName(QString::fromUtf8("account"));
        account->setGeometry(QRect(130, 50, 200, 50));
        QFont font1;
        font1.setFamily(QString::fromUtf8("SimSun"));
        font1.setPointSize(10);
        account->setFont(font1);
        closeButton = new QToolButton(widget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(350, 0, 50, 50));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/no.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon);
        closeButton->setIconSize(QSize(30, 30));
        createButton = new QToolButton(widget);
        createButton->setObjectName(QString::fromUtf8("createButton"));
        createButton->setGeometry(QRect(280, 130, 111, 71));
        createButton->setStyleSheet(QString::fromUtf8("border:none;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/button3.png"), QSize(), QIcon::Normal, QIcon::Off);
        createButton->setIcon(icon1);
        createButton->setIconSize(QSize(300, 200));

        retranslateUi(createGroup);

        QMetaObject::connectSlotsByName(createGroup);
    } // setupUi

    void retranslateUi(QWidget *createGroup)
    {
        createGroup->setWindowTitle(QApplication::translate("createGroup", "Form", nullptr));
        accountLabel->setText(QApplication::translate("createGroup", "\347\276\244\350\201\212\345\220\215\347\247\260", nullptr));
        closeButton->setText(QString());
        createButton->setText(QApplication::translate("createGroup", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class createGroup: public Ui_createGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEGROUP_H
