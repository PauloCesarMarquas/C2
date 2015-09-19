#ifndef PRODUTOS_H
#define PRODUTOS_H
#include "qstring.h"
#include "QDate"


class Produtos
{
public:
    int id;
    QString nome;
    QString tipo;
    virtual double estoque;
    double custo;

public:
    Produtos();
    virtual double addEstoque();
    virtual void addProduto();
    virtual void removeProduto();
};

#endif // PRODUTOS_H
