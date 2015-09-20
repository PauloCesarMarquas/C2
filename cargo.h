#ifndef CARGO_H
#define CARGO_H
#include "qstring.h"
#include "QDate"


class Cargo
{
    QString nome;
    QDate admissao;         // essa é a data da admissao do funcionario neste cargo
    QDate exonerado;        // essa é a data da exoneração do funcionario deste cargo
    double salario;
    int id;


public:
    Cargo();
    QDate admissaoCargo();  //retorna a data da admissao/promoção do funcionario para cargo
    QDate admissaoCargoQuery();
    QDate exonerardoCargo();//retorna a data da exoneração do cargo atual
    void criaCargo();


};

#endif // CARGO_H
