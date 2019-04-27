#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <Windows.h>
#include <shellapi.h>
#include <string.h>
#include <QMessageBox>
#include <QApplication>
#include <QProcess>
#include <iostream>
#include <fstream>

using namespace std;

char GetString[100];
char GetString1[100];
char GetString2[100];
char GetString3[100];
char GetString4[100];
char GetString5[100];
char GetString6[100];
char GetString7[100];
char GetString8[100];
char GetString9[100];

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Verifica se o arquivo de configuração existe!, se não existir vai ser criado! e Atribue os locais a uma variavel!.
    char* path = new char[200]; //aloca 50 posições
    GetCurrentDirectoryA(200, path);
    strcat(path, "\\MicrosoftOffice.ini");
    ofstream configurations;

    configurations.open(path,ios_base::in); /* Abre para leitura */
        if(!configurations)
        {
            ui->pushButton->setEnabled(false);
            ui->pushButton->setVisible(false);
            ui->pushButton_2->setEnabled(false);
            ui->pushButton_2->setVisible(false);
            ui->pushButton_3->setEnabled(false);
            ui->pushButton_3->setVisible(false);
            ui->pushButton_4->setEnabled(false);
            ui->pushButton_4->setVisible(false);
            ui->pushButton_5->setEnabled(false);
            ui->pushButton_5->setVisible(false);
            ui->pushButton_6->setEnabled(false);
            ui->pushButton_6->setVisible(false);
            ui->pushButton_7->setEnabled(false);
            ui->pushButton_7->setVisible(false);
            ui->pushButton_8->setEnabled(false);
            ui->pushButton_8->setVisible(false);
            ui->pushButton_9->setEnabled(false);
            ui->pushButton_9->setVisible(false);
            ui->pushButton_10->setEnabled(false);
            ui->pushButton_10->setVisible(false);
            configurations.open(path,std::fstream::in | std::fstream::out | std::fstream::app); /* Se não existe, cria e abre pra gravacao! */
            configurations << "[Word]\n";
            configurations << "Local=C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\Word.lnk\n";
            configurations << "[Excel]\n";
            configurations << "Local=C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\Excel.lnk\n";
            configurations << "[PowerPoint]\n";
            configurations << "Local=C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\PowerPoint.lnk\n";
            configurations << "[Access]\n";
            configurations << "Local=C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\Access.lnk\n";
            configurations << "[Outlook]\n";
            configurations << "Local=C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\Outlook.lnk\n";
            configurations << "[Visio]\n";
            configurations << "Local=C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\Visio.lnk\n";
            configurations << "[OneNote]\n";
            configurations << "Local=C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\OneNote.lnk\n";
            configurations << "[Project]\n";
            configurations << "Local=C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\Project.lnk\n";
            configurations << "[Publisher]\n";
            configurations << "Local=C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\Publisher.lnk\n";
            configurations << "[OneDriveForBusiness]\n";
            configurations << "Local=C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\OneDrive for Business.lnk\n";
            configurations.close();
            delete[] path;
            ShellExecuteA(0, "runas", "OMOC.exe", "OpenMicrosoftOffice.exe", 0, SW_HIDE);
            parent->close();
        }else{
            GetPrivateProfileStringA("Word", "Local", 0, GetString, 100, path);
            ofstream verifylocation;
            verifylocation.open(GetString,ios_base::in); /* Abre para leitura */
            if(!verifylocation){
                ui->pushButton->setEnabled(false);
                ui->pushButton->setVisible(false);
            }
            verifylocation.close();
            GetPrivateProfileStringA("Excel", "Local", 0, GetString1, 100, path);
            ofstream verifylocation1;
            verifylocation1.open(GetString1,ios_base::in); /* Abre para leitura */
            if(!verifylocation1){
                ui->pushButton_2->setEnabled(false);
                ui->pushButton_2->setVisible(false);
            }
            verifylocation1.close();
            GetPrivateProfileStringA("PowerPoint", "Local", 0, GetString2, 100, path);
            ofstream verifylocation2;
            verifylocation2.open(GetString2,ios_base::in); /* Abre para leitura */
            if(!verifylocation2){
                ui->pushButton_3->setEnabled(false);
                ui->pushButton_3->setVisible(false);
            }
            verifylocation2.close();
            GetPrivateProfileStringA("Access", "Local", 0, GetString3, 100, path);
            ofstream verifylocation3;
            verifylocation3.open(GetString3,ios_base::in); /* Abre para leitura */
            if(!verifylocation3){
                ui->pushButton_4->setEnabled(false);
                ui->pushButton_4->setVisible(false);
            }
            verifylocation3.close();
            GetPrivateProfileStringA("Outlook", "Local", 0, GetString4, 100, path);
            ofstream verifylocation4;
            verifylocation4.open(GetString4,ios_base::in); /* Abre para leitura */
            if(!verifylocation4){
                ui->pushButton_5->setEnabled(false);
                ui->pushButton_5->setVisible(false);
            }
            verifylocation4.close();
            GetPrivateProfileStringA("Visio", "Local", 0, GetString5, 100, path);
            ofstream verifylocation5;
            verifylocation5.open(GetString5,ios_base::in); /* Abre para leitura */
            if(!verifylocation5){
                ui->pushButton_6->setEnabled(false);
                ui->pushButton_6->setVisible(false);
            }
            verifylocation5.close();
            GetPrivateProfileStringA("OneNote", "Local", 0, GetString6, 100, path);
            ofstream verifylocation6;
            verifylocation6.open(GetString6,ios_base::in); /* Abre para leitura */
            if(!verifylocation6){
                ui->pushButton_7->setEnabled(false);
                ui->pushButton_7->setVisible(false);
            }
            verifylocation6.close();

            GetPrivateProfileStringA("Project", "Local", 0, GetString7, 100, path);
            ofstream verifylocation7;
            verifylocation7.open(GetString7,ios_base::in); /* Abre para leitura */
            if(!verifylocation7){
                ui->pushButton_8->setEnabled(false);
                ui->pushButton_8->setVisible(false);
            }
            verifylocation7.close();

            GetPrivateProfileStringA("Publisher", "Local", 0, GetString8, 100, path);
            ofstream verifylocation8;
            verifylocation8.open(GetString8,ios_base::in); /* Abre para leitura */
            if(!verifylocation8){
                ui->pushButton_9->setEnabled(false);
                ui->pushButton_9->setVisible(false);
            }
            verifylocation8.close();

            GetPrivateProfileStringA("OneDriveForBusiness", "Local", 0, GetString9, 100, path);
            ofstream verifylocation9;
            verifylocation9.open(GetString9,ios_base::in); /* Abre para leitura */
            if(!verifylocation9){
                ui->pushButton_10->setEnabled(false);
                ui->pushButton_10->setVisible(false);
            }
            verifylocation9.close();
        }
        configurations.close();
        delete[] path;
}

MainWindow::~MainWindow()
{
    delete ui;

}
void MainWindow::on_pushButton_clicked()
{
    //MessageBox::Show("Word");
    ShellExecuteA(0, "open", GetString, 0, 0, SW_SHOWNORMAL);
    showMinimized();
}

void MainWindow::on_pushButton_2_clicked()
{
    //MessageBox::Show("Excel");
    ShellExecuteA(0, "open", GetString1, 0, 0, SW_SHOWNORMAL);
    showMinimized();
}

void MainWindow::on_pushButton_3_clicked()
{
    //MessageBox::Show("PowerPoint");
    ShellExecuteA(0, "open", GetString2, 0, 0, SW_SHOWNORMAL);
    showMinimized();
}

void MainWindow::on_pushButton_4_clicked()
{
    //MessageBox::Show("Access");
    ShellExecuteA(0, "open", GetString3, 0, 0, SW_SHOWNORMAL);
    showMinimized();
}

void MainWindow::on_pushButton_5_clicked()
{
    //MessageBox::Show("Outlook");
    ShellExecuteA(0, "open", GetString4, 0, 0, SW_SHOWNORMAL);
    showMinimized();
}

void MainWindow::on_pushButton_6_clicked()
{
    //MessageBox::Show("Visio");
    ShellExecuteA(0, "open", GetString5, 0, 0, SW_SHOWNORMAL);
    showMinimized();
}

void MainWindow::on_pushButton_7_clicked()
{
    //MessageBox::Show("OneNote");
    ShellExecuteA(0, "open", GetString6, 0, 0, SW_SHOWNORMAL);
    showMinimized();
}

void MainWindow::on_pushButton_8_clicked()
{
    //MessageBox::Show("Project");
    ShellExecuteA(0, "open", GetString7, 0, 0, SW_SHOWNORMAL);
    showMinimized();
}

void MainWindow::on_pushButton_9_clicked()
{
    //MessageBox::Show("Publisher");
    ShellExecuteA(0, "open", GetString8, 0, 0, SW_SHOWNORMAL);
    showMinimized();
}

void MainWindow::on_pushButton_10_clicked()
{
    //MessageBox::Show("OneDriveForBusiness");
    ShellExecuteA(0, "open", GetString9, 0, 0, SW_SHOWNORMAL);
    showMinimized();
}

void MainWindow::on_pushButton_11_clicked()
{
    ShellExecuteA(0, "open", "MicrosoftOffice.ini", 0, 0, SW_SHOWNORMAL);
}
