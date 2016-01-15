/********************************************************************************
** Form generated from reading UI file 'erroIdentificacao.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERROIDENTIFICACAO_H
#define UI_ERROIDENTIFICACAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ErroIdentificacao
{
public:
    QPushButton *erroIdentificacaoBotao;
    QLabel *erroIdentificacaoLabel;

    void setupUi(QDialog *ErroIdentificacao)
    {
        if (ErroIdentificacao->objectName().isEmpty())
            ErroIdentificacao->setObjectName(QStringLiteral("ErroIdentificacao"));
        ErroIdentificacao->resize(362, 173);
        ErroIdentificacao->setMinimumSize(QSize(362, 173));
        ErroIdentificacao->setMaximumSize(QSize(362, 173));
        erroIdentificacaoBotao = new QPushButton(ErroIdentificacao);
        erroIdentificacaoBotao->setObjectName(QStringLiteral("erroIdentificacaoBotao"));
        erroIdentificacaoBotao->setGeometry(QRect(120, 120, 111, 31));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(16);
        erroIdentificacaoBotao->setFont(font);
        erroIdentificacaoLabel = new QLabel(ErroIdentificacao);
        erroIdentificacaoLabel->setObjectName(QStringLiteral("erroIdentificacaoLabel"));
        erroIdentificacaoLabel->setGeometry(QRect(60, 10, 241, 71));
        erroIdentificacaoLabel->setFont(font);
        erroIdentificacaoLabel->setContextMenuPolicy(Qt::DefaultContextMenu);
        erroIdentificacaoLabel->setScaledContents(false);
        erroIdentificacaoLabel->setWordWrap(true);

        retranslateUi(ErroIdentificacao);

        QMetaObject::connectSlotsByName(ErroIdentificacao);
    } // setupUi

    void retranslateUi(QDialog *ErroIdentificacao)
    {
        ErroIdentificacao->setWindowTitle(QApplication::translate("ErroIdentificacao", "Dialog", 0));
        erroIdentificacaoBotao->setText(QApplication::translate("ErroIdentificacao", "Voltar", 0));
        erroIdentificacaoLabel->setText(QApplication::translate("ErroIdentificacao", "Falha na Identifica\303\247\303\243o.", 0));
    } // retranslateUi

};

namespace Ui {
    class ErroIdentificacao: public Ui_ErroIdentificacao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERROIDENTIFICACAO_H
