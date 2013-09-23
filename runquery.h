#ifndef RUNQUERY_H
#define RUNQUERY_H

#include <QObject>

class RunQuery : public QObject
{
    Q_OBJECT
public:
    explicit RunQuery(QObject *parent = 0);
    void model();

signals:
    
public slots:
    
};

#endif // RUNQUERY_H
