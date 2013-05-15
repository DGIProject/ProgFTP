#include "windowlogs.h"
#include "ui_windowlogs.h"
#include <QtGui>

windowLogs::windowLogs(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::windowLogs)
{
    ui->setupUi(this);

    setWindowTitle("Logs - ProgFTP");

    QString fileName = "progftp.log";
    QFile file(fileName);
    file.open(QIODevice::ReadOnly);
    QString ligne(file.readAll());

    ui->logsEdit->append(ligne);
    ui->sizeFileLogs->display(QString::number(file.size()));
}

windowLogs::~windowLogs()
{
    delete ui;
}
