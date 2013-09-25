#ifndef SQLDATABASE_PLUGIN_H
#define SQLDATABASE_PLUGIN_H

#include <QQmlExtensionPlugin>

class SqlDataBasePlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QQmlExtensionInterface")
    
public:
    void registerTypes(const char *uri);
//    void initializeEngine(QQmlEngine *engine, const char *uri) ;

};

#endif // SQLDATABASE_PLUGIN_H

