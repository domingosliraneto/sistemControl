#include "databaseSqlite.h"

template<typename Type>
fileHandler::databaseSqlite<Type>::databaseSqlite(const std::string &file)
{
    this->mydb = QSqlDatabase::addDatabase("QSQLITE");
    this->mydb.setDatabaseName(file.c_str());
    this->mydb.open();

    this->queryModel = new QSqlQueryModel;
    this->query = new QSqlQuery(this->mydb);
}

template<typename Type>
void fileHandler::databaseSqlite<Type>::setFileName(std::string file)
{
    this->mydb = QSqlDatabase::addDatabase("QSQLITE");
    this->mydb.setDatabaseName(file.c_str());
    this->mydb.open();

    this->queryModel = new QSqlQueryModel;
    this->query = new QSqlQuery(this->mydb);
}

template<typename Type>
fileHandler::databaseSqlite<Type> &fileHandler::databaseSqlite<Type>::operator ()(const QString &table, const QString column)
{
    this->table = table;
    this->column = column;

    return  *this;
}

template<typename Type>
QSqlQueryModel &fileHandler::databaseSqlite<Type>::operator ()(const QString &table)
{
    this->table = table;
    this->column.clear();
    this->queryModel->setQuery(QString("SELECT * FROM ") + this->table);

    return  *this->queryModel;
}

template<typename Type>
void fileHandler::databaseSqlite<Type>::operator <<(LinAlg::Matrix<Type> data)
{
    std::string data_str; data_str <<= data;
    QString Temp = "UPDATE "+ this->table +" SET '"+ this->column +"' = '"+ QString(data_str.c_str());
    query->exec(Temp);
}

template<typename Type>
void fileHandler::databaseSqlite<Type>::operator >>(LinAlg::Matrix<Type> &data)
{
    std::string data_str; data_str <<= data;
    QString Temp = QString("SELECT" ) + this->column + QString(" FROM ") + this->table;
    this->query->exec(Temp);
    this->query->next();
    data = this->query->value(0).toString().toStdString().c_str();

}

template<typename Type>
void fileHandler::databaseSqlite<Type>::operator =(const LinAlg::Matrix<Type> &data)
{
    this->query->exec(QString("create table ")+ this->table + (QString(""+ this->column +"")));

}

//template<typename Type>
//void fileHandler::databaseSqlite<Type>::operator =(const QString &table)
//{
//    this->table = table;
//    this->query->exec(QString("create table ")+ this->table);
//}

