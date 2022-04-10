/********************************************************************************
** Form generated from reading UI file 'ProjetFinalEchec.ui'
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

class Ui_ProjetFinalEchecClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ProjetFinalEchecClass)
    {
        if (ProjetFinalEchecClass->objectName().isEmpty())
            ProjetFinalEchecClass->setObjectName(QString::fromUtf8("ProjetFinalEchecClass"));
        ProjetFinalEchecClass->resize(600, 400);
        menuBar = new QMenuBar(ProjetFinalEchecClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        ProjetFinalEchecClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ProjetFinalEchecClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ProjetFinalEchecClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(ProjetFinalEchecClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        ProjetFinalEchecClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ProjetFinalEchecClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ProjetFinalEchecClass->setStatusBar(statusBar);

        retranslateUi(ProjetFinalEchecClass);

        QMetaObject::connectSlotsByName(ProjetFinalEchecClass);
    } // setupUi

    void retranslateUi(QMainWindow *ProjetFinalEchecClass)
    {
        ProjetFinalEchecClass->setWindowTitle(QCoreApplication::translate("ProjetFinalEchecClass", "ProjetFinalEchec", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProjetFinalEchecClass: public Ui_ProjetFinalEchecClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJETFINALECHEC_H
