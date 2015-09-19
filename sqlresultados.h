#ifndef SQLRESULTADOS_H
#define SQLRESULTADOS_H

#include <QtSql/QSql>
#include <QtSql/qsqldatabase.h>
#include <QtSql/qsql.h>


class SqlResultados
{
public:
    QString servername;
    QString dbname;
    QSqlDatabase db;

public:
    SqlResultados();
    QSqlError iniBD();
    QSqlError closeBD();


    //---
};

#endif // SQLRESULTADOS_H
