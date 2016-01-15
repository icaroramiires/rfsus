#include "ui_erroAtendimento.h"
#include "erroAtendimento.h"
#include "atendimento.h"
#include <iostream>

using namespace std;

ErroAtendimento::ErroAtendimento(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ErroAtendimento)
{
    ui->setupUi(this);

    connect(ui->erroAtendimentoBotao, SIGNAL(clicked()), this, SLOT(buttonVoltarClicked()));
}

void ErroAtendimento::buttonVoltarClicked(){
    this->close();
    //cout << "Erro de atendimento!" << endl;
}

ErroAtendimento::~ErroAtendimento()
{
    delete ui;
}
