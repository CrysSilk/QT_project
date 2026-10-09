/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *newAction;
    QAction *openAction;
    QAction *saveAction;
    QAction *quitAction;
    QAction *clearAction;
    QAction *allAction;
    QAction *delAction;
    QAction *copyAction;
    QAction *pasteAction;
    QAction *magAction;
    QAction *shrAction;
    QAction *barAction;
    QAction *wdAction;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menu_F;
    QMenu *menu_E;
    QMenu *menu_V;
    QMenu *zoomAction;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        newAction = new QAction(MainWindow);
        newAction->setObjectName("newAction");
        openAction = new QAction(MainWindow);
        openAction->setObjectName("openAction");
        saveAction = new QAction(MainWindow);
        saveAction->setObjectName("saveAction");
        quitAction = new QAction(MainWindow);
        quitAction->setObjectName("quitAction");
        clearAction = new QAction(MainWindow);
        clearAction->setObjectName("clearAction");
        allAction = new QAction(MainWindow);
        allAction->setObjectName("allAction");
        delAction = new QAction(MainWindow);
        delAction->setObjectName("delAction");
        copyAction = new QAction(MainWindow);
        copyAction->setObjectName("copyAction");
        pasteAction = new QAction(MainWindow);
        pasteAction->setObjectName("pasteAction");
        magAction = new QAction(MainWindow);
        magAction->setObjectName("magAction");
        shrAction = new QAction(MainWindow);
        shrAction->setObjectName("shrAction");
        barAction = new QAction(MainWindow);
        barAction->setObjectName("barAction");
        wdAction = new QAction(MainWindow);
        wdAction->setObjectName("wdAction");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");

        verticalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menu_F = new QMenu(menubar);
        menu_F->setObjectName("menu_F");
        menu_E = new QMenu(menubar);
        menu_E->setObjectName("menu_E");
        menu_V = new QMenu(menubar);
        menu_V->setObjectName("menu_V");
        zoomAction = new QMenu(menu_V);
        zoomAction->setObjectName("zoomAction");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_F->menuAction());
        menubar->addAction(menu_E->menuAction());
        menubar->addAction(menu_V->menuAction());
        menu_F->addAction(newAction);
        menu_F->addAction(openAction);
        menu_F->addAction(saveAction);
        menu_F->addAction(quitAction);
        menu_E->addAction(copyAction);
        menu_E->addAction(pasteAction);
        menu_E->addAction(delAction);
        menu_E->addAction(wdAction);
        menu_E->addAction(allAction);
        menu_E->addAction(clearAction);
        menu_V->addAction(zoomAction->menuAction());
        menu_V->addAction(barAction);
        zoomAction->addAction(magAction);
        zoomAction->addAction(shrAction);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        newAction->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272(&N)", nullptr));
        openAction->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200(&O)", nullptr));
        saveAction->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(&S)", nullptr));
        quitAction->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272(&Q)", nullptr));
        clearAction->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272(&R)", nullptr));
        allAction->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211(&A)", nullptr));
        delAction->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244(&D)", nullptr));
        copyAction->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266(&C)", nullptr));
        pasteAction->setText(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264(&V)", nullptr));
        magAction->setText(QCoreApplication::translate("MainWindow", "\346\224\276\345\244\247(&+)", nullptr));
        shrAction->setText(QCoreApplication::translate("MainWindow", "\347\274\251\345\260\217(&-)", nullptr));
        barAction->setText(QCoreApplication::translate("MainWindow", "\347\212\266\346\200\201\346\240\217", nullptr));
        wdAction->setText(QCoreApplication::translate("MainWindow", "\346\222\244\345\233\236(&Z)", nullptr));
        menu_F->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", nullptr));
        menu_E->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", nullptr));
        menu_V->setTitle(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213(&V)", nullptr));
        zoomAction->setTitle(QCoreApplication::translate("MainWindow", "\347\274\251\346\224\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
