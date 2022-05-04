#include "CompA/ClassA.h"

#include <qdebug.h>

ClassA::ClassA()
{
}

ClassA::~ClassA()
{
    
}

void ClassA::doSomething()
{
    qDebug() << __FUNCTION__;
}