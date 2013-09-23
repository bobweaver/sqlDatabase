#include "sqlquerymodel.h"
#include"sqlquery.h"
#include <QSqlRecord>
#include <QSqlField>
#include <QDebug>
 #include <QVariant>
#include <QAbstractListModel>
SqlQueryModel::SqlQueryModel(QObject *parent) :
    QSqlQueryModel(parent)
{
}
void SqlQueryModel::setQuery(const QString &query, const QSqlDatabase &db)
{
    QSqlQueryModel::setQuery(query,db);
    generateRoleNames();
}

void SqlQueryModel::setQuery(const QSqlQuery &query)
{
QSqlQueryModel::setQuery(query);
    generateRoleNames();
}

QVariant SqlQueryModel::data(const QModelIndex &index, int role)const
{
    QVariant value = QSqlQueryModel::data(index, role);
    if(role < Qt::UserRole)
    {
        value = QSqlQueryModel::data(index, role);
    }
    else
    {
        int columnIdx = role - Qt::UserRole - 1;
        QModelIndex modelIndex = this->index(index.row(), columnIdx);
        value = QSqlQueryModel::data(modelIndex, Qt::DisplayRole);
    }
    return value;
}
 QHash<int, QByteArray>SqlQueryModel::generateRoleNames() const
    {
        QHash<int, QByteArray> roles;
        for( int i = 0; i < record().count(); i++) {
            roles[Qt::UserRole + i + 1] = record().fieldName(i).toLatin1();
            qDebug() << roles << "\n"   ;
        }
        return roles;
    }
