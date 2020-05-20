import QtQuick 2.0
import QtQuick.Controls 2.0

Rectangle {
    Text {
        x: 306
        y: 232
        font.pointSize: 24
        text: qsTr("text4")
    }

    Button {
        text: "screen 2"
        x: 171
        y: 392
        onClicked: state1.submitEvent("back")
    }

    Button {
        text: "screen 5"
        x: 352
        y: 392
        onClicked: state1.submitEvent("button4_5")
    }
}

/*##^##
Designer {
    D{i:0;autoSize:true;height:480;width:640}
}
##^##*/
