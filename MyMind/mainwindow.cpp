#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMenu>
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    codec=QTextCodec::codecForName("GBK");
    setWindowTitle(codec->toUnicode("我的思维导图"));
    setWindowIcon(QIcon(":/res/app.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
//    delete menu;
}

void MainWindow::addMenuItem()
{
//    QMenu *menu=new QMenu("1",this);
//    QAction act("2",this);
    QMenu *menu=new QMenu;
    ui->btnMenu->setPopupMode(QToolButton::InstantPopup);

    QAction *act=new QAction;
    act->setText(codec->toUnicode("新建导图"));
    menu->addAction(act);
    act->setText(codec->toUnicode("打开导图"));
    menu->addAction(act);
//    menu->addAction(codec->toUnicode("最近导图"));
//    menu->addAction(codec->toUnicode("打开导图大纲"));
//    menu->addAction(codec->toUnicode("删除导图"));
//    menu->addAction(codec->toUnicode("设置导图背景"));
//    menu->addAction(codec->toUnicode("导出导图为图片"));
//    menu->addAction(codec->toUnicode("关于导图"));

    connect(act,&QAction::trigger,this,[=](){
         QAction *a=(QAction *)sender();
          qDebug()<<"text:"<<a->text();
    });
//    connect(menu.ac)
//    connect(act,&QAction::triggered,this,[=](){

//    });
//    connect(ui->btnMenu,&QToolButton::triggered,this,[=](){

//    });

//    menu->addAction(&act);

    ui->btnMenu->setMenu(menu);
}

void MainWindow::on_btnMenu_clicked()
{
    addMenuItem();

}
