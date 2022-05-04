#include "CompC/ClassC.h"

#include <qdebug.h>

ClassC::ClassC()
{
}

ClassC::~ClassC()
{
}

void ClassC::doSomething()
{
    qDebug() << __FUNCTION__;
}