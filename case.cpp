#include "case.h"
#include <QQmlEngine>
#include <QString>
#include <iostream>

Case::Case(QQuickView &v, int val,int x, int y,int tailleCase,QQuickItem * listeItem[4][4])
{  

valeur = val;
taille = tailleCase;

const QUrl urlCase(QStringLiteral("qrc:/Case.qml"));


QQmlComponent c(v.engine(),urlCase);

listeItem[x][y] = qobject_cast<QQuickItem*>(c.create());

QQuickItem  *root = v.rootObject();
QObject *rectBase = root->findChild<QObject*>("rectGrille");

listeItem[x][y]->setParent(rectBase);
listeItem[x][y]->setParentItem(root);
listeItem[x][y]->setVisible(true);



listeItem[x][y]->setProperty("nombre",QString::number(valeur));

int px = listeItem[x][y]->parent()->property("x").toInt();
int py = listeItem[x][y]->parent()->property("y").toInt();

listeItem[x][y]->setProperty("x",2+x*(tailleCase+2) + px);
listeItem[x][y]->setProperty("y",2+y*(tailleCase+2) + py);

}

void Case::deplacement(int direction,Case * grille[4][4], QQuickItem * listeItem[4][4])
{
    if (direction==1 && y != 0){
        y-=1;
        int py = listeItem[x][y]->parent()->property("y").toInt();
        listeItem[x][y]->setProperty("y",2+y*(taille+2) + py);
    }
    if (direction==2 && y != 3){
        y+=1;
    }
    if (direction==3 && x != 0){
        x-=1;
    }
    if (direction==4 && x != 3){
        x+=1;
    }
}

