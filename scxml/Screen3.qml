import QtQuick 2.0
import QtQuick.Controls 2.0

Rectangle {
    Text {
        x: 306
        y: 232
        font.pointSize: 24
        text: qsTr("text3")
    }

    Button {
        text: "screen 2"
        x: 281
        y: 398
        onClicked: state1.submitEvent("back")
    }
}
