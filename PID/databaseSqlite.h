#ifndef DATABASESQLITE_H
#define DATABASESQLITE_H
#include "SistemasdeControle/headers/primitiveLibs/LinAlg/matrix.h"
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQueryModel>
#include <QSqlQuery>

namespace fileHandler{
    template<class Type>
    class databaseSqlite
    {
    public:
        databaseSqlite(){}
        databaseSqlite(const std::string &file);

        void setFileName(std::string file);
        databaseSqlite &operator ()(const QString &table, const QString column);
        QSqlQueryModel &operator ()(const QString &table);

        //create table
        void operator = (const QString &table);
        //Insert Column
        void operator = (const LinAlg::Matrix<Type> &data);

        //Update
        void operator <<(LinAlg::Matrix<Type> data);
        //Retrive Data
        void operator >>(LinAlg::Matrix<Type> &data);

        QSqlQueryModel *queryModel;
        QSqlQuery *query;
        QSqlDatabase mydb;
        QString table, column;
    };
}

#include "databaseSqlite.hpp"
#endif // DATABASESQLITE_H
