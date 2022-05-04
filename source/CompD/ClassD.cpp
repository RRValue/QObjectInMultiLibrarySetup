#include "CompD/ClassD.h"

#include <qdebug.h>

ClassD::ClassD()
{
}

ClassD::~ClassD()
{
}

void ClassD::doSomething()
{
    qDebug() << __FUNCTION__;
}