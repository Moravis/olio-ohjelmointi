#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQTimer=new QTimer();

    ui->progressBarPlayer1->setRange(0, player1Time);
    ui->progressBarPlayer1->setValue(0);

    ui->progressBarPlayer2->setRange(0, player2Time);
    ui->progressBarPlayer2->setValue(0);

    connect(pQTimer, SIGNAL(timeout()), this, SLOT(timeout()));

    connect(ui->btnStart,SIGNAL(clicked(bool)),this,SLOT(startHandler()));
    connect(ui->btnStop,SIGNAL(clicked(bool)),this,SLOT(stopHandler()));
    connect(ui->btnSwitch1,SIGNAL(clicked(bool)),this,SLOT(switchHandler()));
    connect(ui->btnSwitch2,SIGNAL(clicked(bool)),this,SLOT(switchHandler()));
    connect(ui->btnTime1,SIGNAL(clicked(bool)),this,SLOT(startHandler()));
    connect(ui->btnTime2,SIGNAL(clicked(bool)),this,SLOT(startHandler()));
    setGameInfoText("Select playtime and press start game!", 16);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete pQTimer;
    pQTimer =nullptr;
}

void MainWindow::updateProgressBar()
{
    ui->progressBarPlayer1->setValue(player1Time);
    ui->progressBarPlayer2->setValue(player2Time);
}

void MainWindow::setGameInfoText(QString a, short fontSize)
{
    ui->textGame->setText(a);
    QFont font = ui->textGame->font();
    font.setPointSize(fontSize);
    ui->textGame->setFont(font);
}

void MainWindow::startHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name: "<< name;

    if(name == "btnTime1"){
        player1Time = 120;
        player2Time = 120;
        ui->progressBarPlayer1->setRange(0, player1Time);
        ui->progressBarPlayer1->setValue(player1Time);

        ui->progressBarPlayer2->setRange(0, player2Time);
        ui->progressBarPlayer2->setValue(player2Time);

        qDebug()<<"Player1time: "<<player1Time;

        setGameInfoText("Ready to play!", 16);


    }else if(name == "btnTime2"){
        player1Time = 300;
        player2Time = 300;
        ui->progressBarPlayer1->setRange(0, player1Time);
        ui->progressBarPlayer1->setValue(player1Time);

        ui->progressBarPlayer2->setRange(0, player2Time);
        ui->progressBarPlayer2->setValue(player2Time);

        qDebug()<<"Player1time: "<<player1Time;

        setGameInfoText("Ready to play!", 16);

    }
    if(name == "btnStart"){
    pQTimer->start(1000);
    state = 1;
    qDebug()<<"Time: "<<x;
    setGameInfoText("Game ongoing", 16);

    }
}

void MainWindow::stopHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name: "<< name;

    if(name == "btnStop"){
    pQTimer->stop();
    state = 3;
    qDebug()<<"Peli lopetettu!";
    setGameInfoText("Select time again and press start for new game", 16);
    if(player1Time < player2Time){
        pQTimer->stop();
        qDebug()<<"Pelaaja 2 voitti!";
    } else if(player2Time < player1Time){
        pQTimer->stop();
        qDebug()<<"Pelaaja 1 voitti!";
    }
  }

}

void MainWindow::switchHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    qDebug() << "Button name: "<< name;

    if(name == "btnSwitch1"){
        state = 2;
    }else if(name == "btnSwitch2"){
        state = 1;
    }
}

void MainWindow::timeout()
{
    x+=1;
    qDebug()<<"Aikaa kulunut "<<x<<" sekunttia\n";
    if(state == 1){
        player1Time--;
        updateProgressBar();
       // ui->progressBarPlayer1->setValue(player1Time);
        qDebug()<<"Player 1 aikaa jäljellä "<<player1Time;

    }else if(state == 2){
        player2Time--;
        updateProgressBar();
        //ui->progressBarPlayer2->setValue(player2Time);
        qDebug()<<"Player 2 aikaa jäljellä "<<player2Time;

    }
    if(player1Time == 0){
        pQTimer->stop();
        qDebug()<<"Pelaaja 2 voitti!";
        setGameInfoText("Player 2 WON!", 16);
    } else if(player2Time == 0){
        pQTimer->stop();
        qDebug()<<"Pelaaja 1 voitti!";
        setGameInfoText("Player 1 WON!", 16);
    }
}
