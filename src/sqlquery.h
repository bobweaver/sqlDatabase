#ifndef SQLQUERY_H
#define SQLQUERY_H
#include <QObject>
class SqlQuery : public QObject
       {
     Q_OBJECT
public:
    explicit SqlQuery(QObject *parent = 0);
    Q_PROPERTY( QString         source                     READ source                    WRITE setSource                    )
    Q_PROPERTY( QString         databaseName     READ databaseName     WRITE setdatabaseName   )
    Q_PROPERTY( QString         user                          READ user                          WRITE setUser                        )
    Q_PROPERTY( QString         password                READ password                WRITE setPassword              )
    Q_PROPERTY(QString          databaseType       READ databaseType        WRITE setdatabaseType     )
    Q_PROPERTY(int                    port                          READ port                          WRITE setPort                         )
    Q_PROPERTY(bool                connectAuto          READ connectAuto        WRITE setConnectionAuto   )
    Q_PROPERTY( QString         queryString            READ queryString           WRITE setQueryString           )

    QString source() const;
    void setSource(const QString &source);
    QString databaseName() const;
    void setdatabaseName(const QString &databaseName);
    QString user() const;
    void setUser(const QString &user);
    QString password() const;
    void setPassword(const QString &password);
    QString databaseType() const;
    void setdatabaseType(const QString &databaseType);
    int port() const;
    void setPort(int port);
    bool connectAuto()const;
    void  setConnectionAuto(bool &connectAuto);
    QString queryString() const;
    void setQueryString(const QString &queryString);


    Q_INVOKABLE void connect();
    Q_INVOKABLE void createConnection();
private:
    QString getBack;
    QString m_Source;
    QString m_DbName;
    QString m_User;
    QString m_Password;
    QString m_databaseType;
    int m_Port;
    bool m_ConnectAuto;
    QString m_QueryString;
};
#endif //  // SQLQUERY_H
