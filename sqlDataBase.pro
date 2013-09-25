defineTest(minQtVersion) {
    maj = $$1
    min = $$2
    patch = $$3
    isEqual(QT_MAJOR_VERSION, $$maj) {
        isEqual(QT_MINOR_VERSION, $$min) {
            isEqual(QT_PATCH_VERSION, $$patch) {
                return(true)
            }
            greaterThan(QT_PATCH_VERSION, $$patch) {
                return(true)
            }
        }
        greaterThan(QT_MINOR_VERSION, $$min) {
            return(true)
        }
    }
    greaterThan(QT_MAJOR_VERSION, $$maj) {
        return(true)
    }
    return(false)
}

!minQtVersion(4, 8, 0) {
    message("Cannot build qbs with Qt version $${QT_VERSION}.")
    error("Use at least Qt 4.8.0.")
}
TEMPLATE = subdirs
SUBDIRS += src/sqldatabase.pro examples/examples.pro
OTHER_FILES =  doc/*.qdocconf \
                                doc/src/*.qdoc \
                                doc/doc.pri \
                                README.md\
                                HACKING \
                                LICENSE.LGPL
include(doc/doc.pri)
include(sqldatabase_version.pri)

