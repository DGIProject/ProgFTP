#include "windowhelp.h"
#include "ui_windowhelp.h"
#include <QtGui>

windowHelp::windowHelp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::windowHelp)
{
    ui->setupUi(this);

    setWindowTitle("Help - ProgFTP");
}

windowHelp::~windowHelp()
{
    delete ui;
}
