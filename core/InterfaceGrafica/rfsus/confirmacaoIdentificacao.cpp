#include "confirmacaoIdentificacao.h"
#include "ui_confirmacaoIdentificacao.h"
#include <iostream>

using namespace std;

ConfirmacaoIdentificacao::ConfirmacaoIdentificacao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConfirmacaoIdentificacao)
{
    ui->setupUi(this);

    connect(ui->confirmacaoIdentificacaoBotao, SIGNAL(clicked()), this, SLOT(buttonOKClicked()));
}

void ConfirmacaoIdentificacao::buttonOKClicked(){
    cout << "Identificação confirmada!" << endl;
}

ConfirmacaoIdentificacao::~ConfirmacaoIdentificacao()
{
    delete ui;
}
