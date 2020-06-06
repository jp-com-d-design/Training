/********************************************************************************
** Form generated from reading UI file 'SIGNAL_SLOT.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNAL_SLOT_H
#define UI_SIGNAL_SLOT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SIGNAL_SLOTClass
{
public:
    QWidget *centralWidget;
    QPushButton *QuitButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SIGNAL_SLOTClass)
    {
        if (SIGNAL_SLOTClass->objectName().isEmpty())
            SIGNAL_SLOTClass->setObjectName(QString::fromUtf8("SIGNAL_SLOTClass"));
        SIGNAL_SLOTClass->resize(369, 201);
        centralWidget = new QWidget(SIGNAL_SLOTClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QuitButton = new QPushButton(centralWidget);
        QuitButton->setObjectName(QString::fromUtf8("QuitButton"));
        QuitButton->setGeometry(QRect(26, 10, 310, 131));
        QFont font;
        font.setPointSize(87);
        QuitButton->setFont(font);
        QuitButton->setIconSize(QSize(16, 16));
        SIGNAL_SLOTClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SIGNAL_SLOTClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 369, 20));
        SIGNAL_SLOTClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SIGNAL_SLOTClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        SIGNAL_SLOTClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SIGNAL_SLOTClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        SIGNAL_SLOTClass->setStatusBar(statusBar);

        retranslateUi(SIGNAL_SLOTClass);

        QMetaObject::connectSlotsByName(SIGNAL_SLOTClass);
    } // setupUi

    void retranslateUi(QMainWindow *SIGNAL_SLOTClass)
    {
        SIGNAL_SLOTClass->setWindowTitle(QCoreApplication::translate("SIGNAL_SLOTClass", "SIGNAL_SLOT", nullptr));
        QuitButton->setText(QCoreApplication::translate("SIGNAL_SLOTClass", "Quit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SIGNAL_SLOTClass: public Ui_SIGNAL_SLOTClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNAL_SLOT_H
