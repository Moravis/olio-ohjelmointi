#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QDebug>

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnCount_clicked();

    void on_btnReset_clicked();

private:
    Ui::MainWindow *ui;
    int x=0;
    QString number1, number2;
    int state;
    float result;
    short operand;
private slots:
    void numberClickedHandler();
    void clearAndEnterClickHandler();
    void addSubMulDivClickHandler();
    void resetLineEdits();
};
#endif // MAINWINDOW_H
