#include "confirmacaoAtendimento.h"
#include "ui_confirmacaoAtendimento.h"
#include "ficha.h"
#include "atendimento.h"
#include <iostream>

using namespace std;

ConfirmacaoAtendimento::ConfirmacaoAtendimento(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConfirmacaoAtendimento)
{
    ui->setupUi(this);

    connect(ui->confirmacaoAtendimentoBotao, SIGNAL(clicked()), this, SLOT(buttonOKClicked()));
}

void ConfirmacaoAtendimento::buttonOKClicked(){
    Ficha *ficha = new Ficha;
    Atendimento *atendimento = new Atendimento;
    this->close();
    atendimento->hide();
    ficha->show();
    //cout << "Atendimento Confirmado!" << endl;
}

ConfirmacaoAtendimento::~ConfirmacaoAtendimento()
{
    delete ui;
}
