#include "bricks.h"
#include <allegro.h>

bricks::bricks():milieu(10)
{
    hauteur = 50;
    largeur = 60;
    color = makecol(230,230,230);
}
bricks::bricks(double ahauteur, double alargeur, point milieux):milieu(milieux){
    hauteur = ahauteur;
    largeur = alargeur;
    color = makecol(250,250,250);
}

bricks::bricks(double ahauteur, double alargeur, point milieux, int acolor):milieu(milieux){
    hauteur = ahauteur;
    largeur = alargeur;
    color = acolor;
}

bricks::bricks(const bricks &source):milieu(source.milieu){
    hauteur= source.hauteur;
    largeur= source.largeur;
    color= source.color;
}

void bricks::affiche(BITMAP* bmp){
    double x = milieu.getx(), y = milieu.gety();
    double dx = hauteur/2, dy = largeur/2;
    rectfill(bmp, x-dx, y-dy, x+dx, y+dy,color);
}

void bricks::setcolor(int acol){
    color = acol;
}

void bricks::setpos(double X, double Y){
    milieu.init(X,Y);
    //milieu.setY(y);
}

void bricks::setlength(double ahauteur, double alargeur){
    hauteur = ahauteur;
    largeur = alargeur;
}


point bricks::getpos(){
    return milieu;
}



bricks::~bricks()
{
    //dtor
}
