#ifndef ERROATENDIMENTO_H
#define ERROATENDIMENTO_H

#include <QDialog>

namespace Ui {
class ErroAtendimento;
}

class ErroAtendimento : public QDialog
{
    Q_OBJECT

public:
    explicit ErroAtendimento(QWidget *parent = 0);
    ~ErroAtendimento();

private slots:
    void buttonVoltarClicked(void);

private:
    Ui::ErroAtendimento *ui;
};

#endif // ERROATENDIMENTO_H
