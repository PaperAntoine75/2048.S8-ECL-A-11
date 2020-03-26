#ifndef MECANISME_H
#define MECANISME_H
#include <QApplication>
#include <QQuickItem>
#include <QQuickView>
#include <QObject>
#include <iostream>
#include <QQmlEngine>
#include <ctime>
#include "case.h"

class Mecanisme : public QObject
{
    Q_OBJECT
    public :
    Q_INVOKABLE void debutPartie();
    Q_INVOKABLE void mouvementCases(int direction);
    Mecanisme(QQuickView &view);


    static const int nombreLin = 4;
    static const int nombreCol = 4;

    const int tailleCase = 90;

    Case *grille[nombreLin][nombreCol];
    QQuickItem *grilleItem[nombreLin][nombreCol];


    QQuickView &view ;


};

#endif // MECANISME_H
