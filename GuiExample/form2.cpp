#include "form2.h"
#include "ui_form2.h"

Form2::Form2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Form2)
{
    ui->setupUi(this);
}

Form2::~Form2()
{
    qDebug()<<"Form2 olio tuhottiin";
    delete ui;
}

void Form2::setFname(QString fn)
{
    qDebug()<<"Fname asetettu";
    qDebug()<<"Fname="+fn;
    ui->labelFname->setText(fn);
}

void Form2::setLname(QString ln)
{
    ui->labelLname->setText(ln);
}
