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

#filetypes = qml png svg js jpg qmlproject desktop wav

#OTHER_FILES = ""

#for(filetype, filetypes) {
#  OTHER_FILES += *.$$filetype
#}

#desktop_files.path = /usr/share/applications
#desktop_files.files = jokes.desktop

#other_files.path = /usr/lib/ubuntu-ui-toolkit/examples/jokes
#other_files.files = $$OTHER_FILES

#INSTALLS += other_files desktop_files

