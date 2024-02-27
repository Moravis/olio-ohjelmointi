#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->N1,SIGNAL(clicked(bool)),this,SLOT(numberClickedHandler()));
    connect(ui->N2,SIGNAL(clicked(bool)),this,SLOT(numberClickedHandler()));
    connect(ui->N3,SIGNAL(clicked(bool)),this,SLOT(numberClickedHandler()));
    connect(ui->N4,SIGNAL(clicked(bool)),this,SLOT(numberClickedHandler()));
    connect(ui->N5,SIGNAL(clicked(bool)),this,SLOT(numberClickedHandler()));
    connect(ui->N6,SIGNAL(clicked(bool)),this,SLOT(numberClickedHandler()));
    connect(ui->N7,SIGNAL(clicked(bool)),this,SLOT(numberClickedHandler()));
    connect(ui->N8,SIGNAL(clicked(bool)),this,SLOT(numberClickedHandler()));
    connect(ui->N9,SIGNAL(clicked(bool)),this,SLOT(numberClickedHandler()));

    connect(ui->btnAdd,SIGNAL(clicked(bool)),this,SLOT(addSubMulDivClickHandler()));
    connect(ui->btnSubtract,SIGNAL(clicked(bool)),this,SLOT(addSubMulDivClickHandler()));
    connect(ui->btnMultiply,SIGNAL(clicked(bool)),this,SLOT(addSubMulDivClickHandler()));
    connect(ui->btnDivide,SIGNAL(clicked(bool)),this,SLOT(addSubMulDivClickHandler()));

    connect(ui->btnEnter,SIGNAL(clicked(bool)),this,SLOT(clearAndEnterClickHandler()));
    connect(ui->btnClear,SIGNAL(clicked(bool)),this,SLOT(clearAndEnterClickHandler()));

    state = 1;
}

MainWindow::~MainWindow()
{

    delete ui;
}

void MainWindow::numberClickedHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name: "<< name;

    //ui->num1->setText(a);
    QString a= name.last(1);



    qDebug()<<"a on: " << a;
    if(state == 1){
        number1 = number1 + a;
        ui->num1->setText(number1);
        qDebug()<<number1;
    }
    else if(state == 2){
        //QString a= name.last(1);
        number2 = number2 + a;
        ui->num2->setText(number2);
            qDebug()<<number2;
    }

    //number1 = number1 + name.last(1);
}

void MainWindow::clearAndEnterClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name: "<< name;


    if(name == "btnEnter"){
            if(operand == 0){
                result =  number1.toFloat() + number2.toFloat();
            }else if(operand == 1){
                result =  number1.toFloat() - number2.toFloat();
            }else if(operand == 2){
                result =  number1.toFloat() * number2.toFloat();
            }else{
                result =  number1.toFloat() / number2.toFloat();
            }
            ui->result->setText(QString::number(result));

    } else{
    resetLineEdits();
    }
    state = 1;

}

void MainWindow::addSubMulDivClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name: "<< name;

    if(name =="btnAdd"){
        operand = 0;
    }
    else if(name == "btnSubtract"){
        operand = 1;
    }
    else if(name == "btnMultiply"){
        operand = 2;
    }
    else{
        operand = 3;
    }

    state = 2;
    qDebug()<<name;
}

void MainWindow::resetLineEdits()
{
    ui->num1->setText(0);
    ui->num2->setText(0);
    ui->result->setText(0);
    number1 = "";
    number2 = "";
}


void MainWindow::on_btnCount_clicked()
{
    x++;
    QString s = QString::number(x);
    ui->labelCount->setText(s);
}


void MainWindow::on_btnReset_clicked()
{
    x = 0;
    ui->labelCount->setText(0);
}
