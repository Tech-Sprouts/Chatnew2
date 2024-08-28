/********************************************************************************
** Form generated from reading UI file 'new_windows.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_WINDOWS_H
#define UI_NEW_WINDOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_new_windows
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *lineEdit;

    void setupUi(QWidget *new_windows)
    {
        if (new_windows->objectName().isEmpty())
            new_windows->setObjectName(QString::fromUtf8("new_windows"));
        new_windows->resize(274, 160);
        pushButton = new QPushButton(new_windows);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 110, 93, 28));
        pushButton_2 = new QPushButton(new_windows);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 110, 93, 28));
        lineEdit = new QLabel(new_windows);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 30, 201, 51));
        lineEdit->setWordWrap(true);

        retranslateUi(new_windows);

        QMetaObject::connectSlotsByName(new_windows);
    } // setupUi

    void retranslateUi(QWidget *new_windows)
    {
        new_windows->setWindowTitle(QApplication::translate("new_windows", "\346\202\250\346\234\211\344\270\200\346\235\241\346\226\260\347\232\204\345\245\275\345\217\213\350\257\267\346\261\202", nullptr));
        pushButton->setText(QApplication::translate("new_windows", "\346\216\245\345\217\227", nullptr));
        pushButton_2->setText(QApplication::translate("new_windows", "\346\213\222\347\273\235", nullptr));
        lineEdit->setText(QApplication::translate("new_windows", "lineEdit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class new_windows: public Ui_new_windows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_WINDOWS_H
