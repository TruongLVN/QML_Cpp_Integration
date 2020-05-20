#ifndef MODEL1_H
#define MODEL1_H
#include <QObject>
#include <QDebug>
#include <Statemachinep.h>


class Model1: public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString text READ getText WRITE setText NOTIFY textChanged)
public:
    Model1(Statemachinep* state);
    void setText(const QString&);
    QString getText() const;

    Q_INVOKABLE void handle_button();
signals:
    void textChanged(QString);
private:
    QString m_text;
    Statemachinep *m_state;

};

#endif // MODEL1_H
