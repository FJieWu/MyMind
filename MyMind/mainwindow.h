#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#pragma execution_character_set("utf-8")

#include <qtextcodec.h>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    //Ìí¼Ó²Ëµ¥Ïî
    void addMenuItem();

private slots:
    void on_btnMenu_clicked();

private:
    Ui::MainWindow *ui;
    QTextCodec *codec;
};
#endif // MAINWINDOW_H
