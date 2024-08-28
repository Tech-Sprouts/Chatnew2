/********************************************************************************
** Form generated from reading UI file 'addgroup.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDGROUP_H
#define UI_ADDGROUP_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addgroup
{
public:
    QWidget *widget;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QPushButton *addgroupButton;
    QToolButton *closeButton;

    void setupUi(QWidget *addgroup)
    {
        if (addgroup->objectName().isEmpty())
            addgroup->setObjectName(QString::fromUtf8("addgroup"));
        addgroup->resize(440, 240);
        addgroup->setStyleSheet(QString::fromUtf8("QToolButton#closeButton{\n"
"color:rgb(0,0,0);\n"
"border-style:none;\n"
"}\n"
"QToolButton#closeButton::hover{\n"
"color:rgb(255,255,255);\n"
"background-color: rgba(255, 56, 56, 150)\n"
"}\n"
"QWidget#widget{\n"
"background-color: rgb(255, 255, 255);\n"
"}\n"
""));
        widget = new QWidget(addgroup);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 401, 200));
        widget->setStyleSheet(QString::fromUtf8(""));
        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(60, 50, 291, 41));
        textEdit->setAutoFillBackground(false);
        textEdit->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgb(227, 227, 227);\n"
""));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 50, 41, 41));
        pushButton->setStyleSheet(QString::fromUtf8("border:none;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(30, 30));
        addgroupButton = new QPushButton(widget);
        addgroupButton->setObjectName(QString::fromUtf8("addgroupButton"));
        addgroupButton->setGeometry(QRect(250, 120, 111, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(10);
        addgroupButton->setFont(font);
        addgroupButton->setStyleSheet(QString::fromUtf8("border:none;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/button2.png"), QSize(), QIcon::Normal, QIcon::Off);
        addgroupButton->setIcon(icon1);
        addgroupButton->setIconSize(QSize(240, 72));
        closeButton = new QToolButton(widget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(360, 0, 40, 40));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/no.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon2);
        closeButton->setIconSize(QSize(30, 30));

        retranslateUi(addgroup);

        QMetaObject::connectSlotsByName(addgroup);
    } // setupUi

    void retranslateUi(QWidget *addgroup)
    {
        addgroup->setWindowTitle(QApplication::translate("addgroup", "Form", nullptr));
        textEdit->setPlaceholderText(QApplication::translate("addgroup", "\350\257\267\350\276\223\345\205\245\347\276\244\350\201\212id", nullptr));
        pushButton->setText(QString());
        addgroupButton->setText(QString());
        closeButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class addgroup: public Ui_addgroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDGROUP_H
