#pragma once

#include "CompA/export.h"

#include <QtCore/QObject>

class COMPA_API ClassA : public QObject
{
    Q_OBJECT

public:
    ClassA();
    virtual ~ClassA();

signals:
    void callFrom(QString who);

public slots:
    void doSomething();
};
