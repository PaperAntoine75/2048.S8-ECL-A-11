#include "mecanisme.h"
#include <iostream>
Mecanisme::Mecanisme(QQuickView &v) : view(v)
{
    for(int i = 0;i<nombreLin;i++){
    for(int j = 0;j<nombreLin;j++){
        grille[i][j] = nullptr;
    }
    }

}

void Mecanisme::debutPartie(){


    for(int i = 0;i<nombreLin;i++){
    for(int j = 0;j<nombreCol;j++){
        if(grille[i][j] != nullptr){
            grilleItem[i][j]->deleteLater();
        grille[i][j] = nullptr;
    }
    }
}
srand(time(NULL));
int x1 = rand()%4;
int x2 = rand()%4;
int y1 = rand()%4;
int y2 = rand()%4;

while(x1 == x2 && y1 == y2){
   x2 = rand()%4;
   y2 = rand()%4;
}

int v1 = ((rand()%2) +1)*2;
int v2 = ((rand()%2) +1)*2;



grille[x1][y1] = new Case(view,v1,x1,y1,tailleCase,grilleItem);
grille[x2][y2] = new Case(view,v2,x2,y2,tailleCase,grilleItem);


}
