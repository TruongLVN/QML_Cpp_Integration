#ifndef RUNNABLE_H
#define RUNNABLE_H
#include <QObject>
#include <QRunnable>
#include <QThread>

class Runnable: public QRunnable
{
public:
    Runnable(QObject*);
    void run();
    bool isRunning() const;
    void stop();
private:
    int mNumber = 0;
    QObject *mReceiver;
    bool mRunning;
};

#endif // RUNNABLE_H
