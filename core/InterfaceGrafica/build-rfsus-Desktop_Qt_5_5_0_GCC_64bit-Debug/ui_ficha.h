/********************************************************************************
** Form generated from reading UI file 'ficha.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FICHA_H
#define UI_FICHA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ficha
{
public:
    QWidget *centralwidget;
    QFrame *line;
    QLabel *fichaLabel;
    QLabel *fichaLabelID;
    QLabel *fichaLabelNome;
    QLabel *fichaLabelNascimento;
    QLabel *fichaLabelPeso;
    QLabel *fichaLabelAltura;
    QTextBrowser *fichaTexto;
    QGraphicsView *fichaFoto;
    QScrollBar *fichaVerticalScrollBar;
    QPushButton *fichaBotaoFechar;
    QPushButton *fichaBotaoAtualizar;
    QPushButton *fichaBotaoAtendimento;
    QPushButton *fichaBotaoHistorico;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *fichaLabelTipoSanguineo;
    QComboBox *fichaBoxTipoSanguineo;
    QMenuBar *menubar;
    QMenu *menuRFSUS_Ficha_PAciente;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Ficha)
    {
        if (Ficha->objectName().isEmpty())
            Ficha->setObjectName(QStringLiteral("Ficha"));
        Ficha->resize(607, 590);
        Ficha->setMinimumSize(QSize(607, 590));
        Ficha->setMaximumSize(QSize(607, 590));
        centralwidget = new QWidget(Ficha);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(8, 30, 591, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        fichaLabel = new QLabel(centralwidget);
        fichaLabel->setObjectName(QStringLiteral("fichaLabel"));
        fichaLabel->setGeometry(QRect(20, 10, 381, 28));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(18);
        fichaLabel->setFont(font);
        fichaLabelID = new QLabel(centralwidget);
        fichaLabelID->setObjectName(QStringLiteral("fichaLabelID"));
        fichaLabelID->setGeometry(QRect(20, 50, 401, 17));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(12);
        fichaLabelID->setFont(font1);
        fichaLabelNome = new QLabel(centralwidget);
        fichaLabelNome->setObjectName(QStringLiteral("fichaLabelNome"));
        fichaLabelNome->setGeometry(QRect(20, 80, 401, 17));
        fichaLabelNome->setFont(font1);
        fichaLabelNascimento = new QLabel(centralwidget);
        fichaLabelNascimento->setObjectName(QStringLiteral("fichaLabelNascimento"));
        fichaLabelNascimento->setGeometry(QRect(20, 110, 401, 21));
        fichaLabelNascimento->setFont(font1);
        fichaLabelPeso = new QLabel(centralwidget);
        fichaLabelPeso->setObjectName(QStringLiteral("fichaLabelPeso"));
        fichaLabelPeso->setGeometry(QRect(20, 140, 401, 21));
        fichaLabelPeso->setFont(font1);
        fichaLabelAltura = new QLabel(centralwidget);
        fichaLabelAltura->setObjectName(QStringLiteral("fichaLabelAltura"));
        fichaLabelAltura->setGeometry(QRect(20, 170, 401, 21));
        fichaLabelAltura->setFont(font1);
        fichaTexto = new QTextBrowser(centralwidget);
        fichaTexto->setObjectName(QStringLiteral("fichaTexto"));
        fichaTexto->setGeometry(QRect(20, 240, 571, 201));
        fichaFoto = new QGraphicsView(centralwidget);
        fichaFoto->setObjectName(QStringLiteral("fichaFoto"));
        fichaFoto->setGeometry(QRect(470, 60, 121, 141));
        fichaVerticalScrollBar = new QScrollBar(centralwidget);
        fichaVerticalScrollBar->setObjectName(QStringLiteral("fichaVerticalScrollBar"));
        fichaVerticalScrollBar->setGeometry(QRect(570, 240, 20, 197));
        fichaVerticalScrollBar->setOrientation(Qt::Vertical);
        fichaBotaoFechar = new QPushButton(centralwidget);
        fichaBotaoFechar->setObjectName(QStringLiteral("fichaBotaoFechar"));
        fichaBotaoFechar->setGeometry(QRect(506, 480, 85, 29));
        fichaBotaoFechar->setFont(font1);
        fichaBotaoAtualizar = new QPushButton(centralwidget);
        fichaBotaoAtualizar->setObjectName(QStringLiteral("fichaBotaoAtualizar"));
        fichaBotaoAtualizar->setGeometry(QRect(379, 480, 121, 29));
        fichaBotaoAtualizar->setFont(font1);
        fichaBotaoAtendimento = new QPushButton(centralwidget);
        fichaBotaoAtendimento->setObjectName(QStringLiteral("fichaBotaoAtendimento"));
        fichaBotaoAtendimento->setGeometry(QRect(230, 480, 141, 29));
        fichaBotaoAtendimento->setFont(font1);
        fichaBotaoHistorico = new QPushButton(centralwidget);
        fichaBotaoHistorico->setObjectName(QStringLiteral("fichaBotaoHistorico"));
        fichaBotaoHistorico->setGeometry(QRect(116, 480, 101, 29));
        fichaBotaoHistorico->setFont(font1);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 200, 236, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        fichaLabelTipoSanguineo = new QLabel(layoutWidget);
        fichaLabelTipoSanguineo->setObjectName(QStringLiteral("fichaLabelTipoSanguineo"));
        fichaLabelTipoSanguineo->setFont(font1);

        horizontalLayout->addWidget(fichaLabelTipoSanguineo);

        fichaBoxTipoSanguineo = new QComboBox(layoutWidget);
        fichaBoxTipoSanguineo->setObjectName(QStringLiteral("fichaBoxTipoSanguineo"));

        horizontalLayout->addWidget(fichaBoxTipoSanguineo);

        Ficha->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Ficha);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 607, 25));
        menuRFSUS_Ficha_PAciente = new QMenu(menubar);
        menuRFSUS_Ficha_PAciente->setObjectName(QStringLiteral("menuRFSUS_Ficha_PAciente"));
        Ficha->setMenuBar(menubar);
        statusbar = new QStatusBar(Ficha);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Ficha->setStatusBar(statusbar);

        menubar->addAction(menuRFSUS_Ficha_PAciente->menuAction());

        retranslateUi(Ficha);

        QMetaObject::connectSlotsByName(Ficha);
    } // setupUi

    void retranslateUi(QMainWindow *Ficha)
    {
        Ficha->setWindowTitle(QApplication::translate("Ficha", "MainWindow", 0));
        fichaLabel->setText(QApplication::translate("Ficha", "FICHA PACIENTE:", 0));
        fichaLabelID->setText(QApplication::translate("Ficha", "ID: 123456789", 0));
        fichaLabelNome->setText(QApplication::translate("Ficha", "NOME: xxxxxxxxxxxxxx", 0));
        fichaLabelNascimento->setText(QApplication::translate("Ficha", "DATA DE NASCIMENTO: xx/xx/xxxx", 0));
        fichaLabelPeso->setText(QApplication::translate("Ficha", "PESO: xx Kg", 0));
        fichaLabelAltura->setText(QApplication::translate("Ficha", "ALTURA: x,xx m", 0));
        fichaTexto->setHtml(QApplication::translate("Ficha", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Informa\303\247\303\265es adicionais do paciente. exemplo: alergias, hist\303\263rico familar, etc.</p></body></html>", 0));
        fichaBotaoFechar->setText(QApplication::translate("Ficha", "Fechar", 0));
        fichaBotaoAtualizar->setText(QApplication::translate("Ficha", "Atualizar Ficha", 0));
        fichaBotaoAtendimento->setText(QApplication::translate("Ficha", "Atender Paciente", 0));
        fichaBotaoHistorico->setText(QApplication::translate("Ficha", "Ver Hist\303\263rico", 0));
        fichaLabelTipoSanguineo->setText(QApplication::translate("Ficha", "TIPO SANGUINEO:", 0));
        fichaBoxTipoSanguineo->clear();
        fichaBoxTipoSanguineo->insertItems(0, QStringList()
         << QApplication::translate("Ficha", "O+", 0)
         << QApplication::translate("Ficha", "O-", 0)
         << QApplication::translate("Ficha", "A-", 0)
         << QApplication::translate("Ficha", "A+", 0)
         << QApplication::translate("Ficha", "AB", 0)
        );
        menuRFSUS_Ficha_PAciente->setTitle(QApplication::translate("Ficha", "RFSUS - Ficha Paciente", 0));
    } // retranslateUi

};

namespace Ui {
    class Ficha: public Ui_Ficha {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FICHA_H
