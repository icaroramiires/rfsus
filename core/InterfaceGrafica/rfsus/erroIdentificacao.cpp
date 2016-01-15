#include "erroIdentificacao.h"
#include "ui_erroIdentificacao.h"
#include <iostream>

using namespace std;

ErroIdentificacao::ErroIdentificacao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ErroIdentificacao)
{
    ui->setupUi(this);

    connect(ui->erroIdentificacaoBotao, SIGNAL(clicked()), this, SLOT(buttonVoltarClicked()));
}

void ErroIdentificacao::buttonVoltarClicked(){
    this->close();
    //cout << "Erro de identificação!" << endl;
}

ErroIdentificacao::~ErroIdentificacao()
{
    delete ui;
}
