#ifndef MODEL2_H
#define MODEL2_H


#include <QObject>
#include <QDebug>
#include <Statemachinep.h>


class Model2: public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString text READ getText WRITE setText NOTIFY textChanged)
public:
    Model2(Statemachinep* state);
    void setText(const QString&);
    QString getText() const;

    Q_INVOKABLE void handle_button1();
    Q_INVOKABLE void handle_button2();
    Q_INVOKABLE void handle_button3();
signals:
    void textChanged(QString);
private:
    QString m_text;
    Statemachinep *m_state;

};

#endif // MODEL2_H
