#ifndef PESSOA_H
#define PESSOA_H
#include "qstring.h"
#include "QDate"

class Pessoa
{
public:
    QString nome;
    long int cpf;
    QString rg;
    QDate nascimento;

public:
    Pessoa();

};

#endif // PESSOA_H
