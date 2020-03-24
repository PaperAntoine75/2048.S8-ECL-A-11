import QtQuick 2.0

Item {
    id: element
    width: 90
    height: 90
    property alias rectangleColor: fond.color
    property alias element1Text: valeur.text
    Rectangle {
        id: fond
        x: -40
        y: -40
        width: 90
        height: 90
        color: "#f9f18a"
        radius: 20
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter

        Text {
            id: valeur
            x: 48
            y: 53
            width: 90
            height: 90
            text: qsTr("16")
            style: Text.Normal
            font.weight: Font.Bold
            font.bold: false
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            font.pixelSize: 60
        }
    }

}
