#include "fornecedor.h"

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

fornecedor::fornecedor()
{

}

fornecedor::criaFornecedorQuery(QSqlQuery &query, fornecedor forn){
        SqlResultados sql = new SqlResultados;
        sql.iniBD();
        query.prepare("INSERT INTO `fornecedor` (Nome, Contato)"
                      "VALUES (:name, :contat)");
        query.addBindValue(":name", forn.nome);
        query.addBindValue("contat",forn.contato);
        query.exec();
        sql.closeBD();
}

fornecedor::criaFornecedor(fornecedor forn){
    string resultado;
    SqlResultados sql=new SqlResultados;
    QSqlQuery query=new QSqlQuery;
    sql.iniBD();
}
