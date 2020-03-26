#ifndef CASE_H
#define CASE_H
#include <QApplication>
#include <QQuickItem>
#include <QQuickView>
#include<string>

class Case
{
public : QQuickItem *i;
private: QQmlComponent c;
private: QUrl urlCase;
protected: int valeur;
std::string urlstr = "qrc:/Case.qml";
private: int x;
private: int y;
private: int taille;
public:
Case(QQuickView &v,int val,int x, int y,int tailleCase,QQuickItem * listeItem[4][4]);
    void aff();

Q_INVOKABLE void deplacement(int direction,Case * grille[4][4],QQuickItem * listeItem[4][4]); //up : 1, down : 2, left : 3, right : 4

Q_PROPERTY(QString cptQML READ deplacement NOTIFY caseMoved)

signals:
void caseMoved();
}; 


#endif // CASE_H
