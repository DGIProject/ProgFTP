#ifndef WINDOWSTART_H
#define WINDOWSTART_H

#include <QDialog>

namespace Ui {
class windowStart;
}

class windowStart : public QDialog
{
    Q_OBJECT
    
public:
    explicit windowStart(QWidget *parent = 0);
    ~windowStart();
    
private slots:
    void on_buttonForum_clicked();

    void on_buttonHelp_clicked();

    void on_buttonAboutProgFTP_clicked();

    void on_buttonAboutQt_clicked();

    void on_buttonGoToProgFTP_clicked();

private:
    Ui::windowStart *ui;
};

#endif // WINDOWSTART_H
