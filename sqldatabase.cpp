#include "sqldatabase.h"

SqlDatabase::SqlDatabase(QQuickItem *parent):
    QQuickItem(parent)
{
    // By default, QQuickItem does not draw anything. If you subclass
    // QQuickItem to create a visual item, you will need to uncomment the
    // following line and re-implement updatePaintNode()
    
    // setFlag(ItemHasContents, true);
}

SqlDatabase::~SqlDatabase()
{
}

