#ifndef DATA_H
#define DATA_H
#include <QObject>
#include <QThreadPool>
#include "runnable.h"

class Data: public QObject {
    Q_OBJECT
    Q_PROPERTY(int number READ number WRITE setNumber NOTIFY numberChanged)
public:
    explicit Data(QObject *parent = nullptr);
    ~Data();
    Q_INVOKABLE void start();
    int number() const;
public slots:
    void setNumber(int const&);
signals:
    void numberChanged(int);
private:
    int m_number;
    Runnable *runnable;
};

#endif // DATA_H
