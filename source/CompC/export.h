#pragma once

#include <QtCore/QtGlobal>

#ifdef EXPORT_COMPC
#define COMPC_API Q_DECL_EXPORT
#else
#define COMPC_API Q_DECL_IMPORT
#endif