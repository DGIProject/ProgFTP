/********************************************************************************
** Form generated from reading UI file 'windowhelp.ui'
**
** Created: Fri May 3 19:13:40 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWHELP_H
#define UI_WINDOWHELP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_windowHelp
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *windowHelp)
    {
        if (windowHelp->objectName().isEmpty())
            windowHelp->setObjectName(QString::fromUtf8("windowHelp"));
        windowHelp->resize(400, 300);
        buttonBox = new QDialogButtonBox(windowHelp);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(windowHelp);
        QObject::connect(buttonBox, SIGNAL(accepted()), windowHelp, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), windowHelp, SLOT(reject()));

        QMetaObject::connectSlotsByName(windowHelp);
    } // setupUi

    void retranslateUi(QDialog *windowHelp)
    {
        windowHelp->setWindowTitle(QApplication::translate("windowHelp", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class windowHelp: public Ui_windowHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWHELP_H
