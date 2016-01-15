#ifndef ERROIDENTIFICACAO_H
#define ERROIDENTIFICACAO_H

#include <QDialog>

namespace Ui {
class ErroIdentificacao;
}

class ErroIdentificacao : public QDialog
{
    Q_OBJECT

public:
    explicit ErroIdentificacao(QWidget *parent = 0);
    ~ErroIdentificacao();

private slots:
    void buttonVoltarClicked(void);

private:
    Ui::ErroIdentificacao *ui;
};

#endif // ERROIDENTIFICACAO_H
