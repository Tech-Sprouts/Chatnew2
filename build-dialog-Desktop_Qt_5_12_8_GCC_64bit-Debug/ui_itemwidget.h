/********************************************************************************
** Form generated from reading UI file 'itemwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMWIDGET_H
#define UI_ITEMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemWidget
{
public:
    QWidget *widget;

    void setupUi(QWidget *ItemWidget)
    {
        if (ItemWidget->objectName().isEmpty())
            ItemWidget->setObjectName(QString::fromUtf8("ItemWidget"));
        ItemWidget->resize(550, 50);
        widget = new QWidget(ItemWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 550, 50));

        retranslateUi(ItemWidget);

        QMetaObject::connectSlotsByName(ItemWidget);
    } // setupUi

    void retranslateUi(QWidget *ItemWidget)
    {
        ItemWidget->setWindowTitle(QApplication::translate("ItemWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemWidget: public Ui_ItemWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMWIDGET_H
