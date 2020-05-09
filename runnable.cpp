#include "runnable.h"
#include "statescr.h"

Runnable::Runnable(QObject *receiver):
          mReceiver(receiver),
          mRunning(false){}
void Runnable::run() {
    mRunning = true;
    while(mRunning){
        mNumber = StateScr::get_instance().get_state();
        QMetaObject::invokeMethod(mReceiver, "setNumber",
                                  Qt::QueuedConnection,
                                  Q_ARG(int, mNumber));
        QThread::msleep(10);
    }
}

bool Runnable::isRunning() const{
    return mRunning;
}

void Runnable::stop() {
    mRunning = false;
}

