#ifndef WINDOWLOGS_H
#define WINDOWLOGS_H

#include <QDialog>

namespace Ui {
class windowLogs;
}

class windowLogs : public QDialog
{
    Q_OBJECT
    
public:
    explicit windowLogs(QWidget *parent = 0);
    ~windowLogs();
    
private:
    Ui::windowLogs *ui;
};

#endif // WINDOWLOGS_H
