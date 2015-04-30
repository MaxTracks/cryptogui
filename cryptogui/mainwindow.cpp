#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if(!(ui->readFile->isChecked()) && !(ui->readMessage->isChecked()))
    {
        QMessageBox msgBox;
        msgBox.setText("Please choose an input method.");
        msgBox.exec();
    } else {
        if(ui->readFile->isChecked()){
            QFile inFile(ui->filePath->toPlainText());
            if(inFile.open(QFile::ReadOnly))
            {
                if(ui->radioButton->isChecked())
                {
                    QCryptographicHash hash(QCryptographicHash::Md5);
                    hash.addData(inFile.readAll());
                    QString hash1 = hash.result().toHex();
                    ui->hashResult->setText(hash1);
                } else if(ui->radioButton_2->isChecked()) {
                    QCryptographicHash hash(QCryptographicHash::Md4);
                    hash.addData(inFile.readAll());
                    QString hash1 = hash.result().toHex();
                    ui->hashResult->setText(hash1);
                } else {
                    QCryptographicHash hash(QCryptographicHash::Sha1);
                    hash.addData(inFile.readAll());
                    QString hash1 = hash.result().toHex();
                    ui->hashResult->setText(hash1);
                }
            }
        } else {
            //Handle each hash if message pressed
            if(ui->radioButton->isChecked())
            {
                QCryptographicHash hash(QCryptographicHash::Md5);
                hash.addData(ui->messageInput->toPlainText().toUtf8());
                QString hash1 = hash.result().toHex();
                ui->hashResult->setText(hash1);
            } else if(ui->radioButton_2->isChecked()) {
                QCryptographicHash hash(QCryptographicHash::Md4);
                hash.addData(ui->messageInput->toPlainText().toUtf8());
                QString hash1 = hash.result().toHex();
                ui->hashResult->setText(hash1);
            } else {
                QCryptographicHash hash(QCryptographicHash::Sha1);
                hash.addData(ui->messageInput->toPlainText().toUtf8());
                QString hash1 = hash.result().toHex();
                ui->hashResult->setText(hash1);
            }
        }
    }
}

void MainWindow::on_readMessage_clicked()
{
    ui->messageInput->setDisabled(false);
    ui->filePath->setDisabled(true);
    ui->browseFileToHash->setDisabled(true);
}

void MainWindow::on_readFile_clicked()
{
    ui->messageInput->setDisabled(true);
    ui->filePath->setDisabled(false);
    ui->browseFileToHash->setDisabled(false);
}

void MainWindow::on_browseFileToHash_clicked()
{
    ui->filePath->setText(QFileDialog::getOpenFileName());
}
