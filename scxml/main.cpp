#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "Statemachinep.h"
#include "data.h"
#include <QQmlContext>
#include "model1.h"
#include "model2.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    qmlRegisterType<Statemachinep>("Statemachine", 1, 0, "StateMachine");
    qmlRegisterType<Data>("Statemachine", 1, 0, "Data");

    QQmlApplicationEngine engine;

    Statemachinep *state = new Statemachinep;
    state->start();

    Model1 *model1 = new Model1(state);
    Model2 *model2 = new Model2(state);


//    engine.rootContext()->setContextProperty("state1", state);
    engine.rootContext()->setContextProperty("model1", model1);
    engine.rootContext()->setContextProperty("model2", model2);

    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    if(state->isActive("State_1"))
        qDebug() << state->activeStateNames(true);


    return app.exec();
}
