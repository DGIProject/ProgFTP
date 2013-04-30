#include "proftp.h"
#include "ui_proftp.h"
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

proftp::proftp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::proftp)
{
    ui->setupUi(this);

    ui->buttonReturnDirectory->setEnabled(false);

    ui->buttonReturnDirectory->setIcon(QPixmap("images/cdtoparent.png"));

    model = new QDirModel;
    model->setReadOnly(false);
    model->setSorting(QDir::DirsFirst | QDir::IgnoreCase | QDir::Name);
    ui->localFolderView->setModel(model);
    ui->localFolderView->setEnabled(false);

    ui->localFilesView->setEnabled(false);
    ui->localFilesView->setRootIsDecorated(false);
    ui->localFilesView->header()->setStretchLastSection(false);

    ui->remoteFolderView->setEnabled(false);
    ui->remoteFolderView->setRootIsDecorated(false);
    ui->remoteFolderView->header()->setStretchLastSection(false);

    connect(ui->remoteFolderView, SIGNAL(itemActivated(QTreeWidgetItem*,int)),
            this, SLOT(processItem(QTreeWidgetItem*,int)));

    QSettings settings("properties.ini", QSettings::IniFormat);

    proftp::loadServersList();

    ui->serversList->setCurrentRow(0);
    proftp::on_serversList_pressed();
}

proftp::~proftp()
{
    delete ui;
}

void proftp::loadServersList()
{
    ui->serversList->clear();
    ui->serversSelect->clear();

    QDir dir("servers/");
    QStringList filters("*.ini" );
    dir.setNameFilters(filters);
    dir.absolutePath();
    QStringList list(dir.entryList());

    qDebug() << list;

    ui->serversList->addItems(list);
    ui->serversSelect->addItems(list);
}

void proftp::on_buttonConnectServer_clicked()
{
    if(ui->serversSelect->currentText() != "")
    {
        QString nameFileT = "servers/" + ui->serversSelect->currentText();

        QSettings settings(nameFileT, QSettings::IniFormat);

        QModelIndex index = model->index(QString(settings.value("localfolder").toString()));

        ui->localFolderView->expand(index);
        ui->localFolderView->scrollTo(index);
        ui->localFolderView->setCurrentIndex(index);
        ui->localFolderView->resizeColumnToContents(0);
        ui->localFolderView->setEnabled(true);

        ui->remoteFolderView->clear();

        ui->logFTP->append("Tentative de connexion au serveur...");

        ftp = new QFtp(this);

        connect(ftp, SIGNAL(commandFinished(int,bool)),
                this, SLOT(ftpCommandFinished(int,bool)));
        connect(ftp, SIGNAL(listInfo(QUrlInfo)),
                this, SLOT(addToList(QUrlInfo)));

        ftp->connectToHost(QString(settings.value("adress").toString()), 21);
        ftp->login(QString(settings.value("login").toString()),QString(settings.value("password").toString()));
        ftp->cd(QString(settings.value("remotefolder").toString()));
    }
    else
    {
        QMessageBox::critical(this,"Error","You need to have at least one ftp server");
    }
}

void proftp::ftpCommandFinished(int, bool error)
{
    if (ftp->currentCommand() == QFtp::ConnectToHost) {
        if (error) {
            QMessageBox::information(this, tr("FTP"),
                                     tr("Unable to connect to the FTP server "
                                        "at %1. Please check that the host "
                                        "name is correct."));
        }

        ui->logFTP->append("<span style=\"color: green\">Connexion réussie.</span>");
    }

    if (ftp->currentCommand() == QFtp::Login)
        ftp->list();

    if (ftp->currentCommand() == QFtp::Get) {
        if (error) {
            ui->logFTP->append(tr("Canceled download of %1."));
            //file->close();
            //file->remove();
        } else {
            ui->logFTP->append(tr("Downloaded %1 to current directory."));
            //file->close();
        }
        //delete file;
        //progressDialog->hide();
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
        nameFile = "servers/" + ui->addServerEdit->text() + ".ini";

        QSettings settings(nameFile, QSettings::IniFormat);
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

    ui->localFolderLabel->setText(linkFolder);
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

    qDebug() << currentPath;

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

void proftp::addToListLocal(const QUrlInfo &urlInfo)
{
    QTreeWidgetItem *item = new QTreeWidgetItem;
    item->setText(0, urlInfo.name());
    item->setText(1, QString::number(urlInfo.size()));
    item->setText(2, urlInfo.owner());
    item->setText(3, urlInfo.group());
    item->setText(4, urlInfo.lastModified().toString("MMM dd yyyy"));

    QPixmap pixmap(urlInfo.isDir() ? "images/dir.png" : "images/file.png");
    item->setIcon(0, pixmap);

    ui->localFilesView->addTopLevelItem(item);
    if (!ui->localFilesView->currentItem()) {
        ui->localFilesView->setCurrentItem(ui->localFilesView->topLevelItem(0));
        ui->localFilesView->setEnabled(true);
    }
}

void proftp::on_localFolderView_doubleClicked(const QModelIndex &index)
{
    qDebug() << index;
}
