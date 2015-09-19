#include "sqlresultados.h"
#include <QtSql/QSql>
#include <QtSql/qsqldatabase.h>
#include <QtSql/qsql.h>

SqlResultados::SqlResultados()
{
    this->servername = "LOCALHOST\\SQLEXPRESS";
    this->dbname = "mybd";
    this->db = QSqlDatabase::addDatabase("QMYSQL");
}

QSqlError SqlResultados::iniBD()
{

    this->db.setConnectOptions("CLIENT_SSL=1;CLIENTE_IGNORE_SPACE=1");
    if(!this->db.open()){
        this->db.setConnectOptions();
        return this->db.lastError();
    }
    return QSqlError;
}

void SqlResultados::closeBD(){
    this->db.close();
}
