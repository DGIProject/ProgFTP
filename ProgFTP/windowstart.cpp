#include "windowstart.h"
#include "ui_windowstart.h"
#include "windowhelp.h"

windowStart::windowStart(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::windowStart)
{
    ui->setupUi(this);
}

windowStart::~windowStart()
{
    delete ui;
}

void windowStart::on_buttonForum_clicked()
{

}

void windowStart::on_buttonHelp_clicked()
{
    windowHelp *help = new windowHelp();
    help->show();
}

void windowStart::on_buttonAboutProgFTP_clicked()
{

}

void windowStart::on_buttonAboutQt_clicked()
{

}

void windowStart::on_buttonGoToProgFTP_clicked()
{
    this->close();
}
