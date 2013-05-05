/********************************************************************************
** Form generated from reading UI file 'proftp.ui'
**
** Created: Sat May 4 18:56:47 2013
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
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QTreeView>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_proftp
{
public:
    QAction *actionLogs;
    QAction *actionExit;
    QAction *actionServer_manager;
    QAction *actionConnect;
    QAction *actionDisconnect;
    QAction *actionSynchronise_folders;
    QAction *actionDownload_file;
    QAction *actionHelp;
    QAction *actionAbout_ProgFTP;
    QAction *actionAbout_Qt;
    QAction *actionUpload_file;
    QWidget *centralWidget;
    QWidget *windowHome;
    QPushButton *buttonServerManager;
    QTextEdit *logFTP;
    QFrame *line;
    QPushButton *buttonSynchroniseFolders;
    QPushButton *buttonDownload;
    QLabel *label_9;
    QTreeWidget *remoteFolderView;
    QTreeView *localFolderView;
    QListView *localFilesView;
    QLabel *label_10;
    QPushButton *buttonReturnDirectory;
    QPushButton *buttonAddFolderRemote;
    QPushButton *buttonDeleteFolderRemote;
    QComboBox *serversSelect;
    QPushButton *buttonConnectServer;
    QPushButton *buttonAddFolderLocal;
    QPushButton *buttonDeleteFolderLocal;
    QPushButton *buttonUpload;
    QWidget *windowServerManager;
    QPushButton *buttonHome;
    QFrame *line_2;
    QLineEdit *addServerEdit;
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
    QGroupBox *propertiesBox;
    QCheckBox *autoLoginCheck;
    QComboBox *serversSelectProperties;
    QMenuBar *menuBar;
    QMenu *menuHome;
    QMenu *menuServer;
    QMenu *menuHelp;

    void setupUi(QMainWindow *proftp)
    {
        if (proftp->objectName().isEmpty())
            proftp->setObjectName(QString::fromUtf8("proftp"));
        proftp->resize(911, 501);
        proftp->setMinimumSize(QSize(431, 501));
        proftp->setMaximumSize(QSize(55555, 501));
        actionLogs = new QAction(proftp);
        actionLogs->setObjectName(QString::fromUtf8("actionLogs"));
        actionExit = new QAction(proftp);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionServer_manager = new QAction(proftp);
        actionServer_manager->setObjectName(QString::fromUtf8("actionServer_manager"));
        actionConnect = new QAction(proftp);
        actionConnect->setObjectName(QString::fromUtf8("actionConnect"));
        actionDisconnect = new QAction(proftp);
        actionDisconnect->setObjectName(QString::fromUtf8("actionDisconnect"));
        actionSynchronise_folders = new QAction(proftp);
        actionSynchronise_folders->setObjectName(QString::fromUtf8("actionSynchronise_folders"));
        actionDownload_file = new QAction(proftp);
        actionDownload_file->setObjectName(QString::fromUtf8("actionDownload_file"));
        actionHelp = new QAction(proftp);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionAbout_ProgFTP = new QAction(proftp);
        actionAbout_ProgFTP->setObjectName(QString::fromUtf8("actionAbout_ProgFTP"));
        actionAbout_Qt = new QAction(proftp);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        actionUpload_file = new QAction(proftp);
        actionUpload_file->setObjectName(QString::fromUtf8("actionUpload_file"));
        centralWidget = new QWidget(proftp);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        windowHome = new QWidget(centralWidget);
        windowHome->setObjectName(QString::fromUtf8("windowHome"));
        windowHome->setGeometry(QRect(0, 0, 431, 481));
        buttonServerManager = new QPushButton(windowHome);
        buttonServerManager->setObjectName(QString::fromUtf8("buttonServerManager"));
        buttonServerManager->setGeometry(QRect(10, 10, 101, 23));
        logFTP = new QTextEdit(windowHome);
        logFTP->setObjectName(QString::fromUtf8("logFTP"));
        logFTP->setGeometry(QRect(10, 40, 411, 61));
        line = new QFrame(windowHome);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(120, 10, 16, 21));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        buttonSynchroniseFolders = new QPushButton(windowHome);
        buttonSynchroniseFolders->setObjectName(QString::fromUtf8("buttonSynchroniseFolders"));
        buttonSynchroniseFolders->setGeometry(QRect(10, 450, 131, 23));
        buttonDownload = new QPushButton(windowHome);
        buttonDownload->setObjectName(QString::fromUtf8("buttonDownload"));
        buttonDownload->setGeometry(QRect(160, 450, 75, 23));
        label_9 = new QLabel(windowHome);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 110, 71, 16));
        remoteFolderView = new QTreeWidget(windowHome);
        remoteFolderView->setObjectName(QString::fromUtf8("remoteFolderView"));
        remoteFolderView->setGeometry(QRect(10, 140, 201, 301));
        localFolderView = new QTreeView(windowHome);
        localFolderView->setObjectName(QString::fromUtf8("localFolderView"));
        localFolderView->setGeometry(QRect(220, 140, 201, 141));
        localFilesView = new QListView(windowHome);
        localFilesView->setObjectName(QString::fromUtf8("localFilesView"));
        localFilesView->setGeometry(QRect(220, 290, 201, 151));
        label_10 = new QLabel(windowHome);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(220, 110, 61, 16));
        buttonReturnDirectory = new QPushButton(windowHome);
        buttonReturnDirectory->setObjectName(QString::fromUtf8("buttonReturnDirectory"));
        buttonReturnDirectory->setGeometry(QRect(90, 110, 21, 21));
        buttonAddFolderRemote = new QPushButton(windowHome);
        buttonAddFolderRemote->setObjectName(QString::fromUtf8("buttonAddFolderRemote"));
        buttonAddFolderRemote->setGeometry(QRect(120, 110, 21, 21));
        buttonDeleteFolderRemote = new QPushButton(windowHome);
        buttonDeleteFolderRemote->setObjectName(QString::fromUtf8("buttonDeleteFolderRemote"));
        buttonDeleteFolderRemote->setGeometry(QRect(150, 110, 21, 21));
        serversSelect = new QComboBox(windowHome);
        serversSelect->setObjectName(QString::fromUtf8("serversSelect"));
        serversSelect->setGeometry(QRect(150, 10, 131, 22));
        buttonConnectServer = new QPushButton(windowHome);
        buttonConnectServer->setObjectName(QString::fromUtf8("buttonConnectServer"));
        buttonConnectServer->setGeometry(QRect(300, 10, 81, 21));
        buttonAddFolderLocal = new QPushButton(windowHome);
        buttonAddFolderLocal->setObjectName(QString::fromUtf8("buttonAddFolderLocal"));
        buttonAddFolderLocal->setGeometry(QRect(290, 110, 21, 21));
        buttonDeleteFolderLocal = new QPushButton(windowHome);
        buttonDeleteFolderLocal->setObjectName(QString::fromUtf8("buttonDeleteFolderLocal"));
        buttonDeleteFolderLocal->setGeometry(QRect(320, 110, 21, 21));
        buttonUpload = new QPushButton(windowHome);
        buttonUpload->setObjectName(QString::fromUtf8("buttonUpload"));
        buttonUpload->setGeometry(QRect(250, 450, 75, 23));
        windowServerManager = new QWidget(centralWidget);
        windowServerManager->setObjectName(QString::fromUtf8("windowServerManager"));
        windowServerManager->setGeometry(QRect(460, 0, 431, 481));
        buttonHome = new QPushButton(windowServerManager);
        buttonHome->setObjectName(QString::fromUtf8("buttonHome"));
        buttonHome->setGeometry(QRect(10, 10, 101, 23));
        line_2 = new QFrame(windowServerManager);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(119, 10, 21, 21));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        addServerEdit = new QLineEdit(windowServerManager);
        addServerEdit->setObjectName(QString::fromUtf8("addServerEdit"));
        addServerEdit->setGeometry(QRect(150, 10, 131, 20));
        buttonAddServer = new QPushButton(windowServerManager);
        buttonAddServer->setObjectName(QString::fromUtf8("buttonAddServer"));
        buttonAddServer->setGeometry(QRect(300, 10, 91, 21));
        serversList = new QListWidget(windowServerManager);
        serversList->setObjectName(QString::fromUtf8("serversList"));
        serversList->setGeometry(QRect(10, 40, 121, 431));
        informationsServerBox = new QGroupBox(windowServerManager);
        informationsServerBox->setObjectName(QString::fromUtf8("informationsServerBox"));
        informationsServerBox->setGeometry(QRect(140, 40, 251, 361));
        buttonDeleteServers = new QPushButton(informationsServerBox);
        buttonDeleteServers->setObjectName(QString::fromUtf8("buttonDeleteServers"));
        buttonDeleteServers->setGeometry(QRect(110, 330, 101, 23));
        label_2 = new QLabel(informationsServerBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 20, 81, 16));
        serverNameLabel = new QLabel(informationsServerBox);
        serverNameLabel->setObjectName(QString::fromUtf8("serverNameLabel"));
        serverNameLabel->setGeometry(QRect(100, 20, 141, 16));
        label_3 = new QLabel(informationsServerBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 50, 46, 13));
        serverAdressEdit = new QLineEdit(informationsServerBox);
        serverAdressEdit->setObjectName(QString::fromUtf8("serverAdressEdit"));
        serverAdressEdit->setGeometry(QRect(100, 50, 141, 20));
        label_4 = new QLabel(informationsServerBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 90, 41, 16));
        serverLoginEdit = new QLineEdit(informationsServerBox);
        serverLoginEdit->setObjectName(QString::fromUtf8("serverLoginEdit"));
        serverLoginEdit->setGeometry(QRect(100, 90, 141, 20));
        label_5 = new QLabel(informationsServerBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 130, 61, 16));
        serverPasswordEdit = new QLineEdit(informationsServerBox);
        serverPasswordEdit->setObjectName(QString::fromUtf8("serverPasswordEdit"));
        serverPasswordEdit->setGeometry(QRect(100, 130, 141, 20));
        serverPasswordEdit->setEchoMode(QLineEdit::Password);
        label_6 = new QLabel(informationsServerBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 170, 46, 13));
        serverPortEdit = new QLineEdit(informationsServerBox);
        serverPortEdit->setObjectName(QString::fromUtf8("serverPortEdit"));
        serverPortEdit->setGeometry(QRect(100, 170, 141, 20));
        label_7 = new QLabel(informationsServerBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 210, 71, 16));
        buttonChangeLocalFolder = new QPushButton(informationsServerBox);
        buttonChangeLocalFolder->setObjectName(QString::fromUtf8("buttonChangeLocalFolder"));
        buttonChangeLocalFolder->setGeometry(QRect(100, 230, 75, 23));
        label_8 = new QLabel(informationsServerBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 260, 81, 16));
        buttonChangeRemoteFolder = new QPushButton(informationsServerBox);
        buttonChangeRemoteFolder->setObjectName(QString::fromUtf8("buttonChangeRemoteFolder"));
        buttonChangeRemoteFolder->setGeometry(QRect(100, 290, 75, 23));
        buttonSaveChangesServer = new QPushButton(informationsServerBox);
        buttonSaveChangesServer->setObjectName(QString::fromUtf8("buttonSaveChangesServer"));
        buttonSaveChangesServer->setGeometry(QRect(20, 330, 75, 23));
        remoteFolderEdit = new QLineEdit(informationsServerBox);
        remoteFolderEdit->setObjectName(QString::fromUtf8("remoteFolderEdit"));
        remoteFolderEdit->setGeometry(QRect(100, 260, 141, 20));
        localFolderLabel = new QLabel(informationsServerBox);
        localFolderLabel->setObjectName(QString::fromUtf8("localFolderLabel"));
        localFolderLabel->setGeometry(QRect(100, 210, 141, 16));
        propertiesBox = new QGroupBox(windowServerManager);
        propertiesBox->setObjectName(QString::fromUtf8("propertiesBox"));
        propertiesBox->setGeometry(QRect(140, 400, 251, 71));
        autoLoginCheck = new QCheckBox(propertiesBox);
        autoLoginCheck->setObjectName(QString::fromUtf8("autoLoginCheck"));
        autoLoginCheck->setGeometry(QRect(10, 30, 101, 18));
        serversSelectProperties = new QComboBox(propertiesBox);
        serversSelectProperties->setObjectName(QString::fromUtf8("serversSelectProperties"));
        serversSelectProperties->setGeometry(QRect(110, 30, 121, 22));
        proftp->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(proftp);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 911, 20));
        menuHome = new QMenu(menuBar);
        menuHome->setObjectName(QString::fromUtf8("menuHome"));
        menuServer = new QMenu(menuBar);
        menuServer->setObjectName(QString::fromUtf8("menuServer"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        proftp->setMenuBar(menuBar);

        menuBar->addAction(menuHome->menuAction());
        menuBar->addAction(menuServer->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuHome->addAction(actionServer_manager);
        menuHome->addSeparator();
        menuHome->addAction(actionLogs);
        menuHome->addAction(actionExit);
        menuServer->addAction(actionConnect);
        menuServer->addAction(actionDisconnect);
        menuServer->addSeparator();
        menuServer->addAction(actionSynchronise_folders);
        menuServer->addAction(actionDownload_file);
        menuServer->addAction(actionUpload_file);
        menuHelp->addAction(actionHelp);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout_ProgFTP);
        menuHelp->addAction(actionAbout_Qt);

        retranslateUi(proftp);

        QMetaObject::connectSlotsByName(proftp);
    } // setupUi

    void retranslateUi(QMainWindow *proftp)
    {
        proftp->setWindowTitle(QApplication::translate("proftp", "proftp", 0, QApplication::UnicodeUTF8));
        actionLogs->setText(QApplication::translate("proftp", "Logs", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("proftp", "Exit", 0, QApplication::UnicodeUTF8));
        actionServer_manager->setText(QApplication::translate("proftp", "Server manager", 0, QApplication::UnicodeUTF8));
        actionConnect->setText(QApplication::translate("proftp", "Connect", 0, QApplication::UnicodeUTF8));
        actionDisconnect->setText(QApplication::translate("proftp", "Disconnect", 0, QApplication::UnicodeUTF8));
        actionSynchronise_folders->setText(QApplication::translate("proftp", "Synchronise folders", 0, QApplication::UnicodeUTF8));
        actionDownload_file->setText(QApplication::translate("proftp", "Download file", 0, QApplication::UnicodeUTF8));
        actionHelp->setText(QApplication::translate("proftp", "Help", 0, QApplication::UnicodeUTF8));
        actionAbout_ProgFTP->setText(QApplication::translate("proftp", "About ProgFTP", 0, QApplication::UnicodeUTF8));
        actionAbout_Qt->setText(QApplication::translate("proftp", "About Qt", 0, QApplication::UnicodeUTF8));
        actionUpload_file->setText(QApplication::translate("proftp", "Upload file", 0, QApplication::UnicodeUTF8));
        buttonServerManager->setText(QApplication::translate("proftp", "Server manager", 0, QApplication::UnicodeUTF8));
        buttonSynchroniseFolders->setText(QApplication::translate("proftp", "Synchronise folders", 0, QApplication::UnicodeUTF8));
        buttonDownload->setText(QApplication::translate("proftp", "Download", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("proftp", "Remote files :", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = remoteFolderView->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("proftp", "Time", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(3, QApplication::translate("proftp", "Group", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("proftp", "Owner", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("proftp", "Size", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("proftp", "Name", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("proftp", "Local files :", 0, QApplication::UnicodeUTF8));
        buttonReturnDirectory->setText(QString());
        buttonAddFolderRemote->setText(QString());
        buttonDeleteFolderRemote->setText(QString());
        buttonConnectServer->setText(QApplication::translate("proftp", "Connect", 0, QApplication::UnicodeUTF8));
        buttonAddFolderLocal->setText(QString());
        buttonDeleteFolderLocal->setText(QString());
        buttonUpload->setText(QApplication::translate("proftp", "Upload", 0, QApplication::UnicodeUTF8));
        buttonHome->setText(QApplication::translate("proftp", "Home", 0, QApplication::UnicodeUTF8));
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
        propertiesBox->setTitle(QApplication::translate("proftp", "Properties", 0, QApplication::UnicodeUTF8));
        autoLoginCheck->setText(QApplication::translate("proftp", "Auto-login with", 0, QApplication::UnicodeUTF8));
        menuHome->setTitle(QApplication::translate("proftp", "Home", 0, QApplication::UnicodeUTF8));
        menuServer->setTitle(QApplication::translate("proftp", "Server", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("proftp", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class proftp: public Ui_proftp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFTP_H
