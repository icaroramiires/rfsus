/********************************************************************************
** Form generated from reading UI file 'identificacao.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDENTIFICACAO_H
#define UI_IDENTIFICACAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Identificacao
{
public:
    QWidget *centralWidget;
    QGraphicsView *identificacaoFoto;
    QLabel *label;
    QLabel *identificacaoLabelRG;
    QLabel *identificacaoLabelNome;
    QLabel *identificacaoLabelNascimento;
    QLabel *label_5;
    QTextBrowser *identificacaoObservacao;
    QPushButton *identificacaoBotaoLimpar;
    QPushButton *identificacaoBotaoEntrada;
    QFrame *line;
    QLineEdit *identificacaoLineEdit;
    QMenuBar *menuBar;
    QMenu *menuRFSUS_Identific_o_de_Pacientes_do_SUS;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Identificacao)
    {
        if (Identificacao->objectName().isEmpty())
            Identificacao->setObjectName(QStringLiteral("Identificacao"));
        Identificacao->setWindowModality(Qt::NonModal);
        Identificacao->setEnabled(true);
        Identificacao->resize(607, 495);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Identificacao->sizePolicy().hasHeightForWidth());
        Identificacao->setSizePolicy(sizePolicy);
        Identificacao->setMinimumSize(QSize(607, 495));
        Identificacao->setMaximumSize(QSize(607, 495));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        Identificacao->setFont(font);
        Identificacao->setLayoutDirection(Qt::LeftToRight);
        centralWidget = new QWidget(Identificacao);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        identificacaoFoto = new QGraphicsView(centralWidget);
        identificacaoFoto->setObjectName(QStringLiteral("identificacaoFoto"));
        identificacaoFoto->setGeometry(QRect(470, 90, 121, 141));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(22, 0, 147, 28));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(18);
        label->setFont(font1);
        identificacaoLabelRG = new QLabel(centralWidget);
        identificacaoLabelRG->setObjectName(QStringLiteral("identificacaoLabelRG"));
        identificacaoLabelRG->setGeometry(QRect(30, 90, 371, 31));
        QFont font2;
        font2.setPointSize(12);
        identificacaoLabelRG->setFont(font2);
        identificacaoLabelNome = new QLabel(centralWidget);
        identificacaoLabelNome->setObjectName(QStringLiteral("identificacaoLabelNome"));
        identificacaoLabelNome->setGeometry(QRect(30, 130, 371, 23));
        identificacaoLabelNome->setFont(font2);
        identificacaoLabelNascimento = new QLabel(centralWidget);
        identificacaoLabelNascimento->setObjectName(QStringLiteral("identificacaoLabelNascimento"));
        identificacaoLabelNascimento->setGeometry(QRect(30, 170, 371, 23));
        identificacaoLabelNascimento->setFont(font2);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 210, 221, 23));
        label_5->setFont(font2);
        identificacaoObservacao = new QTextBrowser(centralWidget);
        identificacaoObservacao->setObjectName(QStringLiteral("identificacaoObservacao"));
        identificacaoObservacao->setGeometry(QRect(30, 240, 561, 131));
        identificacaoBotaoLimpar = new QPushButton(centralWidget);
        identificacaoBotaoLimpar->setObjectName(QStringLiteral("identificacaoBotaoLimpar"));
        identificacaoBotaoLimpar->setGeometry(QRect(470, 380, 121, 31));
        identificacaoBotaoLimpar->setFont(font2);
        identificacaoBotaoEntrada = new QPushButton(centralWidget);
        identificacaoBotaoEntrada->setObjectName(QStringLiteral("identificacaoBotaoEntrada"));
        identificacaoBotaoEntrada->setGeometry(QRect(340, 380, 121, 31));
        identificacaoBotaoEntrada->setFont(font2);
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 20, 591, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        identificacaoLineEdit = new QLineEdit(centralWidget);
        identificacaoLineEdit->setObjectName(QStringLiteral("identificacaoLineEdit"));
        identificacaoLineEdit->setEnabled(false);
        identificacaoLineEdit->setGeometry(QRect(30, 40, 561, 41));
        identificacaoLineEdit->setFont(font2);
        Identificacao->setCentralWidget(centralWidget);
        label->raise();
        identificacaoLabelRG->raise();
        identificacaoLabelNome->raise();
        identificacaoLabelNascimento->raise();
        label_5->raise();
        identificacaoFoto->raise();
        identificacaoObservacao->raise();
        identificacaoBotaoLimpar->raise();
        identificacaoBotaoEntrada->raise();
        line->raise();
        identificacaoLineEdit->raise();
        menuBar = new QMenuBar(Identificacao);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 607, 26));
        menuRFSUS_Identific_o_de_Pacientes_do_SUS = new QMenu(menuBar);
        menuRFSUS_Identific_o_de_Pacientes_do_SUS->setObjectName(QStringLiteral("menuRFSUS_Identific_o_de_Pacientes_do_SUS"));
        Identificacao->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Identificacao);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Identificacao->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Identificacao);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Identificacao->setStatusBar(statusBar);

        menuBar->addAction(menuRFSUS_Identific_o_de_Pacientes_do_SUS->menuAction());

        retranslateUi(Identificacao);

        QMetaObject::connectSlotsByName(Identificacao);
    } // setupUi

    void retranslateUi(QMainWindow *Identificacao)
    {
        Identificacao->setWindowTitle(QApplication::translate("Identificacao", "Identificacao", 0));
        label->setText(QApplication::translate("Identificacao", "Identifica\303\247\303\243o:", 0));
        identificacaoLabelRG->setText(QApplication::translate("Identificacao", "RG:", 0));
        identificacaoLabelNome->setText(QApplication::translate("Identificacao", "NOME:", 0));
        identificacaoLabelNascimento->setText(QApplication::translate("Identificacao", "DATA DE NASCIMENTO:", 0));
        label_5->setText(QApplication::translate("Identificacao", "OBSERVA\303\207OES:", 0));
        identificacaoObservacao->setHtml(QApplication::translate("Identificacao", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">OBS</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">OBS</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">OBS</p></body></html>", 0));
        identificacaoBotaoLimpar->setText(QApplication::translate("Identificacao", "Limpar Dados", 0));
        identificacaoBotaoEntrada->setText(QApplication::translate("Identificacao", "Dar Entrada", 0));
        identificacaoLineEdit->setText(QApplication::translate("Identificacao", "123456789", 0));
        menuRFSUS_Identific_o_de_Pacientes_do_SUS->setTitle(QApplication::translate("Identificacao", "RFSUS - Identific\303\247\303\243o de Pacientes do SUS", 0));
    } // retranslateUi

};

namespace Ui {
    class Identificacao: public Ui_Identificacao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDENTIFICACAO_H
