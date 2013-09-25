TEMPLATE = lib
TARGET = sqlDataBase
QT += qml quick
CONFIG += qt plugin
QT += sql
TARGET = $$qtLibraryTarget($$TARGET)
uri = SqlDatabase

# Input
SOURCES += \
    sqldatabase_plugin.cpp \
    sqldatabase.cpp \
    sqlquery.cpp \
    sqlquerymodel.cpp

HEADERS += \
    sqldatabase_plugin.h \
    sqldatabase.h \
    sqlquery.h \
    sqlquerymodel.h

OTHER_FILES = qmldir

!equals(_PRO_FILE_PWD_, $$OUT_PWD) {
    copy_qmldir.target = $$OUT_PWD/qmldir
    copy_qmldir.depends = $$_PRO_FILE_PWD_/qmldir
    copy_qmldir.commands = $(COPY_FILE) \"$$replace(copy_qmldir.depends, /, $$QMAKE_DIR_SEP)\" \"$$replace(copy_qmldir.target, /, $$QMAKE_DIR_SEP)\"
    QMAKE_EXTRA_TARGETS += copy_qmldir
    PRE_TARGETDEPS += $$copy_qmldir.target
}

qmldir.files = qmldir
unix {
    installPath = $$[QT_INSTALL_QML]/$$replace(uri, \\., /)
    qmldir.path = $$installPath
    target.path = $$installPath
    INSTALLS += target qmldir
}

