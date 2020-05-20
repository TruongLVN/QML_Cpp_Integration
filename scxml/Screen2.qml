import QtQuick 2.0
import QtQuick.Controls 2.0

Rectangle {
    Text {
        x: 276
        y: 216
        font.pointSize: 24
        text: model2.text
    }

    Button {
        text: "screen 1"
        x: 113
        y: 392
        onClicked: model2.handle_button1()
    }

    Button {
        text: "screen 3"
        x: 270
        y: 392
        onClicked: model2.handle_button3()
    }

    Button {
        text: "screen 4"
        x: 413
        y: 398
        onClicked: model2.handle_button2()
    }
}
