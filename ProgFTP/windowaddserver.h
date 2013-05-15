#ifndef WINDOWADDSERVER_H
#define WINDOWADDSERVER_H

#include <QDialog>

namespace Ui {
class windowAddServer;
}

class windowAddServer : public QDialog
{
    Q_OBJECT
    
public:
    explicit windowAddServer(QWidget *parent = 0, QString serverName = 0);
    ~windowAddServer();

private slots:
    void on_buttonChangeLocalFolder_clicked();

    void on_buttonChangeRemoteFolder_clicked();

    void on_buttonNextStepOrFinish_clicked();

private:
    Ui::windowAddServer *ui;
};

#endif // WINDOWADDSERVER_H
