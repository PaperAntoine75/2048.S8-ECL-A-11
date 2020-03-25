#include "case.h"
#include <QQmlEngine>
#include <QString>
#include <iostream>

Case::Case(QQuickView &v, int val,int x, int y,int tailleCase,QQuickItem * listeItem[4][4])
{  

valeur = val;

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


