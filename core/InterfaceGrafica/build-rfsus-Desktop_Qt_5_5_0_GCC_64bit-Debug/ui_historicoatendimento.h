/********************************************************************************
** Form generated from reading UI file 'historicoatendimento.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORICOATENDIMENTO_H
#define UI_HISTORICOATENDIMENTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HistoricoAtendimento
{
public:
    QWidget *centralwidget;
    QFrame *historicoLine;
    QFrame *historicoLine2;
    QLabel *historicoLabelNome;
    QLabel *historicoLabel;
    QTableWidget *historicoTable;
    QTextEdit *historicoText;
    QPushButton *historicoBotaoVoltar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HistoricoAtendimento)
    {
        if (HistoricoAtendimento->objectName().isEmpty())
            HistoricoAtendimento->setObjectName(QStringLiteral("HistoricoAtendimento"));
        HistoricoAtendimento->resize(706, 600);
        HistoricoAtendimento->setMinimumSize(QSize(706, 600));
        HistoricoAtendimento->setMaximumSize(QSize(706, 600));
        centralwidget = new QWidget(HistoricoAtendimento);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        historicoLine = new QFrame(centralwidget);
        historicoLine->setObjectName(QStringLiteral("historicoLine"));
        historicoLine->setGeometry(QRect(10, 30, 691, 16));
        historicoLine->setFrameShape(QFrame::HLine);
        historicoLine->setFrameShadow(QFrame::Sunken);
        historicoLine2 = new QFrame(centralwidget);
        historicoLine2->setObjectName(QStringLiteral("historicoLine2"));
        historicoLine2->setGeometry(QRect(10, 110, 691, 16));
        historicoLine2->setFrameShape(QFrame::HLine);
        historicoLine2->setFrameShadow(QFrame::Sunken);
        historicoLabelNome = new QLabel(centralwidget);
        historicoLabelNome->setObjectName(QStringLiteral("historicoLabelNome"));
        historicoLabelNome->setGeometry(QRect(10, 60, 561, 23));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(16);
        historicoLabelNome->setFont(font);
        historicoLabel = new QLabel(centralwidget);
        historicoLabel->setObjectName(QStringLiteral("historicoLabel"));
        historicoLabel->setGeometry(QRect(10, 10, 211, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(18);
        historicoLabel->setFont(font1);
        historicoTable = new QTableWidget(centralwidget);
        if (historicoTable->columnCount() < 2)
            historicoTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        historicoTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        historicoTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (historicoTable->rowCount() < 5)
            historicoTable->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        historicoTable->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        historicoTable->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        historicoTable->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        historicoTable->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        historicoTable->setVerticalHeaderItem(4, __qtablewidgetitem6);
        historicoTable->setObjectName(QStringLiteral("historicoTable"));
        historicoTable->setGeometry(QRect(10, 130, 691, 151));
        historicoText = new QTextEdit(centralwidget);
        historicoText->setObjectName(QStringLiteral("historicoText"));
        historicoText->setGeometry(QRect(10, 290, 691, 201));
        historicoBotaoVoltar = new QPushButton(centralwidget);
        historicoBotaoVoltar->setObjectName(QStringLiteral("historicoBotaoVoltar"));
        historicoBotaoVoltar->setGeometry(QRect(600, 510, 99, 27));
        HistoricoAtendimento->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HistoricoAtendimento);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 706, 25));
        HistoricoAtendimento->setMenuBar(menubar);
        statusbar = new QStatusBar(HistoricoAtendimento);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        HistoricoAtendimento->setStatusBar(statusbar);

        retranslateUi(HistoricoAtendimento);

        QMetaObject::connectSlotsByName(HistoricoAtendimento);
    } // setupUi

    void retranslateUi(QMainWindow *HistoricoAtendimento)
    {
        HistoricoAtendimento->setWindowTitle(QApplication::translate("HistoricoAtendimento", "MainWindow", 0));
        historicoLabelNome->setText(QApplication::translate("HistoricoAtendimento", "NOME:", 0));
        historicoLabel->setText(QApplication::translate("HistoricoAtendimento", "HIST\303\223RICO:", 0));
        QTableWidgetItem *___qtablewidgetitem = historicoTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("HistoricoAtendimento", "Entrada", 0));
        QTableWidgetItem *___qtablewidgetitem1 = historicoTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("HistoricoAtendimento", "Saida", 0));
        QTableWidgetItem *___qtablewidgetitem2 = historicoTable->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("HistoricoAtendimento", "Data", 0));
        QTableWidgetItem *___qtablewidgetitem3 = historicoTable->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("HistoricoAtendimento", "Data", 0));
        QTableWidgetItem *___qtablewidgetitem4 = historicoTable->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("HistoricoAtendimento", "Data", 0));
        QTableWidgetItem *___qtablewidgetitem5 = historicoTable->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QApplication::translate("HistoricoAtendimento", "Data", 0));
        QTableWidgetItem *___qtablewidgetitem6 = historicoTable->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QApplication::translate("HistoricoAtendimento", "Data", 0));
        historicoBotaoVoltar->setText(QApplication::translate("HistoricoAtendimento", "Voltar", 0));
    } // retranslateUi

};

namespace Ui {
    class HistoricoAtendimento: public Ui_HistoricoAtendimento {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORICOATENDIMENTO_H
