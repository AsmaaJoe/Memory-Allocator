/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_3;
    QLabel *label_1;
    QLabel *label_2;
    QPushButton *uiTakePNum;
    QPushButton *uiTakeHole;
    QLabel *label_4;
    QPushButton *uiTakeProcess;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QTableView *tableView_1;
    QTableView *tableView_2;
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QLabel *label;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLabel *label_5;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(678, 585);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(410, 20, 101, 17));
        label_1 = new QLabel(centralWidget);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(50, 50, 54, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 20, 101, 17));
        uiTakePNum = new QPushButton(centralWidget);
        uiTakePNum->setObjectName(QStringLiteral("uiTakePNum"));
        uiTakePNum->setGeometry(QRect(530, 60, 71, 27));
        uiTakePNum->setFocusPolicy(Qt::StrongFocus);
        uiTakePNum->setAutoFillBackground(false);
        uiTakePNum->setCheckable(true);
        uiTakePNum->setChecked(false);
        uiTakePNum->setAutoDefault(true);
        uiTakeHole = new QPushButton(centralWidget);
        uiTakeHole->setObjectName(QStringLiteral("uiTakeHole"));
        uiTakeHole->setGeometry(QRect(280, 50, 85, 27));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 130, 91, 17));
        uiTakeProcess = new QPushButton(centralWidget);
        uiTakeProcess->setObjectName(QStringLiteral("uiTakeProcess"));
        uiTakeProcess->setGeometry(QRect(280, 130, 101, 27));
        lineEdit_1 = new QLineEdit(centralWidget);
        lineEdit_1->setObjectName(QStringLiteral("lineEdit_1"));
        lineEdit_1->setGeometry(QRect(150, 50, 113, 27));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 20, 113, 27));
        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(520, 20, 91, 27));
        lineEdit_4 = new QLineEdit(centralWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(150, 130, 113, 27));
        tableView_1 = new QTableView(centralWidget);
        tableView_1->setObjectName(QStringLiteral("tableView_1"));
        tableView_1->setGeometry(QRect(50, 170, 191, 291));
        tableView_1->setFocusPolicy(Qt::NoFocus);
        tableView_2 = new QTableView(centralWidget);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(390, 170, 241, 291));
        tableView_2->setFocusPolicy(Qt::NoFocus);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(280, 180, 81, 141));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 20, 71, 27));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 60, 71, 27));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 100, 71, 27));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 90, 361, 16));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label->setFont(font);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(580, 500, 85, 27));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(210, 500, 91, 27));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(390, 480, 85, 27));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(390, 130, 141, 27));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(260, 320, 121, 17));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_5->setFont(font1);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 678, 27));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(lineEdit_3, uiTakePNum);
        QWidget::setTabOrder(uiTakePNum, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, lineEdit_1);
        QWidget::setTabOrder(lineEdit_1, uiTakeHole);
        QWidget::setTabOrder(uiTakeHole, lineEdit_4);
        QWidget::setTabOrder(lineEdit_4, uiTakeProcess);
        QWidget::setTabOrder(uiTakeProcess, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(MainWindow);
        QObject::connect(uiTakePNum, SIGNAL(released()), MainWindow, SLOT(enterNum()));
        QObject::connect(uiTakeHole, SIGNAL(released()), MainWindow, SLOT(enterHole()));
        QObject::connect(uiTakeProcess, SIGNAL(released()), MainWindow, SLOT(enterProcess()));
        QObject::connect(lineEdit_3, SIGNAL(returnPressed()), uiTakePNum, SLOT(click()));
        QObject::connect(lineEdit_4, SIGNAL(returnPressed()), uiTakeProcess, SLOT(click()));
        QObject::connect(pushButton, SIGNAL(released()), MainWindow, SLOT(firstFit()));
        QObject::connect(pushButton_2, SIGNAL(released()), MainWindow, SLOT(bestFit()));
        QObject::connect(lineEdit_4, SIGNAL(returnPressed()), lineEdit_4, SLOT(clear()));
        QObject::connect(uiTakeProcess, SIGNAL(released()), lineEdit_4, SLOT(clear()));
        QObject::connect(uiTakeHole, SIGNAL(released()), lineEdit_1, SLOT(clear()));
        QObject::connect(uiTakeHole, SIGNAL(released()), lineEdit_2, SLOT(clear()));
        QObject::connect(lineEdit_2, SIGNAL(returnPressed()), uiTakeHole, SLOT(click()));
        QObject::connect(lineEdit_1, SIGNAL(returnPressed()), uiTakeHole, SLOT(click()));
        QObject::connect(pushButton_3, SIGNAL(released()), MainWindow, SLOT(reset()));
        QObject::connect(pushButton_6, SIGNAL(released()), MainWindow, SLOT(merge()));
        QObject::connect(pushButton_7, SIGNAL(released()), MainWindow, SLOT(deAllocate()));

        uiTakePNum->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_3->setText(QApplication::translate("MainWindow", "process Number", 0));
        label_1->setText(QApplication::translate("MainWindow", "Hole Size", 0));
        label_2->setText(QApplication::translate("MainWindow", "Starting Address", 0));
        uiTakePNum->setText(QApplication::translate("MainWindow", "Enter Num", 0));
        uiTakeHole->setText(QApplication::translate("MainWindow", "Enter Hole", 0));
        label_4->setText(QApplication::translate("MainWindow", "process Size", 0));
        uiTakeProcess->setText(QApplication::translate("MainWindow", "Enter Process", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Methodology", 0));
        pushButton->setText(QApplication::translate("MainWindow", "First Fit", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Best Fit", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "Worst Fit", 0));
        label->setText(QApplication::translate("MainWindow", "NOTE press \"EnterKey\" only when you write BOTH variables", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Reset All", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "Compaction", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "Merge", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "De-Allocate Process", 0));
        label_5->setText(QApplication::translate("MainWindow", "Choose ONE ONLY ", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
