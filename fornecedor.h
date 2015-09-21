#ifndef FORNECEDOR_H
#define FORNECEDOR_H
#include "qstring.h"
#include "QDate"



class fornecedor
{
public:
    QString nome;
    QString contato;

public:
    fornecedor();
    criaFornecedor(fornecedor forn);
    criaFornecedorQuery(QSqlQuery &query, fornecedor forn);

};

#endif // FORNECEDOR_H
