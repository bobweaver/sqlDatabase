#ifndef SQLQUERYMODEL_H
#define SQLQUERYMODEL_H
 #include <QVariant>
#include <QSqlQueryModel>
#include <QSqlDatabase>

class SqlQueryModel : public QSqlQueryModel
{
    Q_OBJECT
// void   generateRoleNames() ;
    virtual QHash<int, QByteArray>generateRoleNames()const;
public:
    explicit SqlQueryModel(QObject *parent = 0);
    Q_INVOKABLE void setQuery(const QString &query, const QSqlDatabase &db = QSqlDatabase());
    Q_INVOKABLE void setQuery(const QSqlQuery &query);
    Q_INVOKABLE QVariant  data(const QModelIndex &index, int role)const;
//    virtual QHash<int, QByteArray>generateRoleNames() const;
signals:
public slots:
private:
    QString m_Query;
//    QSqlQueryModel *model ;
};
#endif // QSQLQUERYMODEL_H
