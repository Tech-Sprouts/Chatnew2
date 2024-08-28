/********************************************************************************
** Form generated from reading UI file 'new_reg.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_REG_H
#define UI_NEW_REG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_new_reg
{
public:
    QWidget *widget;
    QToolButton *toolButton;
    QTextEdit *textEdit;

    void setupUi(QWidget *new_reg)
    {
        if (new_reg->objectName().isEmpty())
            new_reg->setObjectName(QString::fromUtf8("new_reg"));
        new_reg->resize(400, 300);
        new_reg->setStyleSheet(QString::fromUtf8("QWidget#new_reg {\n"
"    background-image: url(:/img/bg__3.png);  /* \350\256\276\347\275\256\350\203\214\346\231\257\345\233\276\347\211\207 */\n"
"    font-family: \"Arial\";  /* \350\256\276\347\275\256\345\255\227\344\275\223\344\270\272 Arial */\n"
"    font-size: 14px;  /* \350\256\276\347\275\256\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    font-weight: bold;  /* \350\256\276\347\275\256\345\255\227\344\275\223\345\212\240\347\262\227 */\n"
"}\n"
"\n"
"QWidget#widget {\n"
"    background-color: rgba(255, 255, 255, 0.2);  /* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\347\231\275\350\211\262\357\274\21420%\344\270\215\351\200\217\346\230\216\345\272\246 */\n"
"    font-family: \"Times New Roman\";  /* \350\256\276\347\275\256\345\255\227\344\275\223\344\270\272 Times New Roman */\n"
"    font-size: 12px;  /* \350\256\276\347\275\256\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    color: black;  /* \350\256\276\347\275\256\345\255\227\344\275"
                        "\223\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QTextEdit#textEdit {\n"
"    background-color: rgba(255, 255, 255, 0.2);  /* \350\256\276\347\275\256\350\203\214\346\231\257\351\242\234\350\211\262\357\274\214\347\231\275\350\211\262\357\274\21420%\344\270\215\351\200\217\346\230\216\345\272\246 */\n"
"    font-family: \"Courier New\";  /* \350\256\276\347\275\256\345\255\227\344\275\223\344\270\272 Courier New */\n"
"    font-size: 14px;  /* \350\256\276\347\275\256\345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    color: blue;  /* \350\256\276\347\275\256\345\255\227\344\275\223\351\242\234\350\211\262 */\n"
"}\n"
""));
        widget = new QWidget(new_reg);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 400, 300));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);"));
        toolButton = new QToolButton(widget);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setGeometry(QRect(220, 180, 141, 81));
        toolButton->setStyleSheet(QString::fromUtf8("border:none;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/button.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(200, 100));
        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(60, 50, 271, 111));
        textEdit->setStyleSheet(QString::fromUtf8("font: 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        textEdit->setReadOnly(true);

        retranslateUi(new_reg);

        QMetaObject::connectSlotsByName(new_reg);
    } // setupUi

    void retranslateUi(QWidget *new_reg)
    {
        new_reg->setWindowTitle(QApplication::translate("new_reg", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class new_reg: public Ui_new_reg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_REG_H
