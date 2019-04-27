/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(617, 301);
        MainWindow->setMinimumSize(QSize(617, 301));
        MainWindow->setMaximumSize(QSize(617, 301));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/favicon_metro.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(617, 301));
        centralWidget->setMaximumSize(QSize(617, 301));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 617, 301));
        label->setMinimumSize(QSize(617, 301));
        label->setMaximumSize(QSize(617, 301));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/imgres.png")));
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 230, 57, 56));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/word.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(40, 40));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(70, 230, 57, 56));
        pushButton_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        QIcon icon2;
        QString iconThemeName = QStringLiteral("Excel");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QStringLiteral(":/img/excel.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(40, 40));
        pushButton_2->setCheckable(false);
        pushButton_2->setAutoDefault(false);
        pushButton_2->setFlat(false);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 230, 57, 56));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/powerpoint.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon3);
        pushButton_3->setIconSize(QSize(40, 40));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(190, 230, 57, 56));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/img/acess.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon4);
        pushButton_4->setIconSize(QSize(40, 40));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(250, 230, 57, 56));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/img/outlook.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon5);
        pushButton_5->setIconSize(QSize(40, 40));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(310, 230, 57, 56));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/img/Visio.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon6);
        pushButton_6->setIconSize(QSize(40, 40));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(370, 230, 57, 56));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/img/onenote.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon7);
        pushButton_7->setIconSize(QSize(40, 40));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(430, 230, 57, 56));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/img/Project 2016.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_8->setIcon(icon8);
        pushButton_8->setIconSize(QSize(40, 40));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(490, 230, 57, 56));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/img/Publisher 2016.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon9);
        pushButton_9->setIconSize(QSize(40, 40));
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(550, 230, 57, 56));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/img/OneDrive for Business.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_10->setIcon(icon10);
        pushButton_10->setIconSize(QSize(40, 40));
        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(520, 10, 75, 23));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        pushButton_2->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Microsoft Office", 0));
        label->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#295497;\">Word</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#1e6e42;\">Excel</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_3->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#d14424;\">PowerPoint</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_4->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#9f3336;\">Access</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_5->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#006dc3;\">Outlook</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_6->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#36509e;\">Visio</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_7->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#7d3678;\">OneNote</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_8->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#2f712d;\">Project</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_8->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_9->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#076f63;\">Publisher</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_9->setText(QString());
#ifndef QT_NO_TOOLTIP
        pushButton_10->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#0947ae;\">OneDrive for Business</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        pushButton_10->setText(QString());
        pushButton_11->setText(QApplication::translate("MainWindow", "Settings", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
