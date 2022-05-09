#include "Programm/Application.h"

#include "CompA/ClassA.h"
#include "CompB/ClassB.h"
#include "CompC/ClassC.h"
#include "CompD/ClassD.h"

void Application::onRun()
{
    auto* obj_a = new ClassA;
    auto* obj_b = new ClassB;
    auto* obj_c = new ClassC;
    auto* obj_d = new ClassD;

    connect(this, &Application::goDown, obj_a, &ClassA::handleGoDown);
    connect(this, &Application::goDown, obj_b, &ClassB::handleGoDown);
    connect(this, &Application::goDown, obj_c, &ClassC::handleGoDown);
    connect(this, &Application::goDown, obj_d, &ClassD::handleGoDown);
    
    connect(obj_a, &ClassA::goUp, this, &Application::handleGoUp);
    connect(obj_b, &ClassB::goUp, this, &Application::handleGoUp);
    connect(obj_c, &ClassC::goUp, this, &Application::handleGoUp);
    connect(obj_d, &ClassD::goUp, this, &Application::handleGoUp);

    emit goDown(QString(__FUNCTION__) + "\n");

    delete obj_a;
    delete obj_b;
    delete obj_c;
    delete obj_d;

    exit();
}

void Application::handleGoUp(QString trace)
{
    qDebug().noquote() << (trace + __FUNCTION__ + "\n");

    int ii = 0;
    ii++;
}