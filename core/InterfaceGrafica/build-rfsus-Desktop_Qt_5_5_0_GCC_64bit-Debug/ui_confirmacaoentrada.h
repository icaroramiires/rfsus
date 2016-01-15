/********************************************************************************
** Form generated from reading UI file 'confirmacaoEntrada.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMACAOENTRADA_H
#define UI_CONFIRMACAOENTRADA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_confirmacaoEntrada
{
public:
    QDialogButtonBox *buttonBox;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *confirmacaoEntrada)
    {
        if (confirmacaoEntrada->objectName().isEmpty())
            confirmacaoEntrada->setObjectName(QStringLiteral("confirmacaoEntrada"));
        confirmacaoEntrada->resize(400, 300);
        buttonBox = new QDialogButtonBox(confirmacaoEntrada);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(20, 200, 261, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        plainTextEdit = new QPlainTextEdit(confirmacaoEntrada);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(30, 50, 341, 131));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(20);
        plainTextEdit->setFont(font);

        retranslateUi(confirmacaoEntrada);
        QObject::connect(buttonBox, SIGNAL(accepted()), confirmacaoEntrada, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), confirmacaoEntrada, SLOT(reject()));

        QMetaObject::connectSlotsByName(confirmacaoEntrada);
    } // setupUi

    void retranslateUi(QDialog *confirmacaoEntrada)
    {
        confirmacaoEntrada->setWindowTitle(QApplication::translate("confirmacaoEntrada", "Dialog", 0));
        plainTextEdit->setPlainText(QApplication::translate("confirmacaoEntrada", "Encaminhe o paciente para o medico X na sala Y.", 0));
    } // retranslateUi

};

namespace Ui {
    class confirmacaoEntrada: public Ui_confirmacaoEntrada {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMACAOENTRADA_H
