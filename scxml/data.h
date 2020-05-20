#ifndef DATA_H
#define DATA_H

#include <QObject>

class Data : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString text READ get)
public:
    Data();
    QString get() const;
private:
    QString m_text;
};

#endif // DATA_H
