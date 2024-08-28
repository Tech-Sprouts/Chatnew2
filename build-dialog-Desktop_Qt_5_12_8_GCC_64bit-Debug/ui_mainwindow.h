/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *widget;
    QFrame *dialog;
    QToolButton *closeButton2;
    QLabel *label_2;
    QFrame *list;
    QFrame *frame1;
    QFrame *frame2;
    QFrame *frame3;
    QFrame *frame;
    QToolButton *friendlist;
    QToolButton *chatlist;
    QToolButton *friendrequest;
    QToolButton *friendadding;
    QToolButton *imgbtn;
    QLabel *username;
    QLabel *userid;
    QToolButton *closeButton;
    QToolButton *minimizeButton;
    QToolButton *settingButton;
    QLabel *label;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(840, 640);
        MainWindow->setMinimumSize(QSize(840, 640));
        MainWindow->setMaximumSize(QSize(840, 640));
        MainWindow->setStyleSheet(QString::fromUtf8("/* \344\270\273\347\252\227\345\217\243\346\240\267\345\274\217 */\n"
"QWidget#widget {\n"
"  background-color: rgba(255, 255, 255, 0.2); /* \347\231\275\350\211\262\350\203\214\346\231\257 */\n"
"  border-radius: 15px; /* \345\234\206\350\247\222 */\n"
"  background-image: url(:/img/bg__2.jpg); /* \350\203\214\346\231\257\345\233\276\347\211\207 */\n"
"}\n"
"\n"
"/* \351\200\232\347\224\250\346\214\211\351\222\256\346\240\267\345\274\217 */\n"
"QToolButton {\n"
"  border-style: none; /* \346\227\240\350\276\271\346\241\206 */\n"
"  color: rgb(0, 0, 0); /* \351\273\221\350\211\262\345\255\227\344\275\223 */\n"
"}\n"
"\n"
"/* \345\205\263\351\227\255\346\214\211\351\222\256\346\240\267\345\274\217 */\n"
"QToolButton#closeButton,\n"
"QToolButton#closeButton2 {\n"
"  color: rgb(0, 0, 0); /* \351\273\221\350\211\262\345\255\227\344\275\223 */\n"
"}\n"
"\n"
"QToolButton#closeButton::hover,\n"
"QToolButton#closeButton2::hover {\n"
"  color: rgba(255, 255, 255, 0.2); /* \347\231\275\350\211\262\345\255\227\344\275\223"
                        " */\n"
"  background-color: rgba(255, 56, 56, 150); /* \347\272\242\350\211\262\350\203\214\346\231\257\357\274\214\345\215\212\351\200\217\346\230\216 */\n"
"}\n"
"\n"
"QToolButton#closeButton::hover {\n"
"  border-top-right-radius: 15px; /* \345\234\206\350\247\222 */\n"
"}\n"
"\n"
"/* \346\234\200\345\260\217\345\214\226\346\214\211\351\222\256\346\240\267\345\274\217 */\n"
"QToolButton#minimizeButton {\n"
"  color: rgb(0, 0, 0); /* \351\273\221\350\211\262\345\255\227\344\275\223 */\n"
"}\n"
"\n"
"QToolButton#minimizeButton::hover {\n"
"  background-color: rgba(203, 203, 203, 150); /* \347\201\260\350\211\262\350\203\214\346\231\257\357\274\214\345\215\212\351\200\217\346\230\216 */\n"
"}\n"
"\n"
"/* \350\256\276\347\275\256\346\214\211\351\222\256\346\240\267\345\274\217 */\n"
"QToolButton#settingButton::hover {\n"
"  background-color: rgba(203, 203, 203, 150); /* \347\201\260\350\211\262\350\203\214\346\231\257\357\274\214\345\215\212\351\200\217\346\230\216 */\n"
"}\n"
"\n"
"/* \345\233\276\347\211\207\346"
                        "\214\211\351\222\256\346\240\267\345\274\217 */\n"
"QToolButton#imgbtn {\n"
"  border: 2px groove white; /* \345\207\271\346\247\275\350\276\271\346\241\206 */\n"
"  border-radius: 10px; /* \345\234\206\350\247\222 */\n"
"  padding: 2px 4px; /* \345\206\205\350\276\271\350\267\235 */\n"
"}\n"
"\n"
"/* \346\214\211\351\222\256\346\240\267\345\274\217 */\n"
"QToolButton#friendadding::hover {\n"
"  border: 1px solid rgba(76, 108, 179, 0.7); /* \350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"  border-radius: 10px; /* \345\234\206\350\247\222 */\n"
"  background-color: rgba(176, 196, 222, 0.5); /* \346\265\205\350\223\235\350\211\262\350\203\214\346\231\257 */\n"
"}\n"
"\n"
"/* \346\214\211\351\222\256\346\240\267\345\274\217 */\n"
"QToolButton#chatlist::hover {\n"
"  border: 1px solid rgba(76, 108, 179, 0.7); /* \350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"  border-radius: 10px; /* \345\234\206\350\247\222 */\n"
"  background-color: rgba(176, 196, 222, 0.5); /* \346\265\205\350\223\235\350\211\262"
                        "\350\203\214\346\231\257 */\n"
"}\n"
"\n"
"/* \346\214\211\351\222\256\346\240\267\345\274\217 */\n"
"QToolButton#friendlist::hover {\n"
"  border: 1px solid rgba(76, 108, 179, 0.7); /* \350\223\235\350\211\262\350\276\271\346\241\206 */\n"
"  border-radius: 10px; /* \345\234\206\350\247\222 */\n"
"  background-color: rgba(176, 196, 222, 0.5); /* \346\265\205\350\223\235\350\211\262\350\203\214\346\231\257 */\n"
"}\n"
"\n"
"/* \345\210\227\350\241\250\346\240\267\345\274\217 */\n"
"QFrame#friendrequest {\n"
"  background-color: rgba(173, 216, 230, 0.5); /* \346\265\205\350\223\235\350\211\262\350\203\214\346\231\257 */\n"
"  border: none; /* \346\227\240\350\276\271\346\241\206 */\n"
"  border-top: 1px solid rgba(76, 108, 179, 0.7); /* \351\241\266\351\203\250\350\276\271\346\241\206 */\n"
"  border-bottom-right-radius: 15px; /* \345\234\206\350\247\222 */\n"
"  border-bottom-left-radius: 15px; /* \345\234\206\350\247\222 */\n"
"}\n"
"\n"
"/* \345\257\271\350\257\235\346\241\206\345\222\214\345\220\204\344\270"
                        "\252\346\241\206\346\236\266\347\232\204\346\240\267\345\274\217 */\n"
"QFrame#dialog {\n"
"  border: none; /* \346\227\240\350\276\271\346\241\206 */\n"
"  border-top: 1px solid rgba(76, 108, 179, 0.7); /* \351\241\266\351\203\250\350\276\271\346\241\206 */\n"
"  border-left: 1px solid rgba(76, 108, 179, 0.7); /* \345\267\246\350\276\271\346\241\206 */\n"
"  border-bottom-right-radius: 15px; /* \345\234\206\350\247\222 */\n"
"}\n"
"\n"
"QFrame#frame,\n"
"QFrame#frame1,\n"
"QFrame#frame2,\n"
"QFrame#frame3 {\n"
"  background-color: rgba(76, 108, 169, 0.1); /* \346\265\205\350\223\235\350\211\262\350\203\214\346\231\257 */\n"
"  border: none; /* \346\227\240\350\276\271\346\241\206 */\n"
"  border-top: 1px solid rgba(76, 108, 179, 0.7); /* \351\241\266\351\203\250\350\276\271\346\241\206 */\n"
"  border-bottom: 1px solid rgba(76, 108, 179, 0.7); /* \345\272\225\351\203\250\350\276\271\346\241\206 */\n"
"  border-bottom-left-radius: 15px; /* \345\234\206\350\247\222 */\n"
"}\n"
"\n"
"QFrame#frame {\n"
"  backgro"
                        "und-color: rgba(76, 108, 169, 0.1); /* \346\233\264\346\265\205\347\232\204\350\203\214\346\231\257\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"QLabel#username{\n"
"    font-size:24px;\n"
"}\n"
"\n"
"QLabel#userid{\n"
"    font-size:20px;\n"
"}\n"
"\n"
""));
        widget = new QWidget(MainWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 800, 600));
        dialog = new QFrame(widget);
        dialog->setObjectName(QString::fromUtf8("dialog"));
        dialog->setGeometry(QRect(250, 40, 550, 560));
        dialog->setContextMenuPolicy(Qt::NoContextMenu);
        dialog->setStyleSheet(QString::fromUtf8(""));
        dialog->setFrameShape(QFrame::StyledPanel);
        dialog->setFrameShadow(QFrame::Raised);
        closeButton2 = new QToolButton(dialog);
        closeButton2->setObjectName(QString::fromUtf8("closeButton2"));
        closeButton2->setGeometry(QRect(510, 0, 40, 40));
        closeButton2->setIconSize(QSize(50, 50));
        label_2 = new QLabel(dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-254, -44, 821, 611));
        label_2->setStyleSheet(QString::fromUtf8("background:rgba(255,255,255,0.3)"));
        list = new QFrame(widget);
        list->setObjectName(QString::fromUtf8("list"));
        list->setGeometry(QRect(0, 40, 250, 560));
        list->setStyleSheet(QString::fromUtf8(""));
        list->setFrameShape(QFrame::StyledPanel);
        list->setFrameShadow(QFrame::Raised);
        frame1 = new QFrame(list);
        frame1->setObjectName(QString::fromUtf8("frame1"));
        frame1->setGeometry(QRect(0, 170, 250, 390));
        frame1->setFrameShape(QFrame::StyledPanel);
        frame1->setFrameShadow(QFrame::Raised);
        frame2 = new QFrame(list);
        frame2->setObjectName(QString::fromUtf8("frame2"));
        frame2->setGeometry(QRect(0, 170, 250, 390));
        frame2->setFrameShape(QFrame::StyledPanel);
        frame2->setFrameShadow(QFrame::Raised);
        frame3 = new QFrame(list);
        frame3->setObjectName(QString::fromUtf8("frame3"));
        frame3->setGeometry(QRect(0, 170, 250, 390));
        frame3->setFrameShape(QFrame::StyledPanel);
        frame3->setFrameShadow(QFrame::Raised);
        frame = new QFrame(frame3);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 340, 251, 50));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        friendlist = new QToolButton(frame);
        friendlist->setObjectName(QString::fromUtf8("friendlist"));
        friendlist->setGeometry(QRect(0, 1, 50, 50));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/HaoYou.png"), QSize(), QIcon::Normal, QIcon::Off);
        friendlist->setIcon(icon);
        friendlist->setIconSize(QSize(38, 38));
        chatlist = new QToolButton(frame);
        chatlist->setObjectName(QString::fromUtf8("chatlist"));
        chatlist->setGeometry(QRect(60, 1, 50, 50));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/XiaoXi.png"), QSize(), QIcon::Normal, QIcon::Off);
        chatlist->setIcon(icon1);
        chatlist->setIconSize(QSize(40, 40));
        friendrequest = new QToolButton(frame);
        friendrequest->setObjectName(QString::fromUtf8("friendrequest"));
        friendrequest->setGeometry(QRect(130, 1, 50, 50));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/QunLiao.png"), QSize(), QIcon::Normal, QIcon::Off);
        friendrequest->setIcon(icon2);
        friendrequest->setIconSize(QSize(50, 50));
        friendadding = new QToolButton(frame);
        friendadding->setObjectName(QString::fromUtf8("friendadding"));
        friendadding->setGeometry(QRect(201, 1, 49, 49));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/JiaHaoYou.png"), QSize(), QIcon::Normal, QIcon::Off);
        friendadding->setIcon(icon3);
        friendadding->setIconSize(QSize(35, 35));
        imgbtn = new QToolButton(list);
        imgbtn->setObjectName(QString::fromUtf8("imgbtn"));
        imgbtn->setGeometry(QRect(20, 20, 80, 80));
        imgbtn->setIconSize(QSize(80, 80));
        username = new QLabel(list);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(120, 30, 121, 30));
        QFont font;
        username->setFont(font);
        userid = new QLabel(list);
        userid->setObjectName(QString::fromUtf8("userid"));
        userid->setGeometry(QRect(170, 70, 121, 30));
        userid->setFont(font);
        closeButton = new QToolButton(widget);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));
        closeButton->setGeometry(QRect(760, 0, 40, 40));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/Close.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon4);
        closeButton->setIconSize(QSize(25, 25));
        minimizeButton = new QToolButton(widget);
        minimizeButton->setObjectName(QString::fromUtf8("minimizeButton"));
        minimizeButton->setGeometry(QRect(720, 0, 40, 40));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/Minimize.png"), QSize(), QIcon::Normal, QIcon::Off);
        minimizeButton->setIcon(icon5);
        minimizeButton->setIconSize(QSize(30, 30));
        settingButton = new QToolButton(widget);
        settingButton->setObjectName(QString::fromUtf8("settingButton"));
        settingButton->setGeometry(QRect(680, 0, 40, 40));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/Setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        settingButton->setIcon(icon6);
        settingButton->setIconSize(QSize(30, 30));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(5, 0, 40, 40));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/logoRabit.png")));
        label->setScaledContents(true);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Form", nullptr));
        closeButton2->setText(QApplication::translate("MainWindow", "\303\227", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        friendlist->setText(QApplication::translate("MainWindow", "...", nullptr));
        chatlist->setText(QApplication::translate("MainWindow", "...", nullptr));
        friendrequest->setText(QApplication::translate("MainWindow", "...", nullptr));
        friendadding->setText(QApplication::translate("MainWindow", "...", nullptr));
        imgbtn->setText(QApplication::translate("MainWindow", "img", nullptr));
        username->setText(QApplication::translate("MainWindow", "UserName", nullptr));
        userid->setText(QApplication::translate("MainWindow", "id", nullptr));
        closeButton->setText(QApplication::translate("MainWindow", "\303\227", nullptr));
        minimizeButton->setText(QApplication::translate("MainWindow", "-", nullptr));
        settingButton->setText(QApplication::translate("MainWindow", "*", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
