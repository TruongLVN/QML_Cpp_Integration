import QtQuick 2.0
import BackEnd 1.0

Rectangle {
    width: 280
    height: 50

    Data {
        id: data
    }

    HandleKey {
        id: handleKey
    }

    Rectangle {
        id: keyUp
        x: 5
        y: 2.5
        width: 60
        height: 45
        color: "blue"

        MouseArea {
            anchors.fill: parent
            onClicked: {
                handleKey.handleKeyUp();
            }

        }
    }

    Rectangle {
        id: keyDown
        anchors.left: keyUp.right;
        anchors.leftMargin: 10;
        y: 2.5
        width: 60
        height: 45
        color: "blue"
    }

    Rectangle {
        id: keyMenu
        anchors.left: keyDown.right;
        anchors.leftMargin: 10;
        y: 2.5
        width: 60
        height: 45
        color: "blue"
    }

    Rectangle {
        id: keyOff
        anchors.left: keyMenu.right;
        anchors.leftMargin: 10;
        y: 2.5
        width: 60
        height: 45
        color: "blue"
    }
}
