#ifndef UIDLL2_GLOBAL_H
#define UIDLL2_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(UIDLL2_LIBRARY)
#  define UIDLL2SHARED_EXPORT Q_DECL_EXPORT
#else
#  define UIDLL2SHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // UIDLL2_GLOBAL_H
