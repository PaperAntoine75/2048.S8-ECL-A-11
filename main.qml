import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    id: window
    visible: true
    width: 720
    height: 480
    color: "#ffffff"
    title: qsTr("Hello World")

    Rectangle {
        id: rectangle
        y: 140
        width: 380
        height: 380
        color: "#dddddd"
        radius: 20
        border.color: "#ffffff"
        border.width: 6
        anchors.left: parent.left
        anchors.leftMargin: 50
        anchors.verticalCenter: parent.verticalCenter

        Case {
            id: element
            x: 7
            y: 277
        }

        Case {
            id: element1
            x: 98
            y: 277
        }

        Case {
            id: element2
            x: 190
            y: 277
        }

        Case {
            id: element3
            x: 282
            y: 277
        }
    }

    Text {
        id: element4
        x: 471
        y: 56
        width: 211
        height: 58
        text: qsTr("Score")
        font.bold: true
        font.family: "Verdana"
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignHCenter
        font.pixelSize: 48
    }

    Text {
        id: element5
        x: 471
        y: 133
        width: 211
        height: 58
        text: qsTr("00000")
        horizontalAlignment: Text.AlignHCenter
        font.bold: true
        font.pixelSize: 48
        font.family: "Verdana"
        verticalAlignment: Text.AlignVCenter
    }

    Rectangle {
        id: restart
        x: 477
        y: 319
        width: 200
        height: 105
        color: "#f9b77e"
        radius: 20
        anchors.right: parent.right
        anchors.rightMargin: 50

        Text {
            id: element6
            text: qsTr("Recommencer")
            font.bold: true
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            anchors.fill: parent
            font.pixelSize: 24
        }
    }
}

/*##^##
Designer {
    D{i:1;anchors_x:260}D{i:6;anchors_x:471}D{i:9;anchors_x:88;anchors_y:45}
}
##^##*/
