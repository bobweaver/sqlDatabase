#ifndef SQLDATABASE_H
#define SQLDATABASE_H

#include <QQuickItem>

class SqlDatabase : public QQuickItem
{
    Q_OBJECT
    Q_DISABLE_COPY(SqlDatabase)
    
public:
    SqlDatabase(QQuickItem *parent = 0);
    ~SqlDatabase();
};

QML_DECLARE_TYPE(SqlDatabase)

#endif // SQLDATABASE_H

