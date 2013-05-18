#ifndef PROFTP_H
#define PROFTP_H

#include <QMainWindow>
#include <QtNetwork/QFtp>
#include <QDirModel>
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <QByteArray>
#include <QtNetwork/QFtp>
#include <QHttp>
#include <QNetworkReply>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QUrl>
#include <QTcpSocket>
#include <QNetworkConfigurationManager>
#include <QTreeWidgetItem>
#include <QHash>
#include <QFileSystemModel>
#include <QProgressDialog>
#include <QThread>
#include <QSystemTrayIcon>

namespace Ui {
class proftp;
}

class proftp : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit proftp(QWidget *parent = 0);
    ~proftp();

    void loadServersList();

private slots:
    void on_buttonConnectServer_clicked();

    void connectToFtp();

    void ftpCommandFinished(int commandId, bool error);

    void on_buttonAddServer_clicked();

    void on_buttonDeleteServers_clicked();

    void on_serversList_pressed();

    void on_serverAdressEdit_editingFinished();

    void on_serverLoginEdit_editingFinished();

    void on_serverPasswordEdit_editingFinished();

    void on_serverPortEdit_editingFinished();

    void on_buttonChangeLocalFolder_clicked();

    void on_buttonChangeRemoteFolder_clicked();

    void saveChanges();

    void on_buttonReturnDirectory_clicked();

    void addToList(const QUrlInfo &urlInfo);

    void processItem(QTreeWidgetItem *item, int column);

    void on_localFolderView_clicked(const QModelIndex &index);

    void on_buttonSynchroniseFolders_clicked();

    void on_buttonDownload_clicked();

    void on_buttonUpload_clicked();

    void updateDataTransferProgress(qint64 readBytes, qint64 totalBytes);

    void cancelDownloadOrUpload();

    void on_remoteFolderView_doubleClicked(const QModelIndex &index);

    void on_buttonHome_clicked();

    void on_buttonServerManager_clicked();

    void on_autoLoginCheck_clicked();

    void on_serversSelectProperties_currentIndexChanged();

    void on_actionHome_triggered();

    void on_actionServer_manager_triggered();

    void on_actionLogs_triggered();

    void on_actionConnect_triggered();

    void on_actionDisconnect_triggered();

    void on_actionSynchronise_folders_triggered();

    void on_actionDownload_file_triggered();

    void on_actionUpload_file_triggered();

    void on_actionHelp_triggered();

    void on_actionAbout_ProgFTP_triggered();

    void on_buttonSync_clicked();

    void on_logsFTP_textChanged();

    void on_buttonGoToProgFTP_clicked();

    void on_buttonForum_clicked();

    void on_buttonHelp_clicked();

    void on_buttonAboutProgFTP_clicked();

    void on_buttonRefreshServeurs_clicked();

    void hideShowWindow();

private:
    Ui::proftp *ui;

public:
    QHash<QString, bool> isDirectory;
    QString currentPath;
    QFtp *ftp;

    QFileSystemModel *dirModel;

    QProgressDialog *progressDialog;

    QFile *file;

    QString nameFileSettings;
    QString linkLocalFolderView;

    QSystemTrayIcon *sticon;
    QMenu *stmenu;
    QMenu *menuServer;
    QAction *actionHideShowWindow;
    QAction *actionExit;
    QAction *actionConnectToLastServer;
    QAction *actionDisconnectToLastServer;
    QAction *actionSyncFiles;

    int statut;

protected:
    void closeEvent(QCloseEvent *event);

};

#endif // PROFTP_H
