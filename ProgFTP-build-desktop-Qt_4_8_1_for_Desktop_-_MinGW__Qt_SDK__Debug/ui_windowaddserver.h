/********************************************************************************
** Form generated from reading UI file 'windowaddserver.ui'
**
** Created: Mon May 13 19:16:19 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWADDSERVER_H
#define UI_WINDOWADDSERVER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_windowAddServer
{
public:
    QWidget *windowEnterSyncModule;
    QGroupBox *syncModuleBox;
    QTextBrowser *textBrowser;
    QLabel *label_18;
    QLabel *localFolderLabel;
    QPushButton *buttonChangeLocalFolder;
    QLabel *label_19;
    QLabel *remoteFolderLabel;
    QPushButton *buttonChangeRemoteFolder;
    QPushButton *buttonNextStepOrFinish;
    QWidget *windowEnterBase;
    QLabel *label_1;
    QLabel *serverNameLabel;
    QLabel *label_3;
    QLineEdit *serverAdressEdit;
    QLabel *label_14;
    QSpinBox *serverPortEdit;
    QGroupBox *accountBox;
    QLineEdit *serverPasswordEdit;
    QLineEdit *serverLoginEdit;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;

    void setupUi(QDialog *windowAddServer)
    {
        if (windowAddServer->objectName().isEmpty())
            windowAddServer->setObjectName(QString::fromUtf8("windowAddServer"));
        windowAddServer->resize(261, 328);
        windowAddServer->setMinimumSize(QSize(261, 328));
        windowAddServer->setMaximumSize(QSize(261, 328));
        windowEnterSyncModule = new QWidget(windowAddServer);
        windowEnterSyncModule->setObjectName(QString::fromUtf8("windowEnterSyncModule"));
        windowEnterSyncModule->setGeometry(QRect(0, 0, 261, 301));
        syncModuleBox = new QGroupBox(windowEnterSyncModule);
        syncModuleBox->setObjectName(QString::fromUtf8("syncModuleBox"));
        syncModuleBox->setGeometry(QRect(10, 10, 231, 271));
        syncModuleBox->setCheckable(true);
        syncModuleBox->setChecked(false);
        textBrowser = new QTextBrowser(syncModuleBox);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 30, 201, 51));
        textBrowser->setFrameShape(QFrame::NoFrame);
        label_18 = new QLabel(syncModuleBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(10, 110, 61, 16));
        localFolderLabel = new QLabel(syncModuleBox);
        localFolderLabel->setObjectName(QString::fromUtf8("localFolderLabel"));
        localFolderLabel->setGeometry(QRect(100, 110, 111, 20));
        buttonChangeLocalFolder = new QPushButton(syncModuleBox);
        buttonChangeLocalFolder->setObjectName(QString::fromUtf8("buttonChangeLocalFolder"));
        buttonChangeLocalFolder->setGeometry(QRect(100, 130, 61, 21));
        label_19 = new QLabel(syncModuleBox);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(10, 180, 81, 20));
        remoteFolderLabel = new QLabel(syncModuleBox);
        remoteFolderLabel->setObjectName(QString::fromUtf8("remoteFolderLabel"));
        remoteFolderLabel->setGeometry(QRect(100, 180, 111, 20));
        buttonChangeRemoteFolder = new QPushButton(syncModuleBox);
        buttonChangeRemoteFolder->setObjectName(QString::fromUtf8("buttonChangeRemoteFolder"));
        buttonChangeRemoteFolder->setGeometry(QRect(100, 200, 61, 21));
        buttonNextStepOrFinish = new QPushButton(windowAddServer);
        buttonNextStepOrFinish->setObjectName(QString::fromUtf8("buttonNextStepOrFinish"));
        buttonNextStepOrFinish->setGeometry(QRect(180, 300, 71, 23));
        windowEnterBase = new QWidget(windowAddServer);
        windowEnterBase->setObjectName(QString::fromUtf8("windowEnterBase"));
        windowEnterBase->setGeometry(QRect(0, 0, 261, 301));
        label_1 = new QLabel(windowEnterBase);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(20, 40, 71, 16));
        serverNameLabel = new QLabel(windowEnterBase);
        serverNameLabel->setObjectName(QString::fromUtf8("serverNameLabel"));
        serverNameLabel->setGeometry(QRect(110, 40, 111, 16));
        label_3 = new QLabel(windowEnterBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 80, 51, 20));
        serverAdressEdit = new QLineEdit(windowEnterBase);
        serverAdressEdit->setObjectName(QString::fromUtf8("serverAdressEdit"));
        serverAdressEdit->setGeometry(QRect(110, 80, 111, 20));
        label_14 = new QLabel(windowEnterBase);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(20, 120, 46, 21));
        serverPortEdit = new QSpinBox(windowEnterBase);
        serverPortEdit->setObjectName(QString::fromUtf8("serverPortEdit"));
        serverPortEdit->setGeometry(QRect(110, 120, 111, 22));
        accountBox = new QGroupBox(windowEnterBase);
        accountBox->setObjectName(QString::fromUtf8("accountBox"));
        accountBox->setGeometry(QRect(10, 160, 231, 131));
        accountBox->setCheckable(true);
        accountBox->setChecked(false);
        serverPasswordEdit = new QLineEdit(accountBox);
        serverPasswordEdit->setObjectName(QString::fromUtf8("serverPasswordEdit"));
        serverPasswordEdit->setGeometry(QRect(100, 70, 111, 20));
        serverLoginEdit = new QLineEdit(accountBox);
        serverLoginEdit->setObjectName(QString::fromUtf8("serverLoginEdit"));
        serverLoginEdit->setGeometry(QRect(100, 30, 111, 20));
        label_15 = new QLabel(accountBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 30, 46, 21));
        label_16 = new QLabel(accountBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(10, 70, 51, 21));
        label_17 = new QLabel(windowEnterBase);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(20, 10, 81, 16));

        retranslateUi(windowAddServer);

        QMetaObject::connectSlotsByName(windowAddServer);
    } // setupUi

    void retranslateUi(QDialog *windowAddServer)
    {
        windowAddServer->setWindowTitle(QApplication::translate("windowAddServer", "Dialog", 0, QApplication::UnicodeUTF8));
        syncModuleBox->setTitle(QApplication::translate("windowAddServer", "Sync module", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("windowAddServer", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">If you activate this module, you can synchronise files between your computer and an FTP server.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("windowAddServer", "Local folder :", 0, QApplication::UnicodeUTF8));
        localFolderLabel->setText(QString());
        buttonChangeLocalFolder->setText(QApplication::translate("windowAddServer", "Change", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("windowAddServer", "Remote folder :", 0, QApplication::UnicodeUTF8));
        remoteFolderLabel->setText(QApplication::translate("windowAddServer", "/", 0, QApplication::UnicodeUTF8));
        buttonChangeRemoteFolder->setText(QApplication::translate("windowAddServer", "Change", 0, QApplication::UnicodeUTF8));
        buttonNextStepOrFinish->setText(QApplication::translate("windowAddServer", "Next step", 0, QApplication::UnicodeUTF8));
        label_1->setText(QApplication::translate("windowAddServer", "Server name :", 0, QApplication::UnicodeUTF8));
        serverNameLabel->setText(QApplication::translate("windowAddServer", "servername", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("windowAddServer", "Adress :", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("windowAddServer", "Port :", 0, QApplication::UnicodeUTF8));
        accountBox->setTitle(QApplication::translate("windowAddServer", "Account", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("windowAddServer", "Login :", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("windowAddServer", "Password :", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("windowAddServer", "Add new server", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class windowAddServer: public Ui_windowAddServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWADDSERVER_H
