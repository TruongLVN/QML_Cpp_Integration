import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Layouts 1.3
import QtQuick.Controls 1.4

import BackEnd 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Data {
        id: data
    }

//    Text {
//        id: text1
//        text: data.number
//        horizontalAlignment: Text.AlignHCenter
//        Layout.fillWidth: true
//    }

    ColumnLayout {
        anchors.centerIn: parent
        Button {
            id: button
            Layout.fillWidth: true
            text: "start"
            onClicked: data.start()
        }

        Text {
            id: text1
            text: data.number
            horizontalAlignment: Text.AlignHCenter
            Layout.fillWidth: true
        }
    }

    ButtonControl {
        x: 100
        y: 100
    }
}
