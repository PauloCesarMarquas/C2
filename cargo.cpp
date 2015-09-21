
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


Cargo::Cargo()
{

}

Cargo::admissaoCargoQuery(QSqlQuery &query, Cargo cargoAdmitido, funcionario func){
    query.prepare("INSERT INTO `cargoatual` (Cargo_idCargo, dataInicio, Funcionario_CPF)"
                  "VALUES (:id, :dataInicio, :funcionario_CPF)");

    query.addBindValue(":id",cargoAdmitido.id);
    query.addBindValue(":dataInicio",QDate.currentDate());
    query.addBindValue(":funcionario_CPF",func->cpf);
    query.addBindValue(":idCargoAtual", cargo);
    query.exec();
}

Cargo::admissaoCargo( Cargo carg, funcionario fun){
    string resultado;
    SqlResultados sql=new SqlResultados;
    QSqlQuery query=new QSqlQuery;
    sql.iniBD();
    cout << "Selecionar Funcionario" << endl << "insira o id do funcionario ";
    cin >> fun.id >> endl;
    query = sql.busca("select * from `funcionario` where id ="+cargo.id);

    resultado.copy(query.value(0).toString());
    cout << "Funcionario selecionado: " << resultado << endl;

    cout << "Selecionar Cargo" << endl << "insira o id do cargo ";
    cin >> carg.id >> endl;
    query = sql.busca("select * from `cargo` where id ="+cargo.id);
    resultado.copy(query.value(0).toString());
    cout << "cargo selecionado: " << resultado << endl;
    sql.closeBD();
    Cargo::admissaoCargoQuery(&query,carg, fun);

}

void criaCargo(Cargo carg){
    SqlResultados sql = new SqlResultados;
    sql.iniBD();
    QSqlQuery query= new QSqlQuery;
    query.prepare("INSERT INTO `cargo` (nome, Salario)"
                  "VALUES (:name, :salario)"); // aqui estou criando mais um valor na tabela
    query.addBindValue(":name",carg.nome);
    query.addBindValue(":salario");
    query.exec();
    sql.closeBD();
}

//adicionar caixa bd e sistema
