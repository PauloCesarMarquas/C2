#include "funcionario.h"
#include "cargo.h"
// bibliotecas padrao
#include "iostream"
#include "stdlib.h"
// include para o bd:
#include <QtSql/QSql>
#include <QtSql/qsqldatabase.h>
#include <QtSql/qsql.h>
#include <QtSql/qsqlquery.h>
// includes para o bd, codigo do sistema
#include "sqlresultados.h"

using namespace std;

funcionario::funcionario()
{
    cout << "criando Funcionario" << endl;
    cout << "insira o Nome: "; cin >> this->nome;
    cout << "insira o CPF"
}

void funcionario::criaFuncionarioQuery(QSqlQuery &query, funcionario func){
    query.prepare("INSERT INTO `cargoatual` (Cargo_idCargo, dataInicio, Funcionario_CPF)"
                  "VALUES (:id, :dataInicio, :funcionario_CPF)");

    query.addBindValue(":id",cargoAdmitido.id);
    query.addBindValue(":dataInicio",QDate.currentDate());
    query.addBindValue(":funcionario_CPF",func->cpf);
    query.addBindValue(":idCargoAtual", cargo);
    query.exec();
}

void funcionario::criaFuncionario(funcionario func){
    QSqlQuery query = new QSqlQuery;


}
