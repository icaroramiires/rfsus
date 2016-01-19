#ifndef FICHA_H
#define FICHA_H

#include <QMainWindow>

namespace Ui {
class Ficha;
}

class Ficha : public QMainWindow
{
    Q_OBJECT

public:
    explicit Ficha(QWidget *parent = 0);
    ~Ficha();

private slots:
    void buttonHistoricoClicked(void);

    void buttonAtendimentoClicked(void);

    void buttonAtualizarClicked(void);

    void buttonFecharClicked(void);

private:
    Ui::Ficha *ui;

};

#endif // FICHA_H
