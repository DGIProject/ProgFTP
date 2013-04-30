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

namespace Ui {
class proftp;
}

class proftp : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit proftp(QWidget *parent = 0);
    ~proftp();

private slots:
    void loadServersList();

    void on_buttonConnectServer_clicked();

    void ftpCommandFinished(int commandId, bool error);

    void on_buttonAddServer_clicked();

    void on_buttonDeleteServers_clicked();

    void on_remoteFilesList_doubleClicked();

    void on_buttonChangeLocalFolder_clicked();

    void on_buttonChangeRemoteFolder_clicked();

    void on_serversList_pressed();

    void on_buttonSaveChangesServer_clicked();

    void on_buttonReturnDirectory_clicked();

    void addToList(const QUrlInfo &urlInfo);

    void processItem(QTreeWidgetItem *item, int column);

    void addToListLocal(const QUrlInfo &urlInfo);

    void on_localFolderView_doubleClicked(const QModelIndex &index);

private:
    Ui::proftp *ui;

public:
    QHash<QString, bool> isDirectory;
    QString currentPath;
    QFtp *ftp;
    QDirModel* model;

    QString nameFile;

};

#endif // PROFTP_H
