#ifndef HISTORICOATENDIMENTO_H
#define HISTORICOATENDIMENTO_H

#include <QMainWindow>

namespace Ui {
class HistoricoAtendimento;
}

class HistoricoAtendimento : public QMainWindow
{
    Q_OBJECT

public:
    explicit HistoricoAtendimento(QWidget *parent = 0);
    ~HistoricoAtendimento();

private slots:
    void buttonVoltarClicked(void);

private:
    Ui::HistoricoAtendimento *ui;
};

#endif // HISTORICOATENDIMENTO_H
