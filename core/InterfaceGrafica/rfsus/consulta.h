#ifndef CONSULTA_H
#define CONSULTA_H

#include <QMainWindow>

namespace Ui {
class consulta;
}

class consulta : public QMainWindow
{
    Q_OBJECT

public:
    explicit consulta(QWidget *parent = 0);
    ~consulta();

private:
    Ui::consulta *ui;
};

#endif // CONSULTA_H
