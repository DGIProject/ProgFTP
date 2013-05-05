#include "windowhelp.h"
#include "ui_windowhelp.h"

windowHelp::windowHelp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::windowHelp)
{
    ui->setupUi(this);
}

windowHelp::~windowHelp()
{
    delete ui;
}
