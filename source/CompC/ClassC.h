#pragma once

#include "CompC/export.h"

#include <QtCore/QObject>

class COMPC_API ClassC : public QObject
{
    Q_OBJECT

public:
    ClassC();
    virtual ~ClassC();

signals:
    void callFrom(QString who);

public slots:
    void doSomething();
};
