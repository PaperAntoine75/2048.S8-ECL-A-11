var nbrCol = 4;
var nbrLin = 4;

var tailleCase = 90;

var indexMax = nbrCol*nbrLin;
var grilleValeurs = new Array(indexMax);
grilleValeurs.fill(0);
var grilleCases = new Array(indexMax);
var component;

function index(col, lin) {
    return col + (lin * nbrCol);
}

function getRandomInt(max) {
  return Math.floor(Math.random() * Math.floor(max));
}

function init() {
console.log(grilleValeurs);
    for (var i = 0; i < indexMax; i++) {
            if (grilleValeurs[i] !== 0){
                grilleValeurs[i]=0;
                grilleCases[i].destroy();
            }
        }

    var x1 = getRandomInt(4);
    var x2 = getRandomInt(4);
    var y1 = getRandomInt(4);
    var y2 = getRandomInt(4);

    while (x1 === x2 && y1 === y2){
        y1 = getRandomInt(4);
        y2 = getRandomInt(4);
    }

    var v1 = (getRandomInt(2)+1)*2;
    var v2 = (getRandomInt(2)+1)*2;

    grilleValeurs[index(x1,y1)] = v1;
    grilleValeurs[index(x2,y2)] = v2;
    creerCase(x1,y1,v1);
    creerCase(x2,y2,v2);
}

function creerCase(X,Y,v) {
    //if (component === null){
    component = Qt.createComponent("Case.qml")
    //}

    if (component.status === Component.Ready) {
            var dynamicObject = component.createObject(rectGrille);
            if (dynamicObject === null) {
                console.log("Erreur dans la creation de la case");
                console.log(component.errorString());
                return false;
            }
            dynamicObject.x = 2 + X * (tailleCase+2);
            dynamicObject.y = 2 + Y * (tailleCase+2);
            dynamicObject.nombre = v;
            grilleCases[index(X, Y)] = dynamicObject;
        } else {
            console.log("Erreur dans le chargement de la case");
            console.log(component.errorString());
            return false;
        }
        return true;

}
