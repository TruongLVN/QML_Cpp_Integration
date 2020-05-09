#ifndef HANDLEKEY_H
#define HANDLEKEY_H
#include <QtCore/QObject>

class HandleKey: public QObject {
    Q_OBJECT
public slots:
    void handleKeyUp();
    void handleKeyDown();
    void handleKeyMenu();
    void handleKeyOff();
};

#endif // HANDLEKEY_H
