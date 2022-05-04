#pragma once

#include <QtCore/QtGlobal>

#ifdef EXPORT_COMPA
#define COMPA_API Q_DECL_EXPORT
#else
#define COMPA_API Q_DECL_IMPORT
#endif