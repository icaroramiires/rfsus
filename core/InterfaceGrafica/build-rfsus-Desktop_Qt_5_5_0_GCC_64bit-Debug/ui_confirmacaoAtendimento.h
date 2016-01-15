/********************************************************************************
** Form generated from reading UI file 'confirmacaoAtendimento.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMACAOATENDIMENTO_H
#define UI_CONFIRMACAOATENDIMENTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ConfirmacaoAtendimento
{
public:
    QLabel *confirmacaoIdentificacaoLabel;
    QPushButton *confirmacaoAtendimentoBotao;

    void setupUi(QDialog *ConfirmacaoAtendimento)
    {
        if (ConfirmacaoAtendimento->objectName().isEmpty())
            ConfirmacaoAtendimento->setObjectName(QStringLiteral("ConfirmacaoAtendimento"));
        ConfirmacaoAtendimento->resize(362, 140);
        ConfirmacaoAtendimento->setMinimumSize(QSize(362, 140));
        ConfirmacaoAtendimento->setMaximumSize(QSize(362, 140));
        confirmacaoIdentificacaoLabel = new QLabel(ConfirmacaoAtendimento);
        confirmacaoIdentificacaoLabel->setObjectName(QStringLiteral("confirmacaoIdentificacaoLabel"));
        confirmacaoIdentificacaoLabel->setGeometry(QRect(20, 10, 321, 71));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(16);
        confirmacaoIdentificacaoLabel->setFont(font);
        confirmacaoIdentificacaoLabel->setContextMenuPolicy(Qt::DefaultContextMenu);
        confirmacaoIdentificacaoLabel->setScaledContents(false);
        confirmacaoIdentificacaoLabel->setWordWrap(true);
        confirmacaoAtendimentoBotao = new QPushButton(ConfirmacaoAtendimento);
        confirmacaoAtendimentoBotao->setObjectName(QStringLiteral("confirmacaoAtendimentoBotao"));
        confirmacaoAtendimentoBotao->setGeometry(QRect(120, 90, 111, 31));
        confirmacaoAtendimentoBotao->setFont(font);

        retranslateUi(ConfirmacaoAtendimento);

        QMetaObject::connectSlotsByName(ConfirmacaoAtendimento);
    } // setupUi

    void retranslateUi(QDialog *ConfirmacaoAtendimento)
    {
        ConfirmacaoAtendimento->setWindowTitle(QApplication::translate("ConfirmacaoAtendimento", "Dialog", 0));
        confirmacaoIdentificacaoLabel->setText(QApplication::translate("ConfirmacaoAtendimento", "Atendimento salvo com sucesso!", 0));
        confirmacaoAtendimentoBotao->setText(QApplication::translate("ConfirmacaoAtendimento", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class ConfirmacaoAtendimento: public Ui_ConfirmacaoAtendimento {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMACAOATENDIMENTO_H
