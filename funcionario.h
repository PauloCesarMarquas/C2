#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include "qstring.h"
#include "QDate"
#include "pessoa.h"

class  funcionario
{
    QString cargo;
    double salaraio;
    QDate admissao;         // diferente do cargo essa data é a data da admissao do funcionario na empresa
    QDate demissao;        //diferente do cargo essa data é a data da demissao do funcionario da empresa
    int idCargo;
    QString nome;
    long int cpf;
    QString rg;
    QDate nascimento;



public:
    funcionario();
    int mudaOCargo();
    void admissao();
    void demissao();
    void criaFuncionarioQuery(QSqlQuery &query, funcionario func);
    void criaFuncionario(funcionario func);



};

#endif // FUNCIONARIO_H
