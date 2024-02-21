#include "mainwindow.h"
#include "form2.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_btnSave_clicked()
{
    QString fname;
    fname=ui->textFname->text();
    ui->labelResult->setText("Terve "+fname);
}


void MainWindow::on_btnOpenForm2_clicked()
{
    Form2 *objectForm2=new Form2(this);
    //objectForm2->show();
    objectForm2->open();
}

