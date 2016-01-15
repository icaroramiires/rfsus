#ifndef ATENDIMENTO_H
#define ATENDIMENTO_H

#include <QMainWindow>

namespace Ui {
class Atendimento;
}

class Atendimento : public QMainWindow
{
    Q_OBJECT

public:
    explicit Atendimento(QWidget *parent = 0);
    ~Atendimento();


private slots:
    void buttonGravarAtendimentoClicked(void);

    void buttonAtualizarFichaClicked(void);

    void buttonInternamentoClicked(void);

    void buttonVoltarClicked(void);

    void buttonLeituraCardiacaClicked(void);

    void buttonLeituraTemperaturaClicked(void);

private:
    Ui::Atendimento *ui;
};

#endif // ATENDIMENTO_H
