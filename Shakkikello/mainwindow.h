#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "qprogressbar.h"
#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void timeout();
    void startHandler();
    void stopHandler();
    void switchHandler();
private slots:

private:
    Ui::MainWindow *ui;
    short player1Time;
    short player2Time;
    short currentPlayer;
    short gameTime;
    int state;

    void updateProgressBar();
    void setGameInfoText(QString a, short fontSize);

    QTimer *pQTimer;
    short x=0;
};
#endif // MAINWINDOW_H
