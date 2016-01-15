#-------------------------------------------------
#
# Project created by QtCreator 2015-10-15T15:40:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = rfsus
TEMPLATE = app


SOURCES += main.cpp\
        identificacao.cpp \
    ficha.cpp \
    historicoAtendimento.cpp \
    atendimento.cpp \
    confirmacaoIdentificacao.cpp \
    erroIdentificacao.cpp \
    erroAtendimento.cpp \
    confirmacaoAtendimento.cpp

HEADERS  += identificacao.h \
    ficha.h \
    historicoAtendimento.h \
    atendimento.h \
    confirmacaoIdentificacao.h \
    erroIdentificacao.h \
    erroAtendimento.h \
    confirmacaoAtendimento.h

FORMS    += identificacao.ui \
    ficha.ui \
    historicoatendimento.ui \
    atendimento.ui \
    confirmacaoIdentificacao.ui \
    erroIdentificacao.ui \
    erroAtendimento.ui \
    confirmacaoAtendimento.ui
