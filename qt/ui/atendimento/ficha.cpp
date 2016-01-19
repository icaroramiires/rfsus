#include "ficha.h"
#include "ui_ficha.h"
#include "historicoAtendimento.h"
#include "atendimento.h"
#include <iostream>
#include <QApplication>

using namespace std;

Ficha::Ficha(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Ficha)
{
    ui->setupUi(this);

    connect(ui->fichaBotaoHistorico, SIGNAL(clicked()), this, SLOT(buttonHistoricoClicked()));

    connect(ui->fichaBotaoAtendimento, SIGNAL(clicked()), this, SLOT(buttonAtendimentoClicked()));

    connect(ui->fichaBotaoAtualizar, SIGNAL(clicked()), this, SLOT(buttonAtualizarClicked()));

    connect(ui->fichaBotaoFechar, SIGNAL(clicked()), this, SLOT(buttonFecharClicked()));
}

void Ficha::buttonHistoricoClicked(){
    HistoricoAtendimento *historicoAtendimento = new HistoricoAtendimento;
    historicoAtendimento->show();
    this->hide();
    //cout << "Ver historico" << endl;
}

void Ficha::buttonAtendimentoClicked(){
    Atendimento *atendimento = new Atendimento;
    atendimento->show();
    this->hide();
    //cout << "Atender paciente" << endl;
}

void Ficha::buttonAtualizarClicked(){
    cout << "Atualizar ficha" << endl;
}

void Ficha::buttonFecharClicked(){
    this->close();
    //cout << "Fechar Janela" << endl;
}

Ficha::~Ficha()
{
    delete ui;
}
