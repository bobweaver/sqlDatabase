TEMPLATE = app
QT += qml sql

#SOURCES += main.cpp
OTHER_FILES = tableview.qml

EXAMPLE_FILES = \
                    tableview.qml

target.path = $$[QT_INSTALL_EXAMPLES]/quick/sqldatabase/tableview

INSTALLS = target

RESOURCES += \
    tableview.qrc
TEMPLATE = subdirs
