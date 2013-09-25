#include <qqmlengine.h>
#include <qqmlcontext.h>
#include <qqml.h>
#include <QtQuick/qquickitem.h>
#include <QtQuick/qquickview.h>
/*
   This example illustrates exposing a Database
   Connections as a model in QML
*/

int main(int argc, char ** argv)
{
    QGuiApplication app(argc, argv);
    QQuickView view;
    view.setSource(QUrl("qrc:tableview.qml"));
    view.show();
    return app.exec();
}
