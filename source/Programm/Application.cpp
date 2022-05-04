#include "Programm/Application.h"

#include "CompA/ClassA.h"

void Application::onRun()
{
    auto obj = std::make_shared<ClassA>();
    
    connect(this, &Application::callFoo, obj.get(), &ClassA::doSomething);
    connect(obj.get(), &ClassA::callFrom, this, &Application::onLibCalls);

    emit callFoo();

    processEvents();

    exit();
}

void Application::onLibCalls(QString who)
{
    qDebug() << __FUNCTION__ << " from " << who;
}