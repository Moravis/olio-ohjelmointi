#ifndef FORM2_H
#define FORM2_H

#include <QDialog>

namespace Ui {
class Form2;
}

class Form2 : public QDialog
{
    Q_OBJECT

public:
    explicit Form2(QWidget *parent = nullptr);
    ~Form2();

private:
    Ui::Form2 *ui;
    QString nameFromMainWindow;
};

#endif // FORM2_H
