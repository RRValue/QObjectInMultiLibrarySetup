#include "CompB/ClassB.h"

#include <qdebug.h>

ClassB::ClassB()
{
}

ClassB::~ClassB()
{
}

void ClassB::doSomething()
{
    qDebug() << __FUNCTION__;
}