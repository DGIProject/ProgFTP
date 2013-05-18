#include "windowaddserver.h"
#include "ui_windowaddserver.h"
#include "proftp.h"
#include <QtGui>

windowAddServer::windowAddServer(QWidget *parent, QString serverName) :
    QDialog(parent),
    ui(new Ui::windowAddServer)
{
    ui->setupUi(this);

    setWindowTitle("Add server - ProgFTP");

    ui->windowEnterSyncModule->hide();

    ui->serverNameLabel->setText(serverName);
}

windowAddServer::~windowAddServer()
{
    delete ui;
}

void windowAddServer::on_buttonChangeLocalFolder_clicked()
{
    QString linkFolder = QFileDialog::getExistingDirectory(this,tr("Select this folder"));

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

void windowAddServer::on_buttonChangeRemoteFolder_clicked()
{
    QString linkFolder = QInputDialog::getText(this, tr("Remote link"), tr("Enter the remote link :"));

    if(linkFolder != "")
    {
        ui->remoteFolderLabel->setText(linkFolder);
    }
}

void windowAddServer::on_buttonNextStepOrFinish_clicked()
{
    if(ui->buttonNextStepOrFinish->text() == "Finish")
    {
        QString nameFile = "servers/" + ui->serverNameLabel->text() + ".ini";

        QSettings settings(nameFile, QSettings::IniFormat);
        settings.setValue("adress", ui->serverAdressEdit->text());
        settings.setValue("login", ui->serverLoginEdit->text());
        settings.setValue("password", ui->serverPasswordEdit->text());
        settings.setValue("port", ui->serverPortEdit->text());
        settings.setValue("localfolder", ui->localFolderLabel->text());
        settings.setValue("remotefolder", ui->remoteFolderLabel->text());

        this->close();
    }
    else
    {
        if(ui->serverAdressEdit->text() != "")
        {
            if(ui->accountBox->isChecked() == true)
            {
                if(ui->serverLoginEdit->text() != "" && ui->serverPasswordEdit->text() != "")
                {
                    ui->windowEnterBase->hide();
                    ui->windowEnterSyncModule->show();

                    ui->buttonNextStepOrFinish->setText("Finish");
                }
                else
                {
                    QMessageBox::critical(this,"Error","You need to enter your idents");
                }
            }
            else
            {
                ui->windowEnterBase->hide();
                ui->windowEnterSyncModule->show();

                ui->buttonNextStepOrFinish->setText("Finish");
            }
        }
        else
        {
            QMessageBox::critical(this,"Error","You need to enter the adresse of the FTP server");
        }
    }
}
