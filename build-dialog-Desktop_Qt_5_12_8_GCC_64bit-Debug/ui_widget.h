/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *login_button;
    QPushButton *register_button;
    QWidget *layoutWidget;
    QGridLayout *RegArea;
    QLabel *label_3;
    QLineEdit *reg_name;
    QLabel *label_4;
    QLineEdit *reg_pw;
    QLabel *RegTip;
    QLabel *MyInfo;
    QWidget *layoutWidget1;
    QGridLayout *MyInfoArea;
    QLabel *label_info_id;
    QLineEdit *info_id;
    QLabel *label_info_name;
    QLineEdit *info_name;
    QLabel *label_info_pw;
    QLineEdit *info_pw;
    QWidget *layoutWidget2;
    QGridLayout *LoginArea;
    QLabel *label_id;
    QLineEdit *login_id;
    QLabel *label_pw;
    QLineEdit *login_pw;
    QWidget *layoutWidget3;
    QHBoxLayout *StatusArea;
    QLabel *label_7;
    QLineEdit *status;
    QWidget *layoutWidget4;
    QVBoxLayout *SendMsgArea;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *sendto;
    QLineEdit *sendMsg_recvID;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QPlainTextEdit *MsgContentplainTextEdit;
    QWidget *layoutWidget5;
    QVBoxLayout *RecvMsgArea;
    QLabel *label_8;
    QTextBrowser *recvMsgtextBrowser;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *AddFriendshipArea;
    QLabel *label;
    QLineEdit *reg_friendId;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_4;
    QWidget *layoutWidget7;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_5;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_6;
    QLabel *label_6;
    QLineEdit *lineEdit_3;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLabel *label_12;
    QLabel *label_13;
    QWidget *layoutWidget9;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_11;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton_10;
    QPushButton *pushButton_9;
    QWidget *layoutWidget10;
    QHBoxLayout *horizontalLayout_12;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton_11;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_14;
    QLineEdit *lineEdit_8;
    QPushButton *pushButton_12;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(929, 572);
        login_button = new QPushButton(Widget);
        login_button->setObjectName(QString::fromUtf8("login_button"));
        login_button->setGeometry(QRect(110, 100, 93, 28));
        register_button = new QPushButton(Widget);
        register_button->setObjectName(QString::fromUtf8("register_button"));
        register_button->setGeometry(QRect(110, 260, 93, 28));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 170, 171, 56));
        RegArea = new QGridLayout(layoutWidget);
        RegArea->setObjectName(QString::fromUtf8("RegArea"));
        RegArea->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        RegArea->addWidget(label_3, 0, 0, 1, 1);

        reg_name = new QLineEdit(layoutWidget);
        reg_name->setObjectName(QString::fromUtf8("reg_name"));

        RegArea->addWidget(reg_name, 0, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        RegArea->addWidget(label_4, 1, 0, 1, 1);

        reg_pw = new QLineEdit(layoutWidget);
        reg_pw->setObjectName(QString::fromUtf8("reg_pw"));
        reg_pw->setEchoMode(QLineEdit::Password);

        RegArea->addWidget(reg_pw, 1, 1, 1, 1);

        RegTip = new QLabel(Widget);
        RegTip->setObjectName(QString::fromUtf8("RegTip"));
        RegTip->setGeometry(QRect(30, 230, 171, 24));
        MyInfo = new QLabel(Widget);
        MyInfo->setObjectName(QString::fromUtf8("MyInfo"));
        MyInfo->setGeometry(QRect(30, 300, 171, 24));
        layoutWidget1 = new QWidget(Widget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 330, 171, 91));
        MyInfoArea = new QGridLayout(layoutWidget1);
        MyInfoArea->setObjectName(QString::fromUtf8("MyInfoArea"));
        MyInfoArea->setContentsMargins(0, 0, 0, 0);
        label_info_id = new QLabel(layoutWidget1);
        label_info_id->setObjectName(QString::fromUtf8("label_info_id"));

        MyInfoArea->addWidget(label_info_id, 0, 0, 1, 1);

        info_id = new QLineEdit(layoutWidget1);
        info_id->setObjectName(QString::fromUtf8("info_id"));
        info_id->setEnabled(false);

        MyInfoArea->addWidget(info_id, 0, 1, 1, 1);

        label_info_name = new QLabel(layoutWidget1);
        label_info_name->setObjectName(QString::fromUtf8("label_info_name"));

        MyInfoArea->addWidget(label_info_name, 1, 0, 1, 1);

        info_name = new QLineEdit(layoutWidget1);
        info_name->setObjectName(QString::fromUtf8("info_name"));
        info_name->setEnabled(false);

        MyInfoArea->addWidget(info_name, 1, 1, 1, 1);

        label_info_pw = new QLabel(layoutWidget1);
        label_info_pw->setObjectName(QString::fromUtf8("label_info_pw"));

        MyInfoArea->addWidget(label_info_pw, 2, 0, 1, 1);

        info_pw = new QLineEdit(layoutWidget1);
        info_pw->setObjectName(QString::fromUtf8("info_pw"));
        info_pw->setEnabled(false);

        MyInfoArea->addWidget(info_pw, 2, 1, 1, 1);

        layoutWidget2 = new QWidget(Widget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 30, 171, 56));
        LoginArea = new QGridLayout(layoutWidget2);
        LoginArea->setObjectName(QString::fromUtf8("LoginArea"));
        LoginArea->setContentsMargins(0, 0, 0, 0);
        label_id = new QLabel(layoutWidget2);
        label_id->setObjectName(QString::fromUtf8("label_id"));

        LoginArea->addWidget(label_id, 0, 0, 1, 1);

        login_id = new QLineEdit(layoutWidget2);
        login_id->setObjectName(QString::fromUtf8("login_id"));

        LoginArea->addWidget(login_id, 0, 1, 1, 1);

        label_pw = new QLabel(layoutWidget2);
        label_pw->setObjectName(QString::fromUtf8("label_pw"));

        LoginArea->addWidget(label_pw, 1, 0, 1, 1);

        login_pw = new QLineEdit(layoutWidget2);
        login_pw->setObjectName(QString::fromUtf8("login_pw"));
        login_pw->setEchoMode(QLineEdit::Password);

        LoginArea->addWidget(login_pw, 1, 1, 1, 1);

        layoutWidget3 = new QWidget(Widget);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(230, 30, 171, 26));
        StatusArea = new QHBoxLayout(layoutWidget3);
        StatusArea->setObjectName(QString::fromUtf8("StatusArea"));
        StatusArea->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        StatusArea->addWidget(label_7);

        status = new QLineEdit(layoutWidget3);
        status->setObjectName(QString::fromUtf8("status"));
        status->setEnabled(false);

        StatusArea->addWidget(status);

        layoutWidget4 = new QWidget(Widget);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(230, 90, 215, 181));
        SendMsgArea = new QVBoxLayout(layoutWidget4);
        SendMsgArea->setObjectName(QString::fromUtf8("SendMsgArea"));
        SendMsgArea->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        sendto = new QLabel(layoutWidget4);
        sendto->setObjectName(QString::fromUtf8("sendto"));

        horizontalLayout_2->addWidget(sendto);

        sendMsg_recvID = new QLineEdit(layoutWidget4);
        sendMsg_recvID->setObjectName(QString::fromUtf8("sendMsg_recvID"));
        sendMsg_recvID->setEchoMode(QLineEdit::Normal);

        horizontalLayout_2->addWidget(sendMsg_recvID);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(layoutWidget4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);


        SendMsgArea->addLayout(horizontalLayout_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(layoutWidget4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        MsgContentplainTextEdit = new QPlainTextEdit(layoutWidget4);
        MsgContentplainTextEdit->setObjectName(QString::fromUtf8("MsgContentplainTextEdit"));

        verticalLayout->addWidget(MsgContentplainTextEdit);


        SendMsgArea->addLayout(verticalLayout);

        layoutWidget5 = new QWidget(Widget);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(460, 10, 331, 411));
        RecvMsgArea = new QVBoxLayout(layoutWidget5);
        RecvMsgArea->setObjectName(QString::fromUtf8("RecvMsgArea"));
        RecvMsgArea->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget5);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        RecvMsgArea->addWidget(label_8);

        recvMsgtextBrowser = new QTextBrowser(layoutWidget5);
        recvMsgtextBrowser->setObjectName(QString::fromUtf8("recvMsgtextBrowser"));

        RecvMsgArea->addWidget(recvMsgtextBrowser);

        layoutWidget6 = new QWidget(Widget);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(30, 440, 621, 41));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        AddFriendshipArea = new QHBoxLayout();
        AddFriendshipArea->setObjectName(QString::fromUtf8("AddFriendshipArea"));
        label = new QLabel(layoutWidget6);
        label->setObjectName(QString::fromUtf8("label"));

        AddFriendshipArea->addWidget(label);

        reg_friendId = new QLineEdit(layoutWidget6);
        reg_friendId->setObjectName(QString::fromUtf8("reg_friendId"));

        AddFriendshipArea->addWidget(reg_friendId);


        horizontalLayout_4->addLayout(AddFriendshipArea);

        pushButton_2 = new QPushButton(layoutWidget6);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_4->addWidget(pushButton_2);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_3 = new QPushButton(layoutWidget6);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        lineEdit = new QLineEdit(layoutWidget6);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(false);

        horizontalLayout->addWidget(lineEdit);


        horizontalLayout_5->addLayout(horizontalLayout);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        pushButton_4 = new QPushButton(layoutWidget6);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_5->addWidget(pushButton_4);

        layoutWidget7 = new QWidget(Widget);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(680, 440, 231, 121));
        verticalLayout_2 = new QVBoxLayout(layoutWidget7);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pushButton_5 = new QPushButton(layoutWidget7);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout_6->addWidget(pushButton_5);

        label_5 = new QLabel(layoutWidget7);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        lineEdit_2 = new QLineEdit(layoutWidget7);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_6->addWidget(lineEdit_2);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        pushButton_6 = new QPushButton(layoutWidget7);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout_7->addWidget(pushButton_6);

        label_6 = new QLabel(layoutWidget7);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_7->addWidget(label_6);

        lineEdit_3 = new QLineEdit(layoutWidget7);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_7->addWidget(lineEdit_3);


        verticalLayout_2->addLayout(horizontalLayout_7);

        layoutWidget8 = new QWidget(Widget);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(30, 490, 261, 30));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget8);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_8->addWidget(label_9);

        lineEdit_4 = new QLineEdit(layoutWidget8);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_8->addWidget(lineEdit_4);

        pushButton_7 = new QPushButton(layoutWidget8);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        horizontalLayout_8->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(Widget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(310, 490, 93, 28));
        label_12 = new QLabel(Widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(230, 70, 91, 16));
        label_13 = new QLabel(Widget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(230, 300, 60, 16));
        layoutWidget9 = new QWidget(Widget);
        layoutWidget9->setObjectName(QString::fromUtf8("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(230, 320, 211, 101));
        verticalLayout_3 = new QVBoxLayout(layoutWidget9);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_10 = new QLabel(layoutWidget9);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_9->addWidget(label_10);

        lineEdit_6 = new QLineEdit(layoutWidget9);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        horizontalLayout_9->addWidget(lineEdit_6);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_11 = new QLabel(layoutWidget9);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_10->addWidget(label_11);

        lineEdit_5 = new QLineEdit(layoutWidget9);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        horizontalLayout_10->addWidget(lineEdit_5);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        pushButton_10 = new QPushButton(layoutWidget9);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));

        horizontalLayout_11->addWidget(pushButton_10);

        pushButton_9 = new QPushButton(layoutWidget9);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        horizontalLayout_11->addWidget(pushButton_9);


        verticalLayout_3->addLayout(horizontalLayout_11);

        layoutWidget10 = new QWidget(Widget);
        layoutWidget10->setObjectName(QString::fromUtf8("layoutWidget10"));
        layoutWidget10->setGeometry(QRect(420, 499, 231, 31));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget10);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        lineEdit_7 = new QLineEdit(layoutWidget10);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        horizontalLayout_12->addWidget(lineEdit_7);

        pushButton_11 = new QPushButton(layoutWidget10);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));

        horizontalLayout_12->addWidget(pushButton_11);

        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 530, 261, 26));
        horizontalLayout_13 = new QHBoxLayout(widget);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(widget);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_13->addWidget(label_14);

        lineEdit_8 = new QLineEdit(widget);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        horizontalLayout_13->addWidget(lineEdit_8);

        pushButton_12 = new QPushButton(widget);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));

        horizontalLayout_13->addWidget(pushButton_12);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\345\256\242\346\210\267\347\253\257\346\216\247\345\210\266\345\231\250", nullptr));
        login_button->setText(QApplication::translate("Widget", "\347\231\273\345\275\225", nullptr));
        register_button->setText(QApplication::translate("Widget", "\346\263\250\345\206\214", nullptr));
        label_3->setText(QApplication::translate("Widget", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_4->setText(QApplication::translate("Widget", "\345\257\206\347\240\201", nullptr));
        RegTip->setText(QApplication::translate("Widget", "\346\232\202\344\270\215\350\200\203\350\231\221\351\207\215\345\244\215\345\257\206\347\240\201", nullptr));
        MyInfo->setText(QApplication::translate("Widget", "\346\210\221\347\232\204\344\277\241\346\201\257", nullptr));
        label_info_id->setText(QApplication::translate("Widget", "\350\264\246\345\217\267", nullptr));
        label_info_name->setText(QApplication::translate("Widget", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_info_pw->setText(QApplication::translate("Widget", "\345\257\206\347\240\201", nullptr));
        label_id->setText(QApplication::translate("Widget", "\350\264\246\345\217\267", nullptr));
        label_pw->setText(QApplication::translate("Widget", "\345\257\206\347\240\201", nullptr));
        label_7->setText(QApplication::translate("Widget", "\347\212\266\346\200\201:   ", nullptr));
        sendto->setText(QApplication::translate("Widget", "\345\217\221\351\200\201\347\273\231", nullptr));
        pushButton->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        label_2->setText(QApplication::translate("Widget", "\346\266\210\346\201\257\345\206\205\345\256\271", nullptr));
        label_8->setText(QApplication::translate("Widget", "\345\256\242\346\210\267\347\253\257\346\227\245\345\277\227", nullptr));
        label->setText(QApplication::translate("Widget", "Id", nullptr));
        pushButton_2->setText(QApplication::translate("Widget", "\345\217\221\351\200\201\345\245\275\345\217\213\350\257\267\346\261\202", nullptr));
        pushButton_3->setText(QApplication::translate("Widget", "\350\216\267\345\217\226\345\245\275\345\217\213\345\210\227\350\241\250", nullptr));
        pushButton_4->setText(QApplication::translate("Widget", "\344\270\213\347\272\277", nullptr));
        pushButton_5->setText(QApplication::translate("Widget", "\346\263\250\345\206\214\347\276\244\350\201\212", nullptr));
        label_5->setText(QApplication::translate("Widget", "\347\276\244\345\220\215", nullptr));
        pushButton_6->setText(QApplication::translate("Widget", "\346\267\273\345\212\240\347\276\244\350\201\212", nullptr));
        label_6->setText(QApplication::translate("Widget", "ID", nullptr));
        label_9->setText(QApplication::translate("Widget", "\346\226\260\347\224\250\346\210\267\345\220\215", nullptr));
        pushButton_7->setText(QApplication::translate("Widget", "\344\277\256\346\224\271", nullptr));
        pushButton_8->setText(QApplication::translate("Widget", "\350\216\267\345\217\226\347\276\244\350\201\212\345\210\227\350\241\250", nullptr));
        label_12->setText(QApplication::translate("Widget", "\345\217\221\351\200\201\346\226\207\345\255\227\346\266\210\346\201\257", nullptr));
        label_13->setText(QApplication::translate("Widget", "\345\217\221\351\200\201\346\226\207\344\273\266", nullptr));
        label_10->setText(QApplication::translate("Widget", "\346\216\245\346\224\266\350\200\205", nullptr));
        label_11->setText(QApplication::translate("Widget", "\350\267\257\345\276\204", nullptr));
        pushButton_10->setText(QApplication::translate("Widget", "\346\265\213\350\257\225\345\217\221\351\200\201\346\226\207\344\273\266", nullptr));
        pushButton_9->setText(QApplication::translate("Widget", "\346\265\213\350\257\225\345\217\221\351\200\201\345\233\276\347\211\207", nullptr));
        pushButton_11->setText(QApplication::translate("Widget", "\345\217\221\351\200\201", nullptr));
        label_14->setText(QApplication::translate("Widget", "\346\216\245\346\224\266\350\200\205", nullptr));
        pushButton_12->setText(QApplication::translate("Widget", "\346\210\252\345\261\217\345\271\266\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
