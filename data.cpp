#include "data.h"

Data::Data(QObject *parent):QObject(parent) {
    m_number = 0;
    runnable = new Runnable(this);
}

Data::~Data() {
    runnable->stop();
}

void Data::start() {
    if(!runnable->isRunning())
        QThreadPool::globalInstance()->start(runnable);
}

int Data::number() const{
    return m_number;
}

void Data::setNumber(int const& number) {
    if(m_number == number)
        return;
    m_number = number;
    emit numberChanged(m_number);
}


