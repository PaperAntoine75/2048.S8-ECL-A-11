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
public:
Case(QQuickView &v,int val,int x, int y,int tailleCase,QQuickItem * listeItem[4][4]);
    void aff();
};

#endif // CASE_H
