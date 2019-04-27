#-------------------------------------------------
#
# Project created by QtCreator 2016-12-31T18:35:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OpenMicrosoftOffice
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui

RESOURCES += \
    resources.qrc

#Windows icon and admin right
#RC_FILE= windows_icon.rc
win32 {
  RC_FILE = windows_icon.rc
}

DISTFILES += \
    windows_icon.rc


