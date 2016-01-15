/********************************************************************************
** Form generated from reading UI file 'erroAtendimento.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERROATENDIMENTO_H
#define UI_ERROATENDIMENTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ErroAtendimento
{
public:
    QPushButton *erroAtendimentoBotao;
    QLabel *erroIdentificacaoLabel;

    void setupUi(QDialog *ErroAtendimento)
    {
        if (ErroAtendimento->objectName().isEmpty())
            ErroAtendimento->setObjectName(QStringLiteral("ErroAtendimento"));
        ErroAtendimento->resize(362, 140);
        ErroAtendimento->setMinimumSize(QSize(362, 140));
        ErroAtendimento->setMaximumSize(QSize(362, 140));
        erroAtendimentoBotao = new QPushButton(ErroAtendimento);
        erroAtendimentoBotao->setObjectName(QStringLiteral("erroAtendimentoBotao"));
        erroAtendimentoBotao->setGeometry(QRect(120, 90, 111, 31));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(16);
        erroAtendimentoBotao->setFont(font);
        erroIdentificacaoLabel = new QLabel(ErroAtendimento);
        erroIdentificacaoLabel->setObjectName(QStringLiteral("erroIdentificacaoLabel"));
        erroIdentificacaoLabel->setGeometry(QRect(70, 10, 231, 71));
        erroIdentificacaoLabel->setFont(font);
        erroIdentificacaoLabel->setContextMenuPolicy(Qt::DefaultContextMenu);
        erroIdentificacaoLabel->setScaledContents(false);
        erroIdentificacaoLabel->setWordWrap(true);

        retranslateUi(ErroAtendimento);

        QMetaObject::connectSlotsByName(ErroAtendimento);
    } // setupUi

    void retranslateUi(QDialog *ErroAtendimento)
    {
        ErroAtendimento->setWindowTitle(QApplication::translate("ErroAtendimento", "Dialog", 0));
        erroAtendimentoBotao->setText(QApplication::translate("ErroAtendimento", "Voltar", 0));
        erroIdentificacaoLabel->setText(QApplication::translate("ErroAtendimento", "Falha no salvamento.", 0));
    } // retranslateUi

};

namespace Ui {
    class ErroAtendimento: public Ui_ErroAtendimento {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERROATENDIMENTO_H
