/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionEdit;
    QAction *actionOpen_File;
    QAction *actionQuit;
    QAction *actionAbout;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *hashtab;
    QPlainTextEdit *messageInput;
    QPushButton *pushButton;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *readFile;
    QRadioButton *readMessage;
    QLabel *label;
    QFrame *line;
    QFrame *line_2;
    QTextEdit *hashResult;
    QPushButton *browseFileToHash;
    QTextEdit *filePath;
    QFrame *line_3;
    QLabel *label_3;
    QWidget *tab_3;
    QPushButton *pushButton_2;
    QListWidget *listWidget;
    QMenuBar *menuBar;
    QMenu *menuHash_Sums;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QButtonGroup *buttonGroup_2;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(443, 333);
        actionEdit = new QAction(MainWindow);
        actionEdit->setObjectName(QString::fromUtf8("actionEdit"));
        actionOpen_File = new QAction(MainWindow);
        actionOpen_File->setObjectName(QString::fromUtf8("actionOpen_File"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 441, 281));
        hashtab = new QWidget();
        hashtab->setObjectName(QString::fromUtf8("hashtab"));
        messageInput = new QPlainTextEdit(hashtab);
        messageInput->setObjectName(QString::fromUtf8("messageInput"));
        messageInput->setGeometry(QRect(10, 100, 291, 91));
        pushButton = new QPushButton(hashtab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(320, 132, 101, 111));
        radioButton_3 = new QRadioButton(hashtab);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(radioButton_3);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(320, 90, 102, 21));
        radioButton = new QRadioButton(hashtab);
        buttonGroup->addButton(radioButton);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(320, 30, 102, 21));
        radioButton->setChecked(true);
        radioButton_2 = new QRadioButton(hashtab);
        buttonGroup->addButton(radioButton_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(320, 60, 102, 21));
        readFile = new QRadioButton(hashtab);
        buttonGroup_2 = new QButtonGroup(MainWindow);
        buttonGroup_2->setObjectName(QString::fromUtf8("buttonGroup_2"));
        buttonGroup_2->addButton(readFile);
        readFile->setObjectName(QString::fromUtf8("readFile"));
        readFile->setEnabled(true);
        readFile->setGeometry(QRect(10, 40, 102, 21));
        readFile->setCheckable(true);
        readFile->setChecked(false);
        readMessage = new QRadioButton(hashtab);
        buttonGroup_2->addButton(readMessage);
        readMessage->setObjectName(QString::fromUtf8("readMessage"));
        readMessage->setGeometry(QRect(110, 40, 121, 21));
        label = new QLabel(hashtab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(320, 10, 81, 16));
        line = new QFrame(hashtab);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(300, 0, 20, 241));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(hashtab);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(310, 120, 118, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        hashResult = new QTextEdit(hashtab);
        hashResult->setObjectName(QString::fromUtf8("hashResult"));
        hashResult->setGeometry(QRect(10, 200, 291, 51));
        browseFileToHash = new QPushButton(hashtab);
        browseFileToHash->setObjectName(QString::fromUtf8("browseFileToHash"));
        browseFileToHash->setGeometry(QRect(230, 60, 71, 41));
        filePath = new QTextEdit(hashtab);
        filePath->setObjectName(QString::fromUtf8("filePath"));
        filePath->setGeometry(QRect(10, 60, 221, 41));
        line_3 = new QFrame(hashtab);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(-3, 179, 311, 31));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(hashtab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 10, 71, 16));
        tabWidget->addTab(hashtab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        pushButton_2 = new QPushButton(tab_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 210, 141, 31));
        listWidget = new QListWidget(tab_3);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(170, 10, 256, 231));
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 443, 20));
        menuHash_Sums = new QMenu(menuBar);
        menuHash_Sums->setObjectName(QString::fromUtf8("menuHash_Sums"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuHash_Sums->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuHash_Sums->addAction(actionOpen_File);
        menuHash_Sums->addAction(actionQuit);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionEdit->setText(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        actionOpen_File->setText(QApplication::translate("MainWindow", "Open File", 0, QApplication::UnicodeUTF8));
        actionOpen_File->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        actionQuit->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        actionAbout->setShortcut(QApplication::translate("MainWindow", "Ctrl+A, Ctrl+B", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        hashtab->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Hash Tab</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        hashtab->setStatusTip(QApplication::translate("MainWindow", "Hash Tab", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        hashtab->setWhatsThis(QApplication::translate("MainWindow", "Hash tab", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        hashtab->setAccessibleName(QApplication::translate("MainWindow", "Hash", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_ACCESSIBILITY
        pushButton->setText(QApplication::translate("MainWindow", "Calculate Hash", 0, QApplication::UnicodeUTF8));
        radioButton_3->setText(QApplication::translate("MainWindow", "SHA1sum", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("MainWindow", "MD5sum", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("MainWindow", "MD4sum", 0, QApplication::UnicodeUTF8));
        readFile->setText(QApplication::translate("MainWindow", "Read File", 0, QApplication::UnicodeUTF8));
        readMessage->setText(QApplication::translate("MainWindow", "User Message", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Hash Type", 0, QApplication::UnicodeUTF8));
        browseFileToHash->setText(QApplication::translate("MainWindow", "Browse", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Input Type", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(hashtab), QApplication::translate("MainWindow", "Hashing", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "Generate Frequency", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Analysis", 0, QApplication::UnicodeUTF8));
        menuHash_Sums->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
