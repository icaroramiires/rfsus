#include "atendimento.h"
#include "ui_atendimento.h"
#include "ficha.h"
#include "confirmacaoAtendimento.h"
#include "erroAtendimento.h"
#include <iostream>

using namespace std;

Atendimento::Atendimento(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Atendimento)
{
    ui->setupUi(this);

    connect(ui->atendimentoBotaoSalvarAtendimento, SIGNAL(clicked()), this, SLOT(buttonGravarAtendimentoClicked()));


    connect(ui->atendimentoBotaoInternamento, SIGNAL(clicked()), this, SLOT(buttonInternamentoClicked()));

    connect(ui->atendimentoBotaoVoltar, SIGNAL(clicked()), this, SLOT(buttonVoltarClicked()));

    connect(ui->atendimentoBotaoCardiaco, SIGNAL(clicked()), this, SLOT(buttonLeituraCardiacaClicked()));

    connect(ui->atendimentoBotaoTemperatura, SIGNAL(clicked()), this, SLOT(buttonLeituraTemperaturaClicked()));
}

void Atendimento::buttonGravarAtendimentoClicked(){
    ConfirmacaoAtendimento confirmacaoAtendimento;
    confirmacaoAtendimento.exec();
    //cout << "Salvar atendimento" << endl;
}

void Atendimento::buttonInternamentoClicked(){
    cout << "Internamento" << endl;
}

void Atendimento::buttonVoltarClicked(){
    Ficha *ficha = new Ficha;
    ficha->show();
    this->hide();
    //cout << "Voltar" << endl;
}

void Atendimento::buttonLeituraCardiacaClicked(){
    cout << "Ler sensor cardiaco" << endl;
}

void Atendimento::buttonLeituraTemperaturaClicked(){
    cout << "Ler sensor Temperatura" << endl;
}

Atendimento::~Atendimento()
{
    delete ui;
}
