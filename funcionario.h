#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include "qstring.h"
#include "QDate"
#include "pessoa.h"

class funcionario:pessoa
{
    QString cargo;
    double salaraio;
    QDate admissão;         // diferente do cargo essa data é a data da admissao do funcionario na empresa
    QDate demissao;        //diferente do cargo essa data é a data da demissao do funcionario da empresa
    int idCargo;


public:
    funcionario();
    int mudaOCargo();
    QDate admissao();
    QDate demissao();


};

#endif // FUNCIONARIO_H
