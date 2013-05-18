/********************************************************************************
** Form generated from reading UI file 'windowlogs.ui'
**
** Created: Fri May 17 22:58:49 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWLOGS_H
#define UI_WINDOWLOGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_windowLogs
{
public:
    QDialogButtonBox *buttonBox;
    QTextEdit *logsEdit;
    QLCDNumber *sizeFileLogs;
    QLabel *label;

    void setupUi(QDialog *windowLogs)
    {
        if (windowLogs->objectName().isEmpty())
            windowLogs->setObjectName(QString::fromUtf8("windowLogs"));
        windowLogs->resize(400, 300);
        windowLogs->setMinimumSize(QSize(400, 300));
        windowLogs->setMaximumSize(QSize(400, 300));
        buttonBox = new QDialogButtonBox(windowLogs);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(230, 260, 161, 41));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        logsEdit = new QTextEdit(windowLogs);
        logsEdit->setObjectName(QString::fromUtf8("logsEdit"));
        logsEdit->setGeometry(QRect(0, 0, 401, 261));
        logsEdit->setTextInteractionFlags(Qt::NoTextInteraction);
        sizeFileLogs = new QLCDNumber(windowLogs);
        sizeFileLogs->setObjectName(QString::fromUtf8("sizeFileLogs"));
        sizeFileLogs->setGeometry(QRect(90, 270, 61, 23));
        sizeFileLogs->setNumDigits(5);
        label = new QLabel(windowLogs);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 273, 81, 20));

        retranslateUi(windowLogs);
        QObject::connect(buttonBox, SIGNAL(accepted()), windowLogs, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), windowLogs, SLOT(reject()));

        QMetaObject::connectSlotsByName(windowLogs);
    } // setupUi

    void retranslateUi(QDialog *windowLogs)
    {
        windowLogs->setWindowTitle(QApplication::translate("windowLogs", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("windowLogs", "Size of log file :", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class windowLogs: public Ui_windowLogs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWLOGS_H
