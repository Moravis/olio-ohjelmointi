#ifndef SECONDFORM_H
#define SECONDFORM_H

#include <QWidget>

namespace Ui {
class SecondForm;
}

class SecondForm : public QWidget
{
    Q_OBJECT

public:
    explicit SecondForm(QString name, QWidget *parent = nullptr);
    ~SecondForm();

private:
    Ui::SecondForm *ui;
};

#endif // SECONDFORM_H
