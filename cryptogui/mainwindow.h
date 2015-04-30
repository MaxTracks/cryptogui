#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCryptographicHash>
#include <QFileDialog>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_readFile_clicked();

    void on_readMessage_clicked();

    void on_browseFileToHash_clicked();

    void on_pushButton_2_clicked();

    void on_actionQuit_triggered();

    void on_actionOpen_File_triggered();

    void on_actionAbout_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
