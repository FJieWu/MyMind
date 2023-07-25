/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QToolButton *btnMenu;
    QToolButton *toolButton_9;
    QToolButton *toolButton_10;
    QToolButton *toolButton_7;
    QToolButton *toolButton_6;
    QListWidget *listWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnMenu = new QToolButton(widget_2);
        btnMenu->setObjectName(QString::fromUtf8("btnMenu"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/res/menu.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnMenu->setIcon(icon);

        horizontalLayout->addWidget(btnMenu);

        toolButton_9 = new QToolButton(widget_2);
        toolButton_9->setObjectName(QString::fromUtf8("toolButton_9"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/res/name.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_9->setIcon(icon1);

        horizontalLayout->addWidget(toolButton_9);

        toolButton_10 = new QToolButton(widget_2);
        toolButton_10->setObjectName(QString::fromUtf8("toolButton_10"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/res/flag.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_10->setIcon(icon2);

        horizontalLayout->addWidget(toolButton_10);

        toolButton_7 = new QToolButton(widget_2);
        toolButton_7->setObjectName(QString::fromUtf8("toolButton_7"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/res/link.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_7->setIcon(icon3);

        horizontalLayout->addWidget(toolButton_7);

        toolButton_6 = new QToolButton(widget_2);
        toolButton_6->setObjectName(QString::fromUtf8("toolButton_6"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/res/remark.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_6->setIcon(icon4);

        horizontalLayout->addWidget(toolButton_6);


        horizontalLayout_2->addWidget(widget_2);


        verticalLayout->addWidget(widget);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnMenu->setText(QString());
        toolButton_9->setText(QString());
        toolButton_10->setText(QString());
        toolButton_7->setText(QString());
        toolButton_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
