#ifndef QTLIB_GLOBAL_H
#define QTLIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QTLIB_LIBRARY)
#  define QTLIBSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QTLIBSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QTLIB_GLOBAL_H
