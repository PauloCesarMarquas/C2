#-------------------------------------------------
#
# Project created by QtCreator 2015-09-01T09:39:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Restaurante
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    objetosutil.cpp \
    pessoa.cpp \
    funcionario.cpp \
    cargo.cpp \
    fornecedor.cpp \
    mesa.cpp \
    produtos.cpp \
    pedido.cpp \
    sqlresultados.cpp \
    mathheus.cpp \
    produtoquilo.cpp

HEADERS  += mainwindow.h \
    pessoa.h \
    funcionario.h \
    cargo.h \
    fornecedor.h \
    mesa.h \
    produtos.h \
    pedido.h \
    sqlresultados.h \
    mathheus.h \
    produtoquilo.h

FORMS    += mainwindow.ui
