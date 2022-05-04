#pragma once

#include "CompB/export.h"

#include <QtCore/QObject>

class COMPB_API ClassB : public QObject
{
    Q_OBJECT

public:
    ClassB();
    virtual ~ClassB();

signals:
    void callFrom(QString who);

public slots:
    void doSomething();
};
