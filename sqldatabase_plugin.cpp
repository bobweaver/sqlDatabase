#include "sqldatabase_plugin.h"
#include "sqldatabase.h"
#include "sqlquery.h"
#include "sqlquerymodel.h"
#include <qqml.h>
#include <QtQml>
void SqlDataBasePlugin::registerTypes(const char *uri)
{
    // @uri SqlDatabase
    qmlRegisterType<SqlDatabase>(uri, 1, 0, "SqlDatabase");
    qmlRegisterType<SqlQuery>(uri, 1, 0, "SqlConnection");
    qmlRegisterType<SqlQueryModel>(uri,1,0,"SqlModel");

}

void SqlDataBasePlugin::initializeEngine(QQmlEngine *engine, const char *uri) {
    QQmlContext *ctx = engine->rootContext();
       ctx->setContextProperty("sqlModelFinal", new SqlQueryModel(0));
}
//Q_PLUGIN_METADATA(uri, SqlDataBasePlugin);

