/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Feb 22 13:52:19 2012
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *lnEdEndPoint;
    QLineEdit *lnEdAction;
    QPushButton *pBtnSend;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPlainTextEdit *plnTxtParam;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(720, 346);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lnEdEndPoint = new QLineEdit(centralWidget);
        lnEdEndPoint->setObjectName(QString::fromUtf8("lnEdEndPoint"));
        lnEdEndPoint->setGeometry(QRect(102, 29, 491, 27));
        lnEdAction = new QLineEdit(centralWidget);
        lnEdAction->setObjectName(QString::fromUtf8("lnEdAction"));
        lnEdAction->setGeometry(QRect(100, 74, 491, 27));
        pBtnSend = new QPushButton(centralWidget);
        pBtnSend->setObjectName(QString::fromUtf8("pBtnSend"));
        pBtnSend->setGeometry(QRect(620, 30, 93, 27));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 30, 62, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 80, 62, 17));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 0, 221, 17));
        QFont font;
        font.setFamily(QString::fromUtf8("Bitstream Charter"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);
        plnTxtParam = new QPlainTextEdit(centralWidget);
        plnTxtParam->setObjectName(QString::fromUtf8("plnTxtParam"));
        plnTxtParam->setGeometry(QRect(80, 120, 571, 61));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "test", 0, QApplication::UnicodeUTF8));
        pBtnSend->setText(QApplication::translate("MainWindow", "Send", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "End Point", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Action", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Soap Testing set Spp Pekerjaan", 0, QApplication::UnicodeUTF8));
        plnTxtParam->setPlainText(QApplication::translate("MainWindow", "<?xml version=\"1.0\" encoding=\"utf-8\" ?><spp kode=\"123\" status=\"1\"><id>1</id><id>2</id></spp>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
