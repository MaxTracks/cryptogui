#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("CryptoGUI");
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
    ui->readFile->setChecked(true);
    ui->messageInput->setDisabled(true);
    ui->filePath->setDisabled(false);
    ui->browseFileToHash->setDisabled(false);
    ui->filePath->setText(QFileDialog::getOpenFileName());
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->listWidget->clear();
    QString hash = ui->hashResult->toPlainText();
    if(hash == "")
    {
        QMessageBox msgBox;
        msgBox.setText("Please calculate a hash value first.");
        msgBox.exec();
    } else {
        int count[16];
        for(int i=0;i<16;i++) count[i] = 0;

        for(int i=0;i<hash.length();i++)
        {
            char ch = hash.at(i).toAscii();

            switch(ch)
            {
            case 'a':
                count[0]++;
                break;
            case 'b':
                count[1]++;
                break;
            case 'c':
                count[2]++;
                break;
            case 'd':
                count[3]++;
                break;
            case 'e':
                count[4]++;
                break;
            case 'f':
                count[5]++;
                break;
            case '0':
                count[6]++;
                break;
            case '1':
                count[7]++;
                break;
            case '2':
                count[8]++;
                break;
            case '3':
                count[9]++;
                break;
            case '4':
                count[10]++;
                break;
            case '5':
                count[11]++;
                break;
            case '6':
                count[12]++;
                break;
            case '7':
                count[13]++;
                break;
            case '8':
                count[14]++;
                break;
            case '9':
                count[15]++;
            }

        }


        for(int i=0;i<16;i++)
        {
            ui->listWidget->addItem(QString::number(i + 1) + ": " + QString::number(count[i]));
        }
    }
}

void MainWindow::on_actionQuit_triggered()
{
    exit(0);
}

void MainWindow::on_actionOpen_File_triggered()
{
    ui->filePath->setText(QFileDialog::getOpenFileName());
    ui->messageInput->setDisabled(true);
    ui->filePath->setDisabled(false);
    ui->browseFileToHash->setDisabled(false);
    ui->readFile->setChecked(true);
    ui->readMessage->setChecked(false);
}

void MainWindow::on_actionAbout_triggered()
{
    QString message = "CryptoGUI is a simple and easy attempt to teach users about simple cryptographic tools.\n\n"
                      "CryptGUI enables new users to easily check the integrity of a message or file.\n"
                      "Future functionality may include brute force hash attacks, additional cryptonalysis,\n"
                      "as well as implementation of OpenPGP with additional encrypt and decrypt functionality ";

    QMessageBox msgBox;
    msgBox.setText(message);
    msgBox.exec();
}
