#pragma once

#include <QtCore/QtGlobal>

#ifdef EXPORT_COMPB
#define COMPB_API Q_DECL_EXPORT
#else
#define COMPB_API Q_DECL_IMPORT
#endif