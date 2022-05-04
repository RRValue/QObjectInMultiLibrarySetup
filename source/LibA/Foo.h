#pragma once

#include "LibA/export.h"

#include <QtCore/QObject>

class EXPORT_API Foo : public QObject
{
    Q_OBJECT

public:
    Foo();
    virtual ~Foo();

signals:
    void callFrom(QString who);

public slots:
    void doSomethingFoo();
};
