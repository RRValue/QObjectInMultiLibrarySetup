#pragma once

#include "CompD/export.h"

#include <QtCore/QObject>

class COMPD_API ClassD : public QObject
{
    Q_OBJECT

public:
    ClassD();
    virtual ~ClassD();

signals:
    void callFrom(QString who);

public slots:
    void doSomething();
};
