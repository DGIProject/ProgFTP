/********************************************************************************
** Form generated from reading UI file 'proftp.ui'
**
** Created: Mon Apr 29 19:00:43 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFTP_H
#define UI_PROFTP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QTreeView>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_proftp
{
public:
    QWidget *centralWidget;
    QTabWidget *tabProgFTP;
    QWidget *home;
    QComboBox *serversSelect;
    QLabel *label;
    QPushButton *buttonConnectServer;
    QTextEdit *logFTP;
    QTreeView *localFolderView;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QGroupBox *toolsBox;
    QPushButton *pushButton;
    QTreeWidget *remoteFolderView;
    QPushButton *buttonReturnDirectory;
    QTreeWidget *localFilesView;
    QWidget *servers;
    QPushButton *buttonAddServer;
    QListWidget *serversList;
    QGroupBox *informationsServerBox;
    QPushButton *buttonDeleteServers;
    QLabel *label_2;
    QLabel *serverNameLabel;
    QLabel *label_3;
    QLineEdit *serverAdressEdit;
    QLabel *label_4;
    QLineEdit *serverLoginEdit;
    QLabel *label_5;
    QLineEdit *serverPasswordEdit;
    QLabel *label_6;
    QLineEdit *serverPortEdit;
    QLabel *label_7;
    QPushButton *buttonChangeLocalFolder;
    QLabel *label_8;
    QPushButton *buttonChangeRemoteFolder;
    QPushButton *buttonSaveChangesServer;
    QLineEdit *remoteFolderEdit;
    QLabel *localFolderLabel;
    QLineEdit *addServerEdit;
    QWidget *properties;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *proftp)
    {
        if (proftp->objectName().isEmpty())
            proftp->setObjectName(QString::fromUtf8("proftp"));
        proftp->resize(590, 523);
        centralWidget = new QWidget(proftp);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabProgFTP = new QTabWidget(centralWidget);
        tabProgFTP->setObjectName(QString::fromUtf8("tabProgFTP"));
        tabProgFTP->setGeometry(QRect(0, 0, 591, 481));
        home = new QWidget();
        home->setObjectName(QString::fromUtf8("home"));
        serversSelect = new QComboBox(home);
        serversSelect->setObjectName(QString::fromUtf8("serversSelect"));
        serversSelect->setGeometry(QRect(120, 270, 131, 22));
        label = new QLabel(home);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 270, 111, 16));
        buttonConnectServer = new QPushButton(home);
        buttonConnectServer->setObjectName(QString::fromUtf8("buttonConnectServer"));
        buttonConnectServer->setGeometry(QRect(260, 270, 61, 21));
        logFTP = new QTextEdit(home);
        logFTP->setObjectName(QString::fromUtf8("logFTP"));
        logFTP->setGeometry(QRect(340, 290, 231, 151));
        localFolderView = new QTreeView(home);
        localFolderView->setObjectName(QString::fromUtf8("localFolderView"));
        localFolderView->setGeometry(QRect(300, 30, 271, 111));
        label_9 = new QLabel(home);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 10, 71, 16));
        label_10 = new QLabel(home);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(300, 10, 61, 16));
        label_11 = new QLabel(home);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(340, 270, 46, 13));
        toolsBox = new QGroupBox(home);
        toolsBox->setObjectName(QString::fromUtf8("toolsBox"));
        toolsBox->setGeometry(QRect(10, 300, 311, 151));
        pushButton = new QPushButton(toolsBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 20, 131, 23));
        remoteFolderView = new QTreeWidget(home);
        remoteFolderView->setObjectName(QString::fromUtf8("remoteFolderView"));
        remoteFolderView->setGeometry(QRect(5, 31, 271, 221));
        buttonReturnDirectory = new QPushButton(home);
        buttonReturnDirectory->setObjectName(QString::fromUtf8("buttonReturnDirectory"));
        buttonReturnDirectory->setGeometry(QRect(250, 10, 21, 21));
        localFilesView = new QTreeWidget(home);
        localFilesView->setObjectName(QString::fromUtf8("localFilesView"));
        localFilesView->setGeometry(QRect(300, 150, 271, 101));
        tabProgFTP->addTab(home, QString());
        servers = new QWidget();
        servers->setObjectName(QString::fromUtf8("servers"));
        buttonAddServer = new QPushButton(servers);
        buttonAddServer->setObjectName(QString::fromUtf8("buttonAddServer"));
        buttonAddServer->setGeometry(QRect(220, 10, 111, 23));
        serversList = new QListWidget(servers);
        serversList->setObjectName(QString::fromUtf8("serversList"));
        serversList->setGeometry(QRect(10, 40, 131, 401));
        informationsServerBox = new QGroupBox(servers);
        informationsServerBox->setObjectName(QString::fromUtf8("informationsServerBox"));
        informationsServerBox->setGeometry(QRect(150, 40, 181, 401));
        buttonDeleteServers = new QPushButton(informationsServerBox);
        buttonDeleteServers->setObjectName(QString::fromUtf8("buttonDeleteServers"));
        buttonDeleteServers->setGeometry(QRect(10, 370, 101, 23));
        label_2 = new QLabel(informationsServerBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 30, 81, 16));
        serverNameLabel = new QLabel(informationsServerBox);
        serverNameLabel->setObjectName(QString::fromUtf8("serverNameLabel"));
        serverNameLabel->setGeometry(QRect(110, 30, 46, 13));
        label_3 = new QLabel(informationsServerBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 60, 46, 13));
        serverAdressEdit = new QLineEdit(informationsServerBox);
        serverAdressEdit->setObjectName(QString::fromUtf8("serverAdressEdit"));
        serverAdressEdit->setGeometry(QRect(60, 60, 113, 20));
        label_4 = new QLabel(informationsServerBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 100, 41, 16));
        serverLoginEdit = new QLineEdit(informationsServerBox);
        serverLoginEdit->setObjectName(QString::fromUtf8("serverLoginEdit"));
        serverLoginEdit->setGeometry(QRect(60, 100, 113, 20));
        label_5 = new QLabel(informationsServerBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 140, 61, 16));
        serverPasswordEdit = new QLineEdit(informationsServerBox);
        serverPasswordEdit->setObjectName(QString::fromUtf8("serverPasswordEdit"));
        serverPasswordEdit->setGeometry(QRect(70, 140, 101, 20));
        serverPasswordEdit->setEchoMode(QLineEdit::Password);
        label_6 = new QLabel(informationsServerBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 180, 46, 13));
        serverPortEdit = new QLineEdit(informationsServerBox);
        serverPortEdit->setObjectName(QString::fromUtf8("serverPortEdit"));
        serverPortEdit->setGeometry(QRect(60, 180, 113, 20));
        label_7 = new QLabel(informationsServerBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 230, 71, 16));
        buttonChangeLocalFolder = new QPushButton(informationsServerBox);
        buttonChangeLocalFolder->setObjectName(QString::fromUtf8("buttonChangeLocalFolder"));
        buttonChangeLocalFolder->setGeometry(QRect(90, 250, 75, 23));
        label_8 = new QLabel(informationsServerBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 290, 81, 16));
        buttonChangeRemoteFolder = new QPushButton(informationsServerBox);
        buttonChangeRemoteFolder->setObjectName(QString::fromUtf8("buttonChangeRemoteFolder"));
        buttonChangeRemoteFolder->setGeometry(QRect(90, 310, 75, 23));
        buttonSaveChangesServer = new QPushButton(informationsServerBox);
        buttonSaveChangesServer->setObjectName(QString::fromUtf8("buttonSaveChangesServer"));
        buttonSaveChangesServer->setGeometry(QRect(10, 340, 75, 23));
        remoteFolderEdit = new QLineEdit(informationsServerBox);
        remoteFolderEdit->setObjectName(QString::fromUtf8("remoteFolderEdit"));
        remoteFolderEdit->setGeometry(QRect(90, 290, 113, 20));
        localFolderLabel = new QLabel(informationsServerBox);
        localFolderLabel->setObjectName(QString::fromUtf8("localFolderLabel"));
        localFolderLabel->setGeometry(QRect(80, 230, 46, 13));
        addServerEdit = new QLineEdit(servers);
        addServerEdit->setObjectName(QString::fromUtf8("addServerEdit"));
        addServerEdit->setGeometry(QRect(10, 10, 201, 20));
        tabProgFTP->addTab(servers, QString());
        properties = new QWidget();
        properties->setObjectName(QString::fromUtf8("properties"));
        tabProgFTP->addTab(properties, QString());
        proftp->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(proftp);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 590, 20));
        proftp->setMenuBar(menuBar);
        statusBar = new QStatusBar(proftp);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        proftp->setStatusBar(statusBar);

        retranslateUi(proftp);

        tabProgFTP->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(proftp);
    } // setupUi

    void retranslateUi(QMainWindow *proftp)
    {
        proftp->setWindowTitle(QApplication::translate("proftp", "proftp", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("proftp", "Choose your server :", 0, QApplication::UnicodeUTF8));
        buttonConnectServer->setText(QApplication::translate("proftp", "Connect", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("proftp", "Remote files :", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("proftp", "Local files :", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("proftp", "Logs :", 0, QApplication::UnicodeUTF8));
        toolsBox->setTitle(QApplication::translate("proftp", "Tools", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("proftp", "Synchronise folders", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = remoteFolderView->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("proftp", "Time", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(3, QApplication::translate("proftp", "Group", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("proftp", "Owner", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("proftp", "Size", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("proftp", "Name", 0, QApplication::UnicodeUTF8));
        buttonReturnDirectory->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem1 = localFilesView->headerItem();
        ___qtreewidgetitem1->setText(4, QApplication::translate("proftp", "Time", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(3, QApplication::translate("proftp", "Group", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(2, QApplication::translate("proftp", "Owner", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(1, QApplication::translate("proftp", "Size", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem1->setText(0, QApplication::translate("proftp", "Name", 0, QApplication::UnicodeUTF8));
        tabProgFTP->setTabText(tabProgFTP->indexOf(home), QApplication::translate("proftp", "Home", 0, QApplication::UnicodeUTF8));
        buttonAddServer->setText(QApplication::translate("proftp", "Add this server", 0, QApplication::UnicodeUTF8));
        informationsServerBox->setTitle(QApplication::translate("proftp", "Informations", 0, QApplication::UnicodeUTF8));
        buttonDeleteServers->setText(QApplication::translate("proftp", "Delete this server", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("proftp", "Nom du server :", 0, QApplication::UnicodeUTF8));
        serverNameLabel->setText(QApplication::translate("proftp", "servername", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("proftp", "Adresse :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("proftp", "Login :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("proftp", "Password :", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("proftp", "Port :", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("proftp", "Local folder :", 0, QApplication::UnicodeUTF8));
        buttonChangeLocalFolder->setText(QApplication::translate("proftp", "Change", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("proftp", "Remote folder :", 0, QApplication::UnicodeUTF8));
        buttonChangeRemoteFolder->setText(QApplication::translate("proftp", "Change", 0, QApplication::UnicodeUTF8));
        buttonSaveChangesServer->setText(QApplication::translate("proftp", "Save changes", 0, QApplication::UnicodeUTF8));
        localFolderLabel->setText(QApplication::translate("proftp", "localfolder", 0, QApplication::UnicodeUTF8));
        tabProgFTP->setTabText(tabProgFTP->indexOf(servers), QApplication::translate("proftp", "Servers", 0, QApplication::UnicodeUTF8));
        tabProgFTP->setTabText(tabProgFTP->indexOf(properties), QApplication::translate("proftp", "Properties", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class proftp: public Ui_proftp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFTP_H
