#include "consulta.h"
#include "ui_consulta.h"

consulta::consulta(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::consulta)
{
    ui->setupUi(this);
}

consulta::~consulta()
{
    delete ui;
}
