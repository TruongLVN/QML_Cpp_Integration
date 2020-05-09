#include "handlekey.h"
#include "statescr.h"
#include  <QDebug>

void HandleKey::handleKeyUp() {
    auto& state = StateScr::get_instance();
    switch (state.get_state()) {
        case 0:
            state.set_state(1);
            qDebug() << "123456";
            break;
        case 1:
            state.set_state(0);
            qDebug() << "adasdasd";
            break;
        default:
            state.set_state(0);
    }
}

void HandleKey::handleKeyDown() {
    auto& state = StateScr::get_instance();
    switch (state.get_state()) {
        case 0:
            state.set_state(1);
            break;
        case 1:
            state.set_state(0);
            break;
        default:
            state.set_state(0);
    }
}

void HandleKey::handleKeyMenu() {
    auto& state = StateScr::get_instance();
    switch (state.get_state()) {
        case 0:
            state.set_state(1);
            break;
        case 1:
            state.set_state(0);
            break;
        default:
            state.set_state(0);
    }
}

void HandleKey::handleKeyOff() {
    auto& state = StateScr::get_instance();
    switch (state.get_state()) {
        case 0:
            state.set_state(1);
            break;
        case 1:
            state.set_state(0);
            break;
        default:
            state.set_state(0);
    }
}
