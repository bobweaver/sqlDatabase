TEMPLATE = subdirs
SUBDIRS += src/sqldatabase.pro examples/examples.pro
OTHER_FILES = doc/src/*.qdoc \
doc/doc.pri \
README.md\
HACKING \
LICENSE.LGPL
QMAKE_DOCS = $$PWD/doc/sqldatabase.qdocconf

