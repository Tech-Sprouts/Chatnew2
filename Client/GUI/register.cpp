#include "register.h"
#include "ui_register.h"
#include "login.h"
#include "alarmwidget.h"
#include <QGraphicsDropShadowEffect>

#include "DataModel/datamodel.h"
#include "Controller/clientcontroller.h"

#include "Utilities/log.h"
#include "Network/handlerreg.h"

#include "new_reg.h"
Register::Register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint | Qt::WindowMinimizeButtonHint|this->windowFlags());

    QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect(this);
    shadow->setOffset(0, 0);//设置向哪个方向产生阴影效果，（0,0）表示向四周发散
    shadow->setColor(QColor(38, 78, 119,255));//阴影颜色
    shadow->setBlurRadius(25); //模糊度
    this->setGraphicsEffect(shadow);

    connect( (RegisterHandler *) HandlerReg::GetRegObj()->getHandler(MsgType::REGISTER_SUCCESS),
                &RegisterHandler::sigRegSuccessful,
                this,
                &Register::showRegisterSuccessful
            );

    connect( (RegisterHandler *) HandlerReg::GetRegObj()->getHandler(MsgType::REGISTER_ERROR),
                &RegisterHandler::sigRegFailed,
                this,
                &Register::showRegisterFailed
            );

    PasswordVisibility(ui->pwd);
    PasswordVisibility(ui->pwd2);
}

Register::~Register()
{
    delete ui;
}


void Register::showRegisterSuccessful(UserInfo info){
    new_reg*newreg=new new_reg;
    newreg->Setid(QString::number(info.getID()));
    newreg->showid();
    newreg->show();
    this->close();
}

void Register::showRegisterFailed(){
    alarmWidget*w=new alarmWidget;
    w->setLabel("注册失败！");
    w->show();
}


void Register::on_loginButton_clicked()
{
    login *w = new login;
    w->show();
    this->close();
}

void Register::PasswordVisibility(QLineEdit *passwordLineEdit)
{
    passwordLineEdit->setEchoMode(QLineEdit::Password);

   // 添加QAction
   QAction *toggleVisibilityAction = passwordLineEdit->addAction(QIcon(":/img/pwd_hide.png"), QLineEdit::TrailingPosition);

   // 使用样式表来设置图标大小
   passwordLineEdit->setStyleSheet(
       "QLineEdit::add-action {"
       "   height: 40px;"      // 设置图标高度
       "   width: 40px;"       // 设置图标宽度
       "}"
   );

   connect(toggleVisibilityAction, &QAction::triggered, this, [passwordLineEdit, toggleVisibilityAction]() {
       if (passwordLineEdit->echoMode() == QLineEdit::Password) {
           passwordLineEdit->setEchoMode(QLineEdit::Normal);
           toggleVisibilityAction->setIcon(QIcon(":/img/pwd_seen.png"));
       } else {
           passwordLineEdit->setEchoMode(QLineEdit::Password);
           toggleVisibilityAction->setIcon(QIcon(":/img/pwd_hide.png"));
       }
   });
}

void Register::on_closeButton_clicked()
{
    this->close();
}

void Register::on_minimizeButton_clicked()
{
    this->showMinimized();
}

void Register::on_btn_register_clicked()
{
    alarmWidget* w = new alarmWidget;

        // 获取用户名、密码、确认密码
        QString username = ui->account->text();
        QString password = ui->pwd->text();
        QString confirmPassword = ui->pwd2->text();

        // 检查用户名是否为空
        if (username.isEmpty()) {
            QString str1 = "注册失败";
            QString str2 = "用户名不能为空";
            w->setLabel(str1 + "\n" + str2);
            w->show();
            return;
        }

        // 检查密码是否为空
        if (password.isEmpty()) {
            QString str1 = "注册失败";
            QString str2 = "密码不能为空";
            w->setLabel(str1 + "\n" + str2);
            w->show();
            return;
        }

        // 检查密码长度是否至少为8位
        if (password.length() < 8) {
            QString str1 = "注册失败";
            QString str2 = "密码长度至少为8位";
            w->setLabel(str1 + "\n" + str2);
            w->show();
            return;
        }

        // 检查密码是否包含至少一个字母和一个数字
        bool hasLetter = false;
        bool hasDigit = false;
        for (const QChar& ch : password) {
            if (ch.isLetter()) {
                hasLetter = true;
            } else if (ch.isDigit()) {
                hasDigit = true;
            }
        }

        if (!hasLetter || !hasDigit) {
            QString str1 = "注册失败";
            QString str2 = "密码至少包含一个字母和一个数字";
            w->setLabel(str1 + "\n" + str2);
            w->show();
            return;
        }

        // 检查密码是否包含非法字符
        for (const QChar& ch : password) {
            if (!ch.isLetterOrNumber()) {
                QString str1 = "注册失败";
                QString str2 = "密码不能包含非法字符";
                w->setLabel(str1 + "\n" + str2);
                w->show();
                return;
            }
        }

        // 检查确认密码是否为空
        if (confirmPassword.isEmpty()) {
            QString str1 = "注册失败";
            QString str2 = "确认密码不能为空";
            w->setLabel(str1 + "\n" + str2);
            w->show();
            return;
        }

        // 检查两次输入的密码是否相同
        if (password != confirmPassword) {
            QString str1 = "注册失败";
            QString str2 = "两次输入的密码不同";
            w->setLabel(str1 + "\n" + str2);
            w->show();
            return;
        }

        // 如果所有检查都通过，发送注册请求
        ClientController::GetClientInstance()->requestRegister(username, password);
}
