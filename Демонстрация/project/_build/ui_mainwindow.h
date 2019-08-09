/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *saveButton;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox;
    QLineEdit *lineEdit_1;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *label_5;
    QLineEdit *lineEdit_6;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(340, 506);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(340, 506));
        MainWindow->setMaximumSize(QSize(340, 506));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        saveButton = new QPushButton(centralWidget);
        saveButton->setObjectName(QStringLiteral("saveButton"));
        saveButton->setGeometry(QRect(30, 420, 131, 22));
        saveButton->setFocusPolicy(Qt::NoFocus);
        saveButton->setContextMenuPolicy(Qt::NoContextMenu);
        checkBox_2 = new QCheckBox(centralWidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(30, 85, 291, 20));
        checkBox_2->setMouseTracking(true);
        checkBox_2->setFocusPolicy(Qt::NoFocus);
        checkBox_2->setContextMenuPolicy(Qt::NoContextMenu);
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(30, 65, 291, 20));
        checkBox->setFocusPolicy(Qt::NoFocus);
        checkBox->setContextMenuPolicy(Qt::NoContextMenu);
        lineEdit_1 = new QLineEdit(centralWidget);
        lineEdit_1->setObjectName(QStringLiteral("lineEdit_1"));
        lineEdit_1->setGeometry(QRect(30, 35, 113, 22));
        lineEdit_1->setInputMethodHints(Qt::ImhNone);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 15, 251, 16));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(30, 130, 113, 22));
        lineEdit_2->setInputMethodHints(Qt::ImhNone);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 110, 251, 16));
        checkBox_3 = new QCheckBox(centralWidget);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(30, 160, 291, 31));
        checkBox_3->setMouseTracking(true);
        checkBox_3->setFocusPolicy(Qt::NoFocus);
        checkBox_3->setContextMenuPolicy(Qt::NoContextMenu);
        checkBox_4 = new QCheckBox(centralWidget);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setGeometry(QRect(30, 195, 291, 31));
        checkBox_4->setMouseTracking(true);
        checkBox_4->setFocusPolicy(Qt::NoFocus);
        checkBox_4->setContextMenuPolicy(Qt::NoContextMenu);
        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(30, 267, 113, 22));
        lineEdit_3->setInputMethodHints(Qt::ImhNone);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 230, 311, 31));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 293, 311, 31));
        lineEdit_4 = new QLineEdit(centralWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(30, 330, 113, 22));
        lineEdit_4->setInputMethodHints(Qt::ImhNone);
        lineEdit_5 = new QLineEdit(centralWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(30, 380, 113, 22));
        lineEdit_5->setInputMethodHints(Qt::ImhNone);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 360, 251, 16));
        lineEdit_6 = new QLineEdit(centralWidget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(160, 380, 113, 22));
        lineEdit_6->setInputMethodHints(Qt::ImhNone);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 340, 19));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        saveButton->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 / \320\276\320\261\320\275\320\276\320\262\320\270\321\202\321\214", 0));
        checkBox_2->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\277\320\276\320\273\320\275\321\217\321\202\321\214 \320\274\320\260\321\201\321\201\320\270\320\262 \320\270\321\201\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\271 \320\262\321\200\321\203\321\207\320\275\321\203\321\216?", 0));
        checkBox->setText(QApplication::translate("MainWindow", "\320\230\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\321\214 \320\274\320\260\321\201\321\201\320\270\320\262 \320\270\321\201\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\271?", 0));
        label->setText(QApplication::translate("MainWindow", "\320\240\320\260\320\267\320\274\320\265\321\200 \320\262\321\213\320\261\320\276\321\200\320\272\320\270", 0));
        label_2->setText(QApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276 \320\270\321\201\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\271", 0));
        checkBox_3->setText(QApplication::translate("MainWindow", "\320\230\321\201\320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\321\214 \320\277\320\276\320\273\320\275\321\213\320\271 \320\264\320\270\320\260\320\277\320\260\320\267\320\276\320\275 \321\207\320\260\321\201\321\202\320\276\321\202 \320\264\320\273\321\217 \n"
"\320\262\321\213\321\207\320\270\321\201\320\273\320\265\320\275\320\270\321\217 \320\277\320\265\321\200\320\270\320\276\320\264\320\276\320\263\321\200\320\260\320\274\320\274\321\213?", 0));
        checkBox_4->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\270\320\262\320\276\320\264\320\270\321\202\321\214 \320\272\320\276\321\215\321\204\321\204\320\270\321\206\320\270\320\265\320\275\321\202\321\213 \320\272\320\276\321\200\321\200\320\265\320\273\321\217\321\206\320\270\320\270 \320\272 \n"
"\320\275\320\265\321\201\320\274\320\265\321\211\321\221\320\275\320\275\320\276\320\271 \320\276\321\206\320\265\320\275\320\272\320\265?", 0));
        label_3->setText(QApplication::translate("MainWindow", "\320\234\320\275\320\276\320\266\320\270\321\202\320\265\320\273\321\214 \320\264\320\270\321\201\320\272\321\200\320\265\321\202\320\270\320\267\320\260\321\206\320\270\320\270 \320\274\320\275\320\276\320\266\320\270\321\202\320\265\320\273\320\265\320\271 p \n"
"(\320\264\320\273\321\217 \321\207\320\260\321\201\321\202\320\276\321\202)", 0));
        label_4->setText(QApplication::translate("MainWindow", "\320\234\320\275\320\276\320\266\320\270\321\202\320\265\320\273\321\214 \320\264\320\270\321\201\320\272\321\200\320\265\321\202\320\270\320\267\320\260\321\206\320\270\320\270 \320\274\320\275\320\276\320\266\320\270\321\202\320\265\320\273\320\265\320\271 t \n"
"(\320\264\320\273\321\217 \320\277\320\265\321\200\320\270\320\276\320\264\320\276\320\262)", 0));
        label_5->setText(QApplication::translate("MainWindow", "\320\223\321\200\320\260\320\275\320\270\321\206\321\213 \321\200\320\260\320\261\320\276\321\207\320\265\320\263\320\276 \320\264\320\270\320\260\320\277\320\260\320\267\320\276\320\275\320\260 \321\207\320\260\321\201\321\202\320\276\321\202", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
