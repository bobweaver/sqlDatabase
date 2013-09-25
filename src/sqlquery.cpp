#include "sqlquery.h"
#include "sqlquerymodel.h"
#include <QObject>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>
SqlQuery::SqlQuery(QObject *parent) :
    QObject(parent)
{
}
QString SqlQuery::source() const
{
    return m_Source;
}
void SqlQuery::setSource(const QString &source)
{
    m_Source = source;
}

QString SqlQuery::databaseName() const
{
    return m_DbName;
}
void SqlQuery::setdatabaseName(const QString &databaseName)
{
    m_DbName = databaseName;
}
QString SqlQuery::user() const
{
    return m_User;
}
void SqlQuery::setUser(const QString &user)
{
    m_User = user;
}

QString SqlQuery::password() const
{
    return m_Password;
}
void SqlQuery::setPassword(const QString &password)
{
    m_Password = password;
}


QString SqlQuery::databaseType() const
{
    return m_databaseType;
}
void SqlQuery::setdatabaseType(const QString &databaseType)
{
    m_databaseType = databaseType;
}


int SqlQuery::port() const
{
    return m_Port;
}
void SqlQuery::setPort(int port)
{
    m_Port = port;
}

bool SqlQuery::connectAuto()const
{
    return m_ConnectAuto;
}

void SqlQuery::setConnectionAuto(bool &connectAuto)
{
    m_ConnectAuto = connectAuto;
}

QString SqlQuery::queryString() const
{
    return m_QueryString;
}
void SqlQuery::setQueryString(const QString &queryString)
{
    m_QueryString = queryString;
}

void SqlQuery::createConnection()
{
    QString database_Type;
    if (m_databaseType == "mysql"){
        database_Type = "QMYSQL";
    }
    if (m_databaseType == "postgres"){
        database_Type = "QPSQL";
    }
    if (m_databaseType == "sqlite"){
        database_Type = "QSQLITE";
    }
    if (m_databaseType == "sql"){
        database_Type = "QODBC";
    }
    QSqlDatabase  db = QSqlDatabase::addDatabase(database_Type);
    db.setHostName(m_Source);

    db.setDatabaseName(m_DbName);

    db.setUserName(m_User);

    db.setPassword(m_Password);

    int qw;
    qw = m_Port;
    db.setPort(qw);

    if (!db.open())
    {
        qDebug() << "Database Error" << db.lastError().text();
    }
    else
        qDebug() << "connected ";

}

void SqlQuery::connect()
{
    if (m_ConnectAuto == true){
        createConnection();
    }
}
