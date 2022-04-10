/********************************************************************************
** Form generated from reading UI file 'projetFinalEchec.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJETFINALECHEC_H
#define UI_PROJETFINALECHEC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_projetFinalEchecClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *projetFinalEchecClass)
    {
        if (projetFinalEchecClass->objectName().isEmpty())
            projetFinalEchecClass->setObjectName(QString::fromUtf8("projetFinalEchecClass"));
        projetFinalEchecClass->resize(600, 400);
        menuBar = new QMenuBar(projetFinalEchecClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        projetFinalEchecClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(projetFinalEchecClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        projetFinalEchecClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(projetFinalEchecClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        projetFinalEchecClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(projetFinalEchecClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        projetFinalEchecClass->setStatusBar(statusBar);

        retranslateUi(projetFinalEchecClass);

        QMetaObject::connectSlotsByName(projetFinalEchecClass);
    } // setupUi

    void retranslateUi(QMainWindow *projetFinalEchecClass)
    {
        projetFinalEchecClass->setWindowTitle(QCoreApplication::translate("projetFinalEchecClass", "projetFinalEchec", nullptr));
    } // retranslateUi

};

namespace Ui {
    class projetFinalEchecClass: public Ui_projetFinalEchecClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJETFINALECHEC_H
