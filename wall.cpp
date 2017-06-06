#include "wall.h"
#include <iostream>

using namespace std;

wall::wall(double anb, double ahaut){
    nbBrick = anb;
    hautWall = ahaut;
    double x= 10,y = 25;
    point* bb;
    bricks* ba;
    for(int i = 0; i < nbBrick ; i++){
        bb = new point(((i)% (int)hautWall)*(x+5) +15 ,(int)((i)/hautWall) * (y+5)+15);
        ba = new bricks(10,25,*bb,125);
        briques[i] = *ba;
    }
}

void wall::setcolor(int acolor){
    for(int i = 0; i < nbBrick ; i++){
        briques[i].setcolor(acolor);
    }
}

void wall::affiche(BITMAP* bmp){
    for(int i = 0; i < nbBrick ; i++){
        briques[i].affiche(bmp);
    }
}


void wall::affichetext(){
    for(int i = 0; i < nbBrick ; i++){
        cout << i<<" : "<< briques[i].getpos().getx()<< ", " << briques[i].getpos().gety() <<endl;;
    }
}

wall::~wall()
{
    //dtor
}
