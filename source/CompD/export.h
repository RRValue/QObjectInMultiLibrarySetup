#pragma once

#include <QtCore/QtGlobal>

#ifdef EXPORT_COMPD
#define COMPD_API Q_DECL_EXPORT
#else
#define COMPD_API Q_DECL_IMPORT
#endif