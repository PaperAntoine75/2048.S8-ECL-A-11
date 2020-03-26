import QtQuick 2.4

Rectangle {
    id: main
    visible: true
    width: 720
    height: 480
    color: "#ffffff"

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

        MouseArea {
            id: mouseArea
            hoverEnabled: true
            anchors.fill: parent
            onClicked: vuePartie.debutPartie();

        }
    }

    Rectangle {
        id: rectGrille
        objectName: "rectGrille"
        y: 153
        width: 370
        height: 370
        color: "#d1d1d1"
        radius: 20
        anchors.left: parent.left
        anchors.leftMargin: 50
        anchors.verticalCenter: parent.verticalCenter
    }

    Item {
        focus: true
        Keys.onPressed: {
            switch (event.key) {
                case Qt.Key_Up:
                vuePartie.mouvementCases(1);
                break;
                case Qt.Key_Down:
                vuePartie.mouvementCases(2);
                break;
                case Qt.Key_Left:
                vuePartie.mouvementCases(3);
                case Qt.Key_Right:
                vuePartie.mouvementCases(4);
                }
        }
    }
}

/*##^##
Designer {
    D{i:1;anchors_x:260;invisible:true}D{i:6;anchors_x:471}
}
##^##*/
