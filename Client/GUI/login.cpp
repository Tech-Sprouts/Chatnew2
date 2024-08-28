#include "login.h"
#include "ui_login.h"
#include <QMouseEvent>
#include "register.h"
#include "mainwindow.h"
#include "alarmwidget.h"
#include <QGraphicsDropShadowEffect>

#include "DataModel/datamodel.h"
#include "Controller/clientcontroller.h"

#include "Utilities/log.h"
#include "Network/handlerreg.h"

MainWindow * login:: mw = NULL;
login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    this->setAttribute(Qt::WA_TranslucentBackground);
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint | Qt::WindowMinimizeButtonHint|this->windowFlags());

    QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect(this);
    shadow->setOffset(0, 0);//设置向哪个方向产生阴影效果，（0,0）表示向四周发散
    shadow->setColor(QColor(38, 78, 119,255));//阴影颜色
    shadow->setBlurRadius(25); //模糊度
    this->setGraphicsEffect(shadow);
    connect( (GroupListHandler *) HandlerReg::GetRegObj()->getHandler(MsgType::ALL_GROUP_LIST),
                    &GroupListHandler::sigGroupListGotcha,
                    this,
                    &login::showLoginSuccessful
                );
    connect( (LoginHandler *) HandlerReg::GetRegObj()->getHandler(MsgType::LOGIN_ERROR),
                &LoginHandler::sigLoginFailed,
                this,
                &login::showLoginFailed
            );

    PasswordVisibility(ui->password);
}

login::~login()
{
    delete ui;
    delete  mw;
}

void login::showLoginSuccessful(UserInfo info){

    MainWindow *mainw = GetMainWindowInstance();
    mainw->initUserInfo(info);
    mainw->setUserInfo();
    mainw->show();
    this->close();
}

void login::showLoginFailed(){
    alarmWidget* w =new alarmWidget;
    QString str1 = "登录失败";
    QString str2 = "账号或密码不正确";
    w->setLabel(str1+"\n"+str2);
    w->show();
}
//鼠标按下
void login::mousePressEvent(QMouseEvent *event)
{
   if(event->button() == Qt::LeftButton)
   {
       m_point = event->globalPos() - pos(); //计算移动量
       event->accept();
   }
}

//鼠标移动
void login::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons() & Qt::LeftButton)
    {
        move(event->globalPos() - m_point);
        event->accept();
    }
}


MainWindow * login::GetMainWindowInstance(){
    if(mw == nullptr){
        mw = new MainWindow;
    }
    return mw;
}

//注册
void login::on_registerButton_clicked()
{
    Register *w = new Register;
    w->show();
    this->close();
}

//登录
/*void login::on_loginButton_clicked()
{
    //通信函数
        quint32 id = ui->account->text().toUInt();
        QString pw = ui->password->text();
        ClientController::GetClientInstance()
                ->requestLogin(id, pw);
}*/

//关闭
void login::on_btn_quit_clicked()
{
    this->close();
}

//最小化
void login::on_btn_minimize_clicked()
{
    this->showMinimized();
}

void login::on_btn_login_clicked()
{
    //通信函数
        quint32 id = ui->account->text().toUInt();
        QString pw = ui->password->text();
        ClientController::GetClientInstance()
                ->requestLogin(id, pw);
}

void login::PasswordVisibility(QLineEdit *passwordLineEdit)
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
