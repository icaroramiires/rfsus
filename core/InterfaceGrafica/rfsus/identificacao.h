#ifndef IDENTIFICACAO_H
#define IDENTIFICACAO_H

#include <QMainWindow>

namespace Ui {
class Identificacao;
}

class Identificacao : public QMainWindow
{
    Q_OBJECT

public:
    explicit Identificacao(QWidget *parent = 0);
    ~Identificacao();

private slots:
    void buttonEntradaClicked();

    void buttonLimparDadosClicked();

private:
    Ui::Identificacao *ui;
};

#endif // IDENTIFICACAO_H
