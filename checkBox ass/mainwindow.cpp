#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTextStream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_checkBox_1_clicked()
{
    QTextStream stream(stdout);
        if(ui->checkBox_1->isChecked())
        {
            stream<<"Bold is Checked!\n";
            QFont font("",16,QFont::Bold);
            ui->label->setFont(font);
    }
}

void MainWindow::on_checkBox_2_clicked()
{
    QTextStream stream(stdout);
        if(ui->checkBox_2->isChecked())
        {
            stream<<"Italics is checked!\n";
            QFont font("",16,QFont::StyleItalic);
            ui->label->setFont(font);
    }
}

void MainWindow::on_radioButton_1_clicked()
{
    QTextStream stream(stdout);
            if(ui->radioButton_1->isChecked())
            {
                stream<<"left is Selected!\n";
                ui->label->setText("<font color='purple'>Change Me!</font>");
    }
}

void MainWindow::on_radioButton_2_clicked()
{
    QTextStream stream(stdout);
            if(ui->radioButton_2->isChecked())
            {
                stream<<"right is Selected!\n";
                ui->label->setText("<font color='blue'>Change Me!</font>");
    }
}

void MainWindow::on_radioButton_3_clicked()
{
    QTextStream stream(stdout);
           if(ui->radioButton_3->isChecked())
           {
               stream<<"centre is Selected!\n";
               ui->label->setText("<font color='yellow'>Change Me!</font>");
   }
}
