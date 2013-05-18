#-------------------------------------------------
#
# Project created by QtCreator 2013-04-28T12:58:31
#
#-------------------------------------------------

QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProgFTP
TEMPLATE = app


SOURCES += main.cpp\
        proftp.cpp \
    windowhelp.cpp \
    windowlogs.cpp \
    windowaddserver.cpp

HEADERS  += proftp.h \
    windowhelp.h \
    windowlogs.h \
    windowaddserver.h

FORMS    += proftp.ui \
    windowhelp.ui \
    windowlogs.ui \
    windowaddserver.ui

OTHER_FILES += \
    img/file.png

RESOURCES += \
    proftp.qrc
