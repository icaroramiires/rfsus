/********************************************************************************
** Form generated from reading UI file 'confirmacaoIdentificacao.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMACAOIDENTIFICACAO_H
#define UI_CONFIRMACAOIDENTIFICACAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ConfirmacaoIdentificacao
{
public:
    QPushButton *confirmacaoIdentificacaoBotao;
    QLabel *confirmacaoIdentificacaoLabel;

    void setupUi(QDialog *ConfirmacaoIdentificacao)
    {
        if (ConfirmacaoIdentificacao->objectName().isEmpty())
            ConfirmacaoIdentificacao->setObjectName(QStringLiteral("ConfirmacaoIdentificacao"));
        ConfirmacaoIdentificacao->resize(362, 173);
        ConfirmacaoIdentificacao->setMinimumSize(QSize(362, 173));
        ConfirmacaoIdentificacao->setMaximumSize(QSize(362, 173));
        confirmacaoIdentificacaoBotao = new QPushButton(ConfirmacaoIdentificacao);
        confirmacaoIdentificacaoBotao->setObjectName(QStringLiteral("confirmacaoIdentificacaoBotao"));
        confirmacaoIdentificacaoBotao->setGeometry(QRect(120, 130, 111, 31));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(16);
        confirmacaoIdentificacaoBotao->setFont(font);
        confirmacaoIdentificacaoLabel = new QLabel(ConfirmacaoIdentificacao);
        confirmacaoIdentificacaoLabel->setObjectName(QStringLiteral("confirmacaoIdentificacaoLabel"));
        confirmacaoIdentificacaoLabel->setGeometry(QRect(10, 10, 341, 101));
        confirmacaoIdentificacaoLabel->setFont(font);
        confirmacaoIdentificacaoLabel->setContextMenuPolicy(Qt::DefaultContextMenu);
        confirmacaoIdentificacaoLabel->setScaledContents(false);
        confirmacaoIdentificacaoLabel->setWordWrap(true);

        retranslateUi(ConfirmacaoIdentificacao);

        QMetaObject::connectSlotsByName(ConfirmacaoIdentificacao);
    } // setupUi

    void retranslateUi(QDialog *ConfirmacaoIdentificacao)
    {
        ConfirmacaoIdentificacao->setWindowTitle(QApplication::translate("ConfirmacaoIdentificacao", "Dialog", 0));
        confirmacaoIdentificacaoBotao->setText(QApplication::translate("ConfirmacaoIdentificacao", "OK", 0));
        confirmacaoIdentificacaoLabel->setText(QApplication::translate("ConfirmacaoIdentificacao", "Encaminhe o paciente para o medico Y na sala X.", 0));
    } // retranslateUi

};

namespace Ui {
    class ConfirmacaoIdentificacao: public Ui_ConfirmacaoIdentificacao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMACAOIDENTIFICACAO_H
