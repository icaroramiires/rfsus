#ifndef CONFIRMACAOATENDIMENTO_H
#define CONFIRMACAOATENDIMENTO_H

#include <QDialog>

namespace Ui {
class ConfirmacaoAtendimento;
}

class ConfirmacaoAtendimento : public QDialog
{
    Q_OBJECT

public:
    explicit ConfirmacaoAtendimento(QWidget *parent = 0);
    ~ConfirmacaoAtendimento();

private slots:
    void buttonOKClicked(void);

private:
    Ui::ConfirmacaoAtendimento *ui;
};

#endif // CONFIRMACAOATENDIMENTO_H
