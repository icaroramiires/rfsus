/********************************************************************************
** Form generated from reading UI file 'atendimento.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATENDIMENTO_H
#define UI_ATENDIMENTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Atendimento
{
public:
    QWidget *centralwidget;
    QFrame *atendimentoLine;
    QLabel *atendimentoLabel;
    QFrame *atendimentoLine2;
    QLabel *atendimentoLabelNome;
    QPushButton *atendimentoBotaoCardiaco;
    QPushButton *atendimentoBotaoTemperatura;
    QFrame *atendimentoLine3;
    QTextBrowser *atendimentoTextoAvaliacao;
    QPushButton *atendimentoBotaoVoltar;
    QPushButton *atendimentoBotaoInternamento;
    QPushButton *atendimentoBotaoSalvarAtendimento;
    QLCDNumber *atendimentoLcdCardiaco;
    QLCDNumber *atendimentoLcdTemperatura;
    QMenuBar *menubar;
    QMenu *menuRFSUS_Atendimento;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Atendimento)
    {
        if (Atendimento->objectName().isEmpty())
            Atendimento->setObjectName(QStringLiteral("Atendimento"));
        Atendimento->resize(707, 600);
        Atendimento->setMinimumSize(QSize(707, 600));
        Atendimento->setMaximumSize(QSize(707, 600));
        centralwidget = new QWidget(Atendimento);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        atendimentoLine = new QFrame(centralwidget);
        atendimentoLine->setObjectName(QStringLiteral("atendimentoLine"));
        atendimentoLine->setGeometry(QRect(10, 30, 691, 16));
        atendimentoLine->setFrameShape(QFrame::HLine);
        atendimentoLine->setFrameShadow(QFrame::Sunken);
        atendimentoLabel = new QLabel(centralwidget);
        atendimentoLabel->setObjectName(QStringLiteral("atendimentoLabel"));
        atendimentoLabel->setGeometry(QRect(10, 10, 211, 31));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(18);
        atendimentoLabel->setFont(font);
        atendimentoLine2 = new QFrame(centralwidget);
        atendimentoLine2->setObjectName(QStringLiteral("atendimentoLine2"));
        atendimentoLine2->setGeometry(QRect(10, 110, 691, 16));
        atendimentoLine2->setFrameShape(QFrame::HLine);
        atendimentoLine2->setFrameShadow(QFrame::Sunken);
        atendimentoLabelNome = new QLabel(centralwidget);
        atendimentoLabelNome->setObjectName(QStringLiteral("atendimentoLabelNome"));
        atendimentoLabelNome->setGeometry(QRect(10, 60, 561, 23));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(16);
        atendimentoLabelNome->setFont(font1);
        atendimentoBotaoCardiaco = new QPushButton(centralwidget);
        atendimentoBotaoCardiaco->setObjectName(QStringLiteral("atendimentoBotaoCardiaco"));
        atendimentoBotaoCardiaco->setGeometry(QRect(110, 220, 141, 31));
        atendimentoBotaoTemperatura = new QPushButton(centralwidget);
        atendimentoBotaoTemperatura->setObjectName(QStringLiteral("atendimentoBotaoTemperatura"));
        atendimentoBotaoTemperatura->setGeometry(QRect(430, 216, 161, 31));
        atendimentoLine3 = new QFrame(centralwidget);
        atendimentoLine3->setObjectName(QStringLiteral("atendimentoLine3"));
        atendimentoLine3->setGeometry(QRect(10, 260, 691, 16));
        atendimentoLine3->setFrameShape(QFrame::HLine);
        atendimentoLine3->setFrameShadow(QFrame::Sunken);
        atendimentoTextoAvaliacao = new QTextBrowser(centralwidget);
        atendimentoTextoAvaliacao->setObjectName(QStringLiteral("atendimentoTextoAvaliacao"));
        atendimentoTextoAvaliacao->setGeometry(QRect(30, 280, 641, 171));
        atendimentoBotaoVoltar = new QPushButton(centralwidget);
        atendimentoBotaoVoltar->setObjectName(QStringLiteral("atendimentoBotaoVoltar"));
        atendimentoBotaoVoltar->setGeometry(QRect(582, 481, 85, 27));
        atendimentoBotaoInternamento = new QPushButton(centralwidget);
        atendimentoBotaoInternamento->setObjectName(QStringLiteral("atendimentoBotaoInternamento"));
        atendimentoBotaoInternamento->setGeometry(QRect(445, 481, 131, 27));
        atendimentoBotaoSalvarAtendimento = new QPushButton(centralwidget);
        atendimentoBotaoSalvarAtendimento->setObjectName(QStringLiteral("atendimentoBotaoSalvarAtendimento"));
        atendimentoBotaoSalvarAtendimento->setGeometry(QRect(280, 481, 153, 27));
        atendimentoLcdCardiaco = new QLCDNumber(centralwidget);
        atendimentoLcdCardiaco->setObjectName(QStringLiteral("atendimentoLcdCardiaco"));
        atendimentoLcdCardiaco->setGeometry(QRect(100, 160, 161, 41));
        atendimentoLcdTemperatura = new QLCDNumber(centralwidget);
        atendimentoLcdTemperatura->setObjectName(QStringLiteral("atendimentoLcdTemperatura"));
        atendimentoLcdTemperatura->setGeometry(QRect(430, 160, 161, 41));
        Atendimento->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Atendimento);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 707, 25));
        menuRFSUS_Atendimento = new QMenu(menubar);
        menuRFSUS_Atendimento->setObjectName(QStringLiteral("menuRFSUS_Atendimento"));
        Atendimento->setMenuBar(menubar);
        statusbar = new QStatusBar(Atendimento);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Atendimento->setStatusBar(statusbar);

        menubar->addAction(menuRFSUS_Atendimento->menuAction());

        retranslateUi(Atendimento);

        QMetaObject::connectSlotsByName(Atendimento);
    } // setupUi

    void retranslateUi(QMainWindow *Atendimento)
    {
        Atendimento->setWindowTitle(QApplication::translate("Atendimento", "MainWindow", 0));
        atendimentoLabel->setText(QApplication::translate("Atendimento", "ATENDIMENTO:", 0));
        atendimentoLabelNome->setText(QApplication::translate("Atendimento", "NOME:", 0));
        atendimentoBotaoCardiaco->setText(QApplication::translate("Atendimento", "Leitura Card\303\255aca", 0));
        atendimentoBotaoTemperatura->setText(QApplication::translate("Atendimento", "Leitura Temperatura", 0));
        atendimentoTextoAvaliacao->setHtml(QApplication::translate("Atendimento", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Avalia\303\247\303\243o e recomenda\303\247\303\265es</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p></body></html>", 0));
        atendimentoBotaoVoltar->setText(QApplication::translate("Atendimento", "Voltar", 0));
        atendimentoBotaoInternamento->setText(QApplication::translate("Atendimento", "Internar Paciente", 0));
        atendimentoBotaoSalvarAtendimento->setText(QApplication::translate("Atendimento", "Salvar Atendimento", 0));
        menuRFSUS_Atendimento->setTitle(QApplication::translate("Atendimento", "RFSUS - Atendimento", 0));
    } // retranslateUi

};

namespace Ui {
    class Atendimento: public Ui_Atendimento {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATENDIMENTO_H
