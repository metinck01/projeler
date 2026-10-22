/********************************************************************************
** Form generated from reading UI file 'hesapmakinesiarayz.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HESAPMAKINESIARAYZ_H
#define UI_HESAPMAKINESIARAYZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hesapmakinesiarayzClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *hesapmakinesiarayzClass)
    {
        if (hesapmakinesiarayzClass->objectName().isEmpty())
            hesapmakinesiarayzClass->setObjectName("hesapmakinesiarayzClass");
        hesapmakinesiarayzClass->resize(600, 400);
        menuBar = new QMenuBar(hesapmakinesiarayzClass);
        menuBar->setObjectName("menuBar");
        hesapmakinesiarayzClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(hesapmakinesiarayzClass);
        mainToolBar->setObjectName("mainToolBar");
        hesapmakinesiarayzClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(hesapmakinesiarayzClass);
        centralWidget->setObjectName("centralWidget");
        hesapmakinesiarayzClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(hesapmakinesiarayzClass);
        statusBar->setObjectName("statusBar");
        hesapmakinesiarayzClass->setStatusBar(statusBar);

        retranslateUi(hesapmakinesiarayzClass);

        QMetaObject::connectSlotsByName(hesapmakinesiarayzClass);
    } // setupUi

    void retranslateUi(QMainWindow *hesapmakinesiarayzClass)
    {
        hesapmakinesiarayzClass->setWindowTitle(QCoreApplication::translate("hesapmakinesiarayzClass", "hesapmakinesiarayz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class hesapmakinesiarayzClass: public Ui_hesapmakinesiarayzClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HESAPMAKINESIARAYZ_H
