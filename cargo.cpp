#include "funcionario.h"
#include "cargo.h"
// include para o bd:
#include <QtSql/QSql>
#include <QtSql/qsqldatabase.h>
#include <QtSql/qsql.h>
#include <QtSql/qsqlquery.h>


Cargo::Cargo()
{

}

Cargo::admissaoCargoQuery(QSqlQuery &query, Cargo cargoAdmitido, funcionario func){
    query.prepare("INSERT INTO cargoatual (Cargo_idCargo, dataInicio, Funcionario_CPF)"
                  "VALUES (:id, :dataInicio, :funcionario_CPF)");

    query.addBindValue(":id",cargoAdmitido.id);
    query.addBindValue(":dataInicio",QDate.currentDate());
    query.addBindValue(":funcionario_CPF",func->cpf);
    query.addBindValue(":idCargoAtual", cargo);

}

Cargo::admissaoCargo()
{

}
//adicionar caixa bd e sistema
