import QtQuick 2.0
import QtQuick.Controls 2.0

Rectangle {
    //property Data data: data
    Text {
        x: 306
        y: 232
        font.pointSize: 24
        text: model1.text
    }

    Button{
        text: "screen 2"
        x: 281
        y: 398
        onClicked: model1.handle_button()
    }
}
