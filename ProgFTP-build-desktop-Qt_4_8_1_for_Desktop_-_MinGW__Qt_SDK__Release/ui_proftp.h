/********************************************************************************
** Form generated from reading UI file 'proftp.ui'
**
** Created: Mon May 20 15:18:40 2013
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
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
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
    QAction *actionHome;
    QWidget *centralWidget;
    QWidget *windowHome;
    QPushButton *buttonServerManager;
    QTextEdit *logsFTP;
    QFrame *line;
    QComboBox *serversSelect;
    QPushButton *buttonConnectServer;
    QWidget *windowDataTransfert;
    QLabel *label_9;
    QPushButton *buttonReturnDirectory;
    QPushButton *buttonAddFolderRemote;
    QPushButton *buttonDeleteFolderRemote;
    QTreeWidget *remoteFolderView;
    QPushButton *buttonDownload;
    QLabel *label_10;
    QPushButton *buttonAddFolderLocal;
    QPushButton *buttonDeleteFolderLocal;
    QTreeView *localFolderView;
    QPushButton *buttonUpload;
    QListWidget *localFilesView;
    QPushButton *buttonSync;
    QWidget *windowSync;
    QPushButton *buttonSynchroniseFolders;
    QLabel *label;
    QLabel *label_11;
    QListWidget *localFilesSync;
    QListWidget *remoteFilesSync;
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
    QLabel *localFolderLabel;
    QLabel *remoteFolderLabel;
    QGroupBox *propertiesBox;
    QCheckBox *autoLoginCheck;
    QComboBox *serversSelectProperties;
    QWidget *windowStart;
    QGroupBox *groupBox;
    QPushButton *buttonForum;
    QPushButton *buttonHelp;
    QPushButton *buttonAboutProgFTP;
    QPushButton *buttonAboutQt;
    QPushButton *buttonGoToProgFTP;
    QLineEdit *addNewServerEdit;
    QTextBrowser *textBrowser;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QPushButton *buttonRefreshServeurs;
    QMenuBar *menuBar;
    QMenu *menuHome;
    QMenu *menuServer;
    QMenu *menuHelp;

    void setupUi(QMainWindow *proftp)
    {
        if (proftp->objectName().isEmpty())
            proftp->setObjectName(QString::fromUtf8("proftp"));
        proftp->resize(431, 501);
        proftp->setMinimumSize(QSize(431, 501));
        proftp->setMaximumSize(QSize(431, 501));
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
        actionHome = new QAction(proftp);
        actionHome->setObjectName(QString::fromUtf8("actionHome"));
        centralWidget = new QWidget(proftp);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        windowHome = new QWidget(centralWidget);
        windowHome->setObjectName(QString::fromUtf8("windowHome"));
        windowHome->setGeometry(QRect(0, 0, 431, 481));
        buttonServerManager = new QPushButton(windowHome);
        buttonServerManager->setObjectName(QString::fromUtf8("buttonServerManager"));
        buttonServerManager->setGeometry(QRect(10, 10, 91, 23));
        logsFTP = new QTextEdit(windowHome);
        logsFTP->setObjectName(QString::fromUtf8("logsFTP"));
        logsFTP->setGeometry(QRect(10, 40, 411, 61));
        logsFTP->setTextInteractionFlags(Qt::NoTextInteraction);
        line = new QFrame(windowHome);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(180, 10, 16, 21));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        serversSelect = new QComboBox(windowHome);
        serversSelect->setObjectName(QString::fromUtf8("serversSelect"));
        serversSelect->setGeometry(QRect(210, 10, 131, 22));
        buttonConnectServer = new QPushButton(windowHome);
        buttonConnectServer->setObjectName(QString::fromUtf8("buttonConnectServer"));
        buttonConnectServer->setGeometry(QRect(350, 10, 71, 23));
        windowDataTransfert = new QWidget(windowHome);
        windowDataTransfert->setObjectName(QString::fromUtf8("windowDataTransfert"));
        windowDataTransfert->setGeometry(QRect(0, 100, 431, 381));
        label_9 = new QLabel(windowDataTransfert);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 10, 71, 16));
        buttonReturnDirectory = new QPushButton(windowDataTransfert);
        buttonReturnDirectory->setObjectName(QString::fromUtf8("buttonReturnDirectory"));
        buttonReturnDirectory->setGeometry(QRect(80, 10, 21, 21));
        buttonAddFolderRemote = new QPushButton(windowDataTransfert);
        buttonAddFolderRemote->setObjectName(QString::fromUtf8("buttonAddFolderRemote"));
        buttonAddFolderRemote->setGeometry(QRect(110, 10, 21, 21));
        buttonDeleteFolderRemote = new QPushButton(windowDataTransfert);
        buttonDeleteFolderRemote->setObjectName(QString::fromUtf8("buttonDeleteFolderRemote"));
        buttonDeleteFolderRemote->setGeometry(QRect(140, 10, 21, 21));
        remoteFolderView = new QTreeWidget(windowDataTransfert);
        remoteFolderView->setObjectName(QString::fromUtf8("remoteFolderView"));
        remoteFolderView->setGeometry(QRect(10, 40, 201, 301));
        buttonDownload = new QPushButton(windowDataTransfert);
        buttonDownload->setObjectName(QString::fromUtf8("buttonDownload"));
        buttonDownload->setGeometry(QRect(70, 350, 75, 23));
        label_10 = new QLabel(windowDataTransfert);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(240, 10, 61, 16));
        buttonAddFolderLocal = new QPushButton(windowDataTransfert);
        buttonAddFolderLocal->setObjectName(QString::fromUtf8("buttonAddFolderLocal"));
        buttonAddFolderLocal->setGeometry(QRect(310, 10, 21, 21));
        buttonDeleteFolderLocal = new QPushButton(windowDataTransfert);
        buttonDeleteFolderLocal->setObjectName(QString::fromUtf8("buttonDeleteFolderLocal"));
        buttonDeleteFolderLocal->setGeometry(QRect(340, 10, 21, 21));
        localFolderView = new QTreeView(windowDataTransfert);
        localFolderView->setObjectName(QString::fromUtf8("localFolderView"));
        localFolderView->setGeometry(QRect(220, 40, 201, 141));
        buttonUpload = new QPushButton(windowDataTransfert);
        buttonUpload->setObjectName(QString::fromUtf8("buttonUpload"));
        buttonUpload->setGeometry(QRect(280, 350, 75, 23));
        localFilesView = new QListWidget(windowDataTransfert);
        localFilesView->setObjectName(QString::fromUtf8("localFilesView"));
        localFilesView->setGeometry(QRect(220, 190, 201, 151));
        buttonSync = new QPushButton(windowHome);
        buttonSync->setObjectName(QString::fromUtf8("buttonSync"));
        buttonSync->setGeometry(QRect(110, 10, 61, 23));
        windowSync = new QWidget(windowHome);
        windowSync->setObjectName(QString::fromUtf8("windowSync"));
        windowSync->setGeometry(QRect(0, 90, 431, 391));
        buttonSynchroniseFolders = new QPushButton(windowSync);
        buttonSynchroniseFolders->setObjectName(QString::fromUtf8("buttonSynchroniseFolders"));
        buttonSynchroniseFolders->setGeometry(QRect(140, 360, 131, 23));
        label = new QLabel(windowSync);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 71, 16));
        label_11 = new QLabel(windowSync);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(220, 20, 61, 16));
        localFilesSync = new QListWidget(windowSync);
        localFilesSync->setObjectName(QString::fromUtf8("localFilesSync"));
        localFilesSync->setGeometry(QRect(220, 40, 201, 311));
        remoteFilesSync = new QListWidget(windowSync);
        remoteFilesSync->setObjectName(QString::fromUtf8("remoteFilesSync"));
        remoteFilesSync->setGeometry(QRect(10, 40, 201, 311));
        windowServerManager = new QWidget(centralWidget);
        windowServerManager->setObjectName(QString::fromUtf8("windowServerManager"));
        windowServerManager->setGeometry(QRect(0, 0, 431, 481));
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
        serversList->setGeometry(QRect(10, 40, 101, 431));
        informationsServerBox = new QGroupBox(windowServerManager);
        informationsServerBox->setObjectName(QString::fromUtf8("informationsServerBox"));
        informationsServerBox->setGeometry(QRect(130, 40, 261, 351));
        buttonDeleteServers = new QPushButton(informationsServerBox);
        buttonDeleteServers->setObjectName(QString::fromUtf8("buttonDeleteServers"));
        buttonDeleteServers->setGeometry(QRect(230, 13, 21, 20));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../ProgFTP-build-desktop-Qt_4_8_1_for_Desktop_-_MinGW__Qt_SDK__Debug/images/notsync.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonDeleteServers->setIcon(icon);
        label_2 = new QLabel(informationsServerBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 20, 81, 16));
        serverNameLabel = new QLabel(informationsServerBox);
        serverNameLabel->setObjectName(QString::fromUtf8("serverNameLabel"));
        serverNameLabel->setGeometry(QRect(100, 20, 121, 16));
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
        localFolderLabel = new QLabel(informationsServerBox);
        localFolderLabel->setObjectName(QString::fromUtf8("localFolderLabel"));
        localFolderLabel->setGeometry(QRect(100, 210, 141, 16));
        remoteFolderLabel = new QLabel(informationsServerBox);
        remoteFolderLabel->setObjectName(QString::fromUtf8("remoteFolderLabel"));
        remoteFolderLabel->setGeometry(QRect(100, 260, 141, 20));
        propertiesBox = new QGroupBox(windowServerManager);
        propertiesBox->setObjectName(QString::fromUtf8("propertiesBox"));
        propertiesBox->setGeometry(QRect(130, 400, 261, 71));
        autoLoginCheck = new QCheckBox(propertiesBox);
        autoLoginCheck->setObjectName(QString::fromUtf8("autoLoginCheck"));
        autoLoginCheck->setGeometry(QRect(10, 30, 101, 18));
        serversSelectProperties = new QComboBox(propertiesBox);
        serversSelectProperties->setObjectName(QString::fromUtf8("serversSelectProperties"));
        serversSelectProperties->setGeometry(QRect(110, 30, 121, 22));
        windowStart = new QWidget(centralWidget);
        windowStart->setObjectName(QString::fromUtf8("windowStart"));
        windowStart->setGeometry(QRect(0, 0, 431, 481));
        groupBox = new QGroupBox(windowStart);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(310, 270, 111, 151));
        buttonForum = new QPushButton(groupBox);
        buttonForum->setObjectName(QString::fromUtf8("buttonForum"));
        buttonForum->setGeometry(QRect(10, 20, 91, 23));
        buttonHelp = new QPushButton(groupBox);
        buttonHelp->setObjectName(QString::fromUtf8("buttonHelp"));
        buttonHelp->setGeometry(QRect(10, 50, 91, 23));
        buttonAboutProgFTP = new QPushButton(groupBox);
        buttonAboutProgFTP->setObjectName(QString::fromUtf8("buttonAboutProgFTP"));
        buttonAboutProgFTP->setGeometry(QRect(10, 80, 91, 23));
        buttonAboutQt = new QPushButton(groupBox);
        buttonAboutQt->setObjectName(QString::fromUtf8("buttonAboutQt"));
        buttonAboutQt->setGeometry(QRect(10, 110, 91, 23));
        buttonGoToProgFTP = new QPushButton(windowStart);
        buttonGoToProgFTP->setObjectName(QString::fromUtf8("buttonGoToProgFTP"));
        buttonGoToProgFTP->setGeometry(QRect(10, 430, 411, 41));
        addNewServerEdit = new QLineEdit(windowStart);
        addNewServerEdit->setObjectName(QString::fromUtf8("addNewServerEdit"));
        addNewServerEdit->setGeometry(QRect(180, 280, 113, 20));
        textBrowser = new QTextBrowser(windowStart);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 431, 261));
        label_12 = new QLabel(windowStart);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 280, 161, 16));
        label_13 = new QLabel(windowStart);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(80, 300, 16, 16));
        label_14 = new QLabel(windowStart);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(10, 320, 281, 16));
        label_15 = new QLabel(windowStart);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(10, 340, 261, 16));
        buttonRefreshServeurs = new QPushButton(windowStart);
        buttonRefreshServeurs->setObjectName(QString::fromUtf8("buttonRefreshServeurs"));
        buttonRefreshServeurs->setGeometry(QRect(270, 340, 21, 21));
        proftp->setCentralWidget(centralWidget);
        windowHome->raise();
        windowServerManager->raise();
        windowStart->raise();
        windowSync->raise();
        menuBar = new QMenuBar(proftp);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 431, 20));
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
        menuHome->addAction(actionHome);
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
        actionHome->setText(QApplication::translate("proftp", "Home", 0, QApplication::UnicodeUTF8));
        buttonServerManager->setText(QApplication::translate("proftp", "Server manager", 0, QApplication::UnicodeUTF8));
        buttonConnectServer->setText(QApplication::translate("proftp", "Connect", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("proftp", "Remote files :", 0, QApplication::UnicodeUTF8));
        buttonReturnDirectory->setText(QString());
        buttonAddFolderRemote->setText(QString());
        buttonDeleteFolderRemote->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem = remoteFolderView->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("proftp", "Time", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(3, QApplication::translate("proftp", "Group", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("proftp", "Owner", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("proftp", "Size", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("proftp", "Name", 0, QApplication::UnicodeUTF8));
        buttonDownload->setText(QApplication::translate("proftp", "Download", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("proftp", "Local files :", 0, QApplication::UnicodeUTF8));
        buttonAddFolderLocal->setText(QString());
        buttonDeleteFolderLocal->setText(QString());
        buttonUpload->setText(QApplication::translate("proftp", "Upload", 0, QApplication::UnicodeUTF8));
        buttonSync->setText(QApplication::translate("proftp", "Sync", 0, QApplication::UnicodeUTF8));
        buttonSynchroniseFolders->setText(QApplication::translate("proftp", "Synchronise folders", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("proftp", "Remote files :", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("proftp", "Local files :", 0, QApplication::UnicodeUTF8));
        buttonHome->setText(QApplication::translate("proftp", "Home", 0, QApplication::UnicodeUTF8));
        buttonAddServer->setText(QApplication::translate("proftp", "Add this server", 0, QApplication::UnicodeUTF8));
        informationsServerBox->setTitle(QApplication::translate("proftp", "Informations", 0, QApplication::UnicodeUTF8));
        buttonDeleteServers->setText(QString());
        label_2->setText(QApplication::translate("proftp", "Nom du server :", 0, QApplication::UnicodeUTF8));
        serverNameLabel->setText(QString());
        label_3->setText(QApplication::translate("proftp", "Adresse :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("proftp", "Login :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("proftp", "Password :", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("proftp", "Port :", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("proftp", "Local folder :", 0, QApplication::UnicodeUTF8));
        buttonChangeLocalFolder->setText(QApplication::translate("proftp", "Change", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("proftp", "Remote folder :", 0, QApplication::UnicodeUTF8));
        buttonChangeRemoteFolder->setText(QApplication::translate("proftp", "Change", 0, QApplication::UnicodeUTF8));
        localFolderLabel->setText(QString());
        remoteFolderLabel->setText(QApplication::translate("proftp", "/", 0, QApplication::UnicodeUTF8));
        propertiesBox->setTitle(QApplication::translate("proftp", "Properties", 0, QApplication::UnicodeUTF8));
        autoLoginCheck->setText(QApplication::translate("proftp", "Auto-login with", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("proftp", "More", 0, QApplication::UnicodeUTF8));
        buttonForum->setText(QApplication::translate("proftp", "Forum", 0, QApplication::UnicodeUTF8));
        buttonHelp->setText(QApplication::translate("proftp", "Help", 0, QApplication::UnicodeUTF8));
        buttonAboutProgFTP->setText(QApplication::translate("proftp", "About ProgFTP", 0, QApplication::UnicodeUTF8));
        buttonAboutQt->setText(QApplication::translate("proftp", "About Qt", 0, QApplication::UnicodeUTF8));
        buttonGoToProgFTP->setText(QApplication::translate("proftp", "Go to ProgFTP and add FTP server", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("proftp", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Bienvenue sur ProgFTP,</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">ce programme va vous permettre de synchroniser des dossiers \303\240 partir d'un serveur FTP sur votre ordinateur. Vous pouvez aussi t\303\251l\303\251charger ind\303\251pendandement des fichiers et les uploader. Avant de commencer, vous \303\252tes oblig\303\251 de cr\303\251er un serveur FTP.</span></p>\n"
"<p style=\"-qt-paragraph"
                        "-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Il existe de nombreux autres programmes de synchronisation de dossiers entre un serveur FTP et votre ordinateur, mais celui-ci est tr\303\250s l\303\251ger et simple d'utilisation. Il sera r\303\251guli\303\250rement mis \303\240 jour par son cr\303\251ateur, Dy006. En vous remerciant pour votre participation, ProgAzur.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("proftp", "Entrer le nom de votre serveur :", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("proftp", "ou", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("proftp", "Ajouter le fichier de configuration du serveur au r\303\251pertoire", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("proftp", "\"servers/\" du programme pluis cliquer sur ce bouton :", 0, QApplication::UnicodeUTF8));
        buttonRefreshServeurs->setText(QString());
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
