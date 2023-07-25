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
    setWindowTitle(codec->toUnicode("�ҵ�˼ά��ͼ"));
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
    act->setText(codec->toUnicode("�½���ͼ"));
    menu->addAction(act);
    act->setText(codec->toUnicode("�򿪵�ͼ"));
    menu->addAction(act);
//    menu->addAction(codec->toUnicode("�����ͼ"));
//    menu->addAction(codec->toUnicode("�򿪵�ͼ���"));
//    menu->addAction(codec->toUnicode("ɾ����ͼ"));
//    menu->addAction(codec->toUnicode("���õ�ͼ����"));
//    menu->addAction(codec->toUnicode("������ͼΪͼƬ"));
//    menu->addAction(codec->toUnicode("���ڵ�ͼ"));

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
