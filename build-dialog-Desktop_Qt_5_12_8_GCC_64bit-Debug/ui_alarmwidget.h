/********************************************************************************
** Form generated from reading UI file 'alarmwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALARMWIDGET_H
#define UI_ALARMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_alarmWidget
{
public:

    void setupUi(QWidget *alarmWidget)
    {
        if (alarmWidget->objectName().isEmpty())
            alarmWidget->setObjectName(QString::fromUtf8("alarmWidget"));
        alarmWidget->resize(200, 100);

        retranslateUi(alarmWidget);

        QMetaObject::connectSlotsByName(alarmWidget);
    } // setupUi

    void retranslateUi(QWidget *alarmWidget)
    {
        alarmWidget->setWindowTitle(QApplication::translate("alarmWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class alarmWidget: public Ui_alarmWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALARMWIDGET_H
