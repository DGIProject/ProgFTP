#ifndef WINDOWHELP_H
#define WINDOWHELP_H

#include <QDialog>

namespace Ui {
class windowHelp;
}

class windowHelp : public QDialog
{
    Q_OBJECT
    
public:
    explicit windowHelp(QWidget *parent = 0);
    ~windowHelp();
    
private:
    Ui::windowHelp *ui;
};

#endif // WINDOWHELP_H
