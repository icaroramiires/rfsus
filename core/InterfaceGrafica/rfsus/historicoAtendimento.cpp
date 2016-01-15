#include "historicoAtendimento.h"
#include "ui_historicoatendimento.h"
#include "ficha.h"
#include <iostream>

using namespace std;

HistoricoAtendimento::HistoricoAtendimento(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HistoricoAtendimento)
{
    ui->setupUi(this);

    connect(ui->historicoBotaoVoltar, SIGNAL(clicked()), this, SLOT(buttonVoltarClicked()));
}

void HistoricoAtendimento::buttonVoltarClicked(){
    Ficha *ficha = new Ficha;
    ficha->show();
    this->hide();
    //cout << "Voltar" << endl;
}

HistoricoAtendimento::~HistoricoAtendimento()
{
    delete ui;
}
