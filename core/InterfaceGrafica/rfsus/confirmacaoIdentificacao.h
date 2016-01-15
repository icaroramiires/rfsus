#ifndef CONFIRMACAOIDENTIFICACAO_H
#define CONFIRMACAOIDENTIFICACAO_H

#include <QDialog>

namespace Ui {
class ConfirmacaoIdentificacao;
}

class ConfirmacaoIdentificacao : public QDialog
{
    Q_OBJECT

public:
    explicit ConfirmacaoIdentificacao(QWidget *parent = 0);
    ~ConfirmacaoIdentificacao();

private slots:
    void buttonOKClicked(void);

private:
    Ui::ConfirmacaoIdentificacao *ui;
};

#endif // CONFIRMACAOIDENTIFICACAO_H
