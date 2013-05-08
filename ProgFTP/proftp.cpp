#include "proftp.h"
#include "ui_proftp.h"
#include "windowhelp.h"
#include <QSettings>
#include <QMessageBox>
#include <QDir>
#include <QDebug>
#include <QtNetwork/QFtp>
#include <QtGui>
#include <QDirModel>
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <QtNetwork/QFtp>
#include <QHttp>
#include <QNetworkReply>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QUrl>
#include <QTcpSocket>
#include <QTreeWidgetItem>
#include <QHash>
#include <QFileSystemModel>
#include <QProgressDialog>

proftp::proftp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::proftp)
{
    ui->setupUi(this);
    ui->windowServerManager->hide();
    ui->windowSync->hide();

    setWindowTitle("ProgFTP");

    ui->actionDisconnect->setEnabled(false);
    ui->actionSynchronise_folders->setEnabled(false);
    ui->actionDownload_file->setEnabled(false);
    ui->actionUpload_file->setEnabled(false);

    ui->buttonSynchroniseFolders->setEnabled(false);
    ui->buttonDownload->setEnabled(false);
    ui->buttonUpload->setEnabled(false);
    ui->buttonReturnDirectory->setEnabled(false);

    ui->buttonReturnDirectory->setIcon(QPixmap("images/cdtoparent.png"));

    progressDialog = new QProgressDialog(this);

    connect(progressDialog, SIGNAL(canceled()), this, SLOT(cancelDownloadOrUpload()));

    QDirModel *model = new QDirModel(this);

    ui->localFolderView->setModel(model);
    ui->localFolderView->setEnabled(false);

    ui->localFilesView->setEnabled(false);

    dirModel = new QFileSystemModel(this);
    dirModel->setFilter(QDir::NoDotAndDotDot | QDir::AllDirs);

    ui->remoteFolderView->setEnabled(false);
    ui->remoteFolderView->setRootIsDecorated(false);
    ui->remoteFolderView->header()->setStretchLastSection(false);

    connect(ui->remoteFolderView, SIGNAL(itemActivated(QTreeWidgetItem*,int)), this, SLOT(processItem(QTreeWidgetItem*,int)));

    ui->localFilesSync->setEnabled(false);
    ui->remoteFilesSync->setEnabled(false);

    connect(ui->actionAbout_Qt, SIGNAL(triggered()), qApp, SLOT(aboutQt()));
    connect(ui->actionExit, SIGNAL(triggered()), qApp, SLOT(quit()));

    proftp::loadServersList();

    if(ui->serversList->item(0))
    {
        ui->serversList->setCurrentRow(0);
        proftp::on_serversList_pressed();
    }

    if(QFile::exists("properties.ini"))
    {
        QSettings settings("properties.ini", QSettings::IniFormat);

        if(settings.value("autologin").toBool() == true)
        {
            ui->autoLoginCheck->setChecked(true);

            proftp::on_buttonConnectServer_clicked();
        }
    }
}

proftp::~proftp()
{
    delete ui;
}

void proftp::loadServersList()
{
    ui->serversList->clear();
    ui->serversSelect->clear();
    ui->serversSelectProperties->clear();

    QDir dir("servers/");
    QStringList filters("*.ini" );
    dir.setNameFilters(filters);
    dir.absolutePath();
    QStringList list(dir.entryList());

    ui->serversList->addItems(list);
    ui->serversSelect->addItems(list);
    ui->serversSelectProperties->addItems(list);
}

void proftp::on_buttonConnectServer_clicked()
{
    if(statut == 1)
    {
        ftp->abort();
        ftp->deleteLater();
        ftp = 0;

        ui->remoteFolderView->clear();
        ui->remoteFolderView->setEnabled(false);
        ui->localFolderView->reset();
        ui->localFolderView->setEnabled(false);
        ui->localFilesView->reset();
        ui->localFilesView->setEnabled(false);
        ui->remoteFilesSync->clear();
        ui->remoteFilesSync->setEnabled(false);
        ui->localFilesSync->clear();
        ui->localFilesSync->setEnabled(false);
        ui->actionConnect->setEnabled(true);
        ui->actionDisconnect->setEnabled(false);
        ui->actionSynchronise_folders->setEnabled(false);
        ui->actionDownload_file->setEnabled(false);
        ui->actionUpload_file->setEnabled(false);
        ui->buttonSynchroniseFolders->setEnabled(false);
        ui->buttonDownload->setEnabled(false);
        ui->logFTP->append("Stopping ftp connection");
        ui->buttonConnectServer->setText("Connect");

        statut = 0;
    }
    else
    {
        if(ui->serversSelect->currentText() != "")
        {
            proftp::connectToFtp();
        }
        else
        {
            QMessageBox::critical(this,"Error","You need to have at least one ftp server");
        }
    }
}

void proftp::connectToFtp()
{
    QString nameFileT = "servers/" + ui->serversSelect->currentText();

    QSettings settings(nameFileT, QSettings::IniFormat);

    QString path = settings.value("localfolder").toString();

    dirModel->setRootPath(path);

    QModelIndex indexDir = dirModel->index(QString(settings.value("localfolder").toString()));

    ui->localFolderView->setModel(dirModel);
    ui->localFolderView->expand(indexDir);
    ui->localFolderView->scrollTo(indexDir);
    ui->localFolderView->setEnabled(true);

    QDir dir(QString(settings.value("localfolder").toString()));
    dir.absolutePath();
    QStringList listLocalFiles(dir.entryList());

    ui->localFilesView->clear();
    ui->localFilesView->addItems(listLocalFiles);
    ui->localFilesView->setEnabled(true);

    for(int x = 0; x < ui->localFilesView->count(); x++)
    {
        QFileInfo fileInfo = ui->localFilesView->item(x)->text();

        if(fileInfo.suffix() != "")
        {
            ui->localFilesView->item(x)->setIcon(QPixmap("images/file.png"));
        }
        else
        {
            ui->localFilesView->item(x)->setIcon(QPixmap("images/dir.png"));
        }
    }

    ui->remoteFolderView->clear();

    QDir dirSync(QString(settings.value("localfolder").toString()));
    dirSync.setFilter(QDir::Files);
    dirSync.absolutePath();
    QStringList listLocalFilesSync(dirSync.entryList());

    ui->localFilesSync->addItems(listLocalFilesSync);
    ui->localFilesSync->setEnabled(true);

    ui->remoteFilesSync->clear();

    ui->logFTP->append("Attempt to connect to the server ...");

    ui->actionDisconnect->setEnabled(true);
    ui->actionSynchronise_folders->setEnabled(true);
    ui->actionDownload_file->setEnabled(true);
    ui->actionUpload_file->setEnabled(true);
    ui->actionConnect->setEnabled(false);
    ui->buttonSynchroniseFolders->setEnabled(true);
    ui->buttonDownload->setEnabled(true);
    ui->buttonUpload->setEnabled(true);
    ui->buttonConnectServer->setText("Disconnect");

    statut = 1;

    ftp = new QFtp(this);

    connect(ftp, SIGNAL(commandFinished(int,bool)), this, SLOT(ftpCommandFinished(int,bool)));
    connect(ftp, SIGNAL(listInfo(QUrlInfo)), this, SLOT(addToList(QUrlInfo)));
    connect(ftp, SIGNAL(dataTransferProgress(qint64,qint64)), this, SLOT(updateDataTransferProgress(qint64,qint64)));

    ftp->connectToHost(QString(settings.value("adress").toString()), 21);

    if(settings.value("login").toString() == "" || settings.value("password").toString() == "")
    {
        ftp->login();
    }
    else
    {
        ftp->login(QString(settings.value("login").toString()),QString(settings.value("password").toString()));
    }

    ftp->cd(QString(settings.value("remotefolder").toString()));
}

void proftp::ftpCommandFinished(int, bool error)
{
    if (ftp->currentCommand() == QFtp::ConnectToHost)
    {
        if (error)
        {
            ui->logFTP->append("<span style=\"color: red\">Unabled to connect to the server</span>");
        }

        ui->logFTP->append("<span style=\"color: green\">Connected from the server</span>");
    }

    if (ftp->currentCommand() == QFtp::Login)
        ftp->list();

    if (ftp->currentCommand() == QFtp::Get)
    {
        if (error)
        {
            ui->logFTP->append(tr("<span style=\"color: red\">Canceled download</span>"));
            file->close();
            file->remove();
        }
        else
        {
            ui->logFTP->append(tr("<span style=\"color: green\">Downloaded to current directory</span>"));
            file->close();
        }

        delete file;

        progressDialog->hide();
        ui->buttonDownload->setEnabled(true);
    }
    else if(ftp->currentCommand() == QFtp::Put)
    {
        if (error)
        {
            ui->logFTP->append(tr("<span style=\"color: red\">Canceled upload</span>"));
            file->close();
            file->remove();
        }
        else
        {
            ui->logFTP->append(tr("<span style=\"color: green\">Upload the current directory</span>"));
            file->close();
        }

        delete file;

        progressDialog->hide();
        ui->buttonUpload->setEnabled(true);
    }
    else if (ftp->currentCommand() == QFtp::List)
    {
        if (isDirectory.isEmpty())
        {
            ui->remoteFolderView->addTopLevelItem(new QTreeWidgetItem(QStringList() << tr("<empty>")));
            ui->remoteFolderView->setEnabled(false);
        }
    }
}

void proftp::on_buttonAddServer_clicked()
{
    if(ui->addServerEdit->text() != "")
    {
        nameFileSettings = "servers/" + ui->addServerEdit->text() + ".ini";

        QSettings settings(nameFileSettings, QSettings::IniFormat);
        settings.setValue("name", ui->addServerEdit->text());

        ui->addServerEdit->clear();
    }
    else
    {
        QMessageBox::critical(this,"Error","You need to enter a server name");
    }

    proftp::loadServersList();
}

void proftp::on_buttonDeleteServers_clicked()
{
    QString nameFile = "servers/" + ui->serversList->currentItem()->text();

    QFile(nameFile).remove();

    proftp::loadServersList();
}

void proftp::on_remoteFilesList_doubleClicked()
{
    QMessageBox::information(this,"Information","You are selected an item.");
}

void proftp::on_buttonChangeLocalFolder_clicked()
{
    QString linkFolder = QFileDialog::getExistingDirectory(this,"Select this folder");

    if(linkFolder != "")
    {
        int sizeOfLinkFolder = linkFolder.length() -1;

        if (QString(linkFolder.at(sizeOfLinkFolder)) != "/")
        {
            linkFolder.append("/");
        }

        ui->localFolderLabel->setText(linkFolder);
    }
}

void proftp::on_buttonChangeRemoteFolder_clicked()
{

}

void proftp::on_serversList_pressed()
{
    QString nameFile = "servers/"+ ui->serversList->currentItem()->text();

    QSettings settings(nameFile, QSettings::IniFormat);

    ui->serverNameLabel->setText(QString(settings.value("name").toString()));
    ui->serverAdressEdit->setText(QString(settings.value("adress").toString()));
    ui->serverLoginEdit->setText(QString(settings.value("login").toString()));
    ui->serverPasswordEdit->setText(QString(settings.value("password").toString()));
    ui->serverPortEdit->setText(QString(settings.value("port").toString()));
    ui->localFolderLabel->setText(QString(settings.value("localfolder").toString()));
    ui->remoteFolderEdit->setText(QString(settings.value("remotefolder").toString()));
}

void proftp::on_buttonSaveChangesServer_clicked()
{
    QString nameFile = "servers/" + ui->serversList->currentItem()->text();

    QSettings settings(nameFile, QSettings::IniFormat);
    settings.setValue("adress", ui->serverAdressEdit->text());
    settings.setValue("login", ui->serverLoginEdit->text());
    settings.setValue("password", ui->serverPasswordEdit->text());
    settings.setValue("port", ui->serverPortEdit->text());
    settings.setValue("localfolder", ui->localFolderLabel->text());
    settings.setValue("remotefolder", ui->remoteFolderEdit->text());

    QMessageBox::information(this,"Information","Your changes has been saved");
}

void proftp::on_buttonReturnDirectory_clicked()
{
    isDirectory.clear();
    currentPath = currentPath.left(currentPath.lastIndexOf('/'));
    if (currentPath.isEmpty()) {
        ui->buttonReturnDirectory->setEnabled(false);
        ftp->cd("/");
    } else {
        ftp->cd(currentPath);
    }
    ftp->list();

    ui->remoteFolderView->clear();
}

void proftp::addToList(const QUrlInfo &urlInfo)
{
    QTreeWidgetItem *item = new QTreeWidgetItem;
    item->setText(0, urlInfo.name());
    item->setText(1, QString::number(urlInfo.size()));
    item->setText(2, urlInfo.owner());
    item->setText(3, urlInfo.group());
    item->setText(4, urlInfo.lastModified().toString("MMM dd yyyy"));

    QPixmap pixmap(urlInfo.isDir() ? "images/dir.png" : "images/file.png");
    item->setIcon(0, pixmap);

    isDirectory[urlInfo.name()] = urlInfo.isDir();
    ui->remoteFolderView->addTopLevelItem(item);
    if (!ui->remoteFolderView->currentItem()) {
        ui->remoteFolderView->setCurrentItem(ui->remoteFolderView->topLevelItem(0));
        ui->remoteFolderView->setEnabled(true);
    }

    QStringList listRemoteFiles(urlInfo.name());

    ui->remoteFilesSync->addItems(listRemoteFiles);
    ui->remoteFilesSync->setEnabled(true);
}

void proftp::processItem(QTreeWidgetItem *item, int /*column*/)
{
    QString name = item->text(0);
    if (isDirectory.value(name)) {
        ui->remoteFolderView->clear();
        isDirectory.clear();
        currentPath += '/';
        currentPath += name;
        ftp->cd(name);
        ftp->list();
        ui->buttonReturnDirectory->setEnabled(true);
    }

    qDebug() << currentPath;
}

void proftp::on_localFolderView_clicked(const QModelIndex &index)
{
    QString path = dirModel->fileInfo(index).absoluteFilePath();

    linkLocalFolderView = path;

    int sizeOfLinkLocalFolderView = linkLocalFolderView.length() -1;

    if (QString(linkLocalFolderView.at(sizeOfLinkLocalFolderView)) != "/")
    {
        linkLocalFolderView.append("/");
    }

    QDir dir(path);
    dir.absolutePath();
    QStringList listLocalFiles(dir.entryList());

    ui->localFilesView->clear();
    ui->localFilesView->addItems(listLocalFiles);

    for(int x = 0; x < ui->localFilesView->count(); x++)
    {
        QFileInfo fileInfo = ui->localFilesView->item(x)->text();

        if(fileInfo.suffix() != "")
        {
            ui->localFilesView->item(x)->setIcon(QPixmap("images/file.png"));
        }
        else
        {
            ui->localFilesView->item(x)->setIcon(QPixmap("images/dir.png"));
        }
    }
}

void proftp::on_buttonSynchroniseFolders_clicked()
{
    for(int x = 0; x < ui->localFilesSync->count();  x++)
    {
        for(int y = 0; y < ui->remoteFilesSync->count(); y++)
        {
            if(ui->remoteFilesSync->item(y)->text() == ui->localFilesSync->item(x)->text())
            {
                ui->remoteFilesSync->item(y)->setText(ui->remoteFilesSync->item(y)->text() + " Synced");
                ui->remoteFilesSync->item(y)->setIcon(QPixmap("images/sync.png"));
            }
        }
    }

    for(int x = 0; x < ui->remoteFilesSync->count(); x++)
    {
        if(!ui->remoteFilesSync->item(x)->text().contains("Synced", Qt::CaseInsensitive))
        {
            qDebug() << "good";

            QString fileName = "D:/" + ui->remoteFilesSync->item(x)->text();

            file = new QFile(fileName);
            if (!file->open(QIODevice::WriteOnly)) {
                QMessageBox::information(this, tr("FTP"),
                                         tr("Unable to save the file %1: %2.")
                                         .arg(fileName).arg(file->errorString()));
                delete file;
                return;
            }

            ftp->get(ui->remoteFilesSync->item(x)->text(), file);

            progressDialog->setLabelText(tr("Downloading ...").arg(fileName));
            progressDialog->exec();
        }
    }
}

void proftp::on_buttonDownload_clicked()
{
    QString fileName = linkLocalFolderView  + ui->remoteFolderView->currentItem()->text(0);

    qDebug() << linkLocalFolderView;

    if (QFile::exists(fileName))
    {
        int answer = QMessageBox::question(this,"Question","This file already exist, do you want to remplace it ?", QMessageBox::Yes | QMessageBox::No);

        if(!answer == QMessageBox::Yes)
        {
            exit(0);
        }
    }

    file = new QFile(fileName);
    if (!file->open(QIODevice::WriteOnly)) {
        QMessageBox::information(this, tr("FTP"),
                                 tr("Unable to save the file %1: %2.")
                                 .arg(fileName).arg(file->errorString()));
        delete file;
        return;
    }

    ftp->get(ui->remoteFolderView->currentItem()->text(0), file);

    ui->buttonDownload->setEnabled(false);

    progressDialog->setLabelText(tr("Downloading ...").arg(fileName));
    progressDialog->exec();

    proftp::connectToFtp();
}

void proftp::on_buttonUpload_clicked()
{
    QString nameFile = linkLocalFolderView + ui->localFilesView->currentItem()->text();

    file = new QFile(nameFile);

    if(file->open(QIODevice::ReadOnly))
    {
        ftp->put(file, ui->localFilesView->currentItem()->text());

        ui->buttonUpload->setEnabled(false);

        progressDialog->setLabelText(tr("Uploading ..."));
        progressDialog->exec();

        proftp::connectToFtp();
    }
    else
    {
        QMessageBox::critical(this,"Error","We can't find the selected file");
    }
}

void proftp::updateDataTransferProgress(qint64 readBytes, qint64 totalBytes)
{
    progressDialog->setMaximum(totalBytes);
    progressDialog->setValue(readBytes);
}

void proftp::cancelDownloadOrUpload()
{
    ftp->abort();

    if (file->exists()) {
        file->close();
        file->remove();
    }
    delete file;
}

void proftp::on_remoteFolderView_doubleClicked(const QModelIndex &index)
{
    QFileInfo fileInfo = ui->remoteFolderView->currentItem()->text(0);

    if(!fileInfo.isDir())
    {
        QString nameFileT = "servers/" + ui->serversSelect->currentText();

        QSettings settings(nameFileT, QSettings::IniFormat);

        QString fileName = ui->remoteFolderView->currentItem()->text(0);

        if (QFile::exists(fileName))
        {
            int answer = QMessageBox::question(this,"Question","This file already exist, do you want to remplace it ?", QMessageBox::Yes | QMessageBox::No);

            if(!answer == QMessageBox::Yes)
            {
                exit(0);
            }
        }

        file = new QFile(fileName);
        if (!file->open(QIODevice::WriteOnly)) {
            QMessageBox::information(this, tr("FTP"),
                                     tr("Unable to save the file %1: %2.")
                                     .arg(fileName).arg(file->errorString()));
            delete file;
            return;
        }

        ftp->get(ui->remoteFolderView->currentItem()->text(0), file);

        ui->logFTP->append(tr("Downloading ...").arg(fileName));
        progressDialog->setLabelText(tr("Downloading ...").arg(fileName));
        ui->buttonDownload->setEnabled(false);
        progressDialog->exec();
    }
}

void proftp::on_buttonServerManager_clicked()
{
    ui->windowHome->hide();
    ui->windowServerManager->show();
}

void proftp::on_buttonHome_clicked()
{
    ui->windowServerManager->hide();
    ui->windowHome->show();
}

void proftp::on_autoLoginCheck_clicked()
{
    QSettings settings("properties.ini", QSettings::IniFormat);

    if(ui->autoLoginCheck->isChecked() == true)
    {
        settings.setValue("autologin", true);
        settings.setValue("servername", ui->serversSelectProperties->currentText());
    }
    else
    {
        settings.setValue("autologin", false);
    }
}

void proftp::on_serversSelectProperties_currentIndexChanged()
{
    QSettings settings("properties.ini", QSettings::IniFormat);

    settings.setValue("servername", ui->serversSelectProperties->currentText());
}

void proftp::on_actionServer_manager_triggered()
{
    proftp::on_buttonServerManager_clicked();
}

void proftp::on_actionLogs_triggered()
{

}

void proftp::on_actionConnect_triggered()
{
    proftp::on_buttonConnectServer_clicked();
}

void proftp::on_actionDisconnect_triggered()
{
    proftp::on_buttonConnectServer_clicked();
}

void proftp::on_actionSynchronise_folders_triggered()
{
    proftp::on_buttonSynchroniseFolders_clicked();
}

void proftp::on_actionDownload_file_triggered()
{
    proftp::on_buttonDownload_clicked();
}

void proftp::on_actionUpload_file_triggered()
{
    proftp::on_buttonUpload_clicked();
}

void proftp::on_actionHelp_triggered()
{
    windowHelp *w = new windowHelp(this);
    w->show();
}

void proftp::on_actionAbout_ProgFTP_triggered()
{
    QProcess::execute("cmd /c start http://pox.alwaysdata.net/programs.php?p=progftp");
}

void proftp::on_buttonSync_clicked()
{
    if(ui->buttonSync->text() == "Sync")
    {
        ui->buttonSync->setText("Transfert");
        ui->windowDataTransfert->hide();
        ui->windowSync->show();
    }
    else
    {
        ui->buttonSync->setText("Sync");
        ui->windowSync->hide();
        ui->windowDataTransfert->show();
    }
}
