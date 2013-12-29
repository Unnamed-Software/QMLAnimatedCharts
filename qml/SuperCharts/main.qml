import QtQuick 2.0
import Charts 1.0

Rectangle {
    width: 360
    height: 360

    PieSlice{
        id: pp
        anchors.fill: parent
        color:"yellow"
        spanAngle: 20
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            Qt.quit();
        }
    }

}
