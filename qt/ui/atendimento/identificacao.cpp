#include "identificacao.h"
#include "confirmacaoIdentificacao.h"
#include "ui_identificacao.h"
#include <iostream>

using namespace std;

Identificacao::Identificacao(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Identificacao)
{
    ui->setupUi(this);

    connect(ui->identificacaoBotaoEntrada, SIGNAL(clicked()), this, SLOT(buttonEntradaClicked()));

    connect(ui->identificacaoBotaoLimpar, SIGNAL(clicked()), this, SLOT(buttonLimparDadosClicked()));

}

void Identificacao::buttonEntradaClicked(){
    ConfirmacaoIdentificacao confirmacaoIdentificacao;
    confirmacaoIdentificacao.exec();
    //cout << "Dar entrada" << endl;
}

void Identificacao::buttonLimparDadosClicked(){
    //cout << "Limpar dados" << endl;
}

Identificacao::~Identificacao()
{
    delete ui;
}

