/********************************************************************************
** Form generated from reading UI file 'consulta.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSULTA_H
#define UI_CONSULTA_H

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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_consulta
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QFrame *line;
    QLabel *identificacaoLabelNome;
    QLabel *identificacaoLabelNascimento;
    QLabel *identificacaoLabelRG;
    QLabel *identificacaoLabelRG_2;
    QGraphicsView *identificacaoFoto;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *identificacaoLabelNascimento_2;
    QComboBox *comboBox;
    QMenuBar *menubar;
    QMenu *menuRFSUS_Consulta;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *consulta)
    {
        if (consulta->objectName().isEmpty())
            consulta->setObjectName(QStringLiteral("consulta"));
        consulta->resize(800, 600);
        centralwidget = new QWidget(consulta);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 121, 31));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(18);
        label->setFont(font);
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(10, 30, 621, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        identificacaoLabelNome = new QLabel(centralwidget);
        identificacaoLabelNome->setObjectName(QStringLiteral("identificacaoLabelNome"));
        identificacaoLabelNome->setGeometry(QRect(20, 100, 371, 23));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(12);
        identificacaoLabelNome->setFont(font1);
        identificacaoLabelNascimento = new QLabel(centralwidget);
        identificacaoLabelNascimento->setObjectName(QStringLiteral("identificacaoLabelNascimento"));
        identificacaoLabelNascimento->setGeometry(QRect(20, 130, 371, 23));
        identificacaoLabelNascimento->setFont(font1);
        identificacaoLabelRG = new QLabel(centralwidget);
        identificacaoLabelRG->setObjectName(QStringLiteral("identificacaoLabelRG"));
        identificacaoLabelRG->setGeometry(QRect(20, 70, 371, 31));
        identificacaoLabelRG->setFont(font1);
        identificacaoLabelRG_2 = new QLabel(centralwidget);
        identificacaoLabelRG_2->setObjectName(QStringLiteral("identificacaoLabelRG_2"));
        identificacaoLabelRG_2->setGeometry(QRect(20, 40, 371, 31));
        identificacaoLabelRG_2->setFont(font1);
        identificacaoFoto = new QGraphicsView(centralwidget);
        identificacaoFoto->setObjectName(QStringLiteral("identificacaoFoto"));
        identificacaoFoto->setGeometry(QRect(480, 50, 121, 141));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 200, 67, 17));
        label_2->setFont(font1);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 160, 200, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        identificacaoLabelNascimento_2 = new QLabel(widget);
        identificacaoLabelNascimento_2->setObjectName(QStringLiteral("identificacaoLabelNascimento_2"));
        identificacaoLabelNascimento_2->setFont(font1);

        horizontalLayout->addWidget(identificacaoLabelNascimento_2);

        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);

        consulta->setCentralWidget(centralwidget);
        menubar = new QMenuBar(consulta);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        menuRFSUS_Consulta = new QMenu(menubar);
        menuRFSUS_Consulta->setObjectName(QStringLiteral("menuRFSUS_Consulta"));
        consulta->setMenuBar(menubar);
        statusbar = new QStatusBar(consulta);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        consulta->setStatusBar(statusbar);

        menubar->addAction(menuRFSUS_Consulta->menuAction());

        retranslateUi(consulta);

        QMetaObject::connectSlotsByName(consulta);
    } // setupUi

    void retranslateUi(QMainWindow *consulta)
    {
        consulta->setWindowTitle(QApplication::translate("consulta", "MainWindow", 0));
        label->setText(QApplication::translate("consulta", "Consulta:", 0));
        identificacaoLabelNome->setText(QApplication::translate("consulta", "NOME:", 0));
        identificacaoLabelNascimento->setText(QApplication::translate("consulta", "DATA DE NASCIMENTO:", 0));
        identificacaoLabelRG->setText(QApplication::translate("consulta", "RG:", 0));
        identificacaoLabelRG_2->setText(QApplication::translate("consulta", "ID:", 0));
        label_2->setText(QApplication::translate("consulta", "ALTURA:", 0));
        identificacaoLabelNascimento_2->setText(QApplication::translate("consulta", "TIPO SANGUINEO:", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("consulta", "O+", 0)
         << QApplication::translate("consulta", "O-", 0)
         << QApplication::translate("consulta", "A+", 0)
        );
        menuRFSUS_Consulta->setTitle(QApplication::translate("consulta", "RFSUS - Consulta", 0));
    } // retranslateUi

};

namespace Ui {
    class consulta: public Ui_consulta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSULTA_H
