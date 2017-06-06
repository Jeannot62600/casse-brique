#include "rectangle.h"

rectangle::rectangle(point p1, double haut, double larg):point(p1){
  hauteur = haut;
  largeur = larg;
}

rectangle::~rectangle():~point(){}

int rectangle::appartient(point ptest){
    px = ptest.getx();
    py = ptest.gety();
    mxl = x + 0.5 * hauteur;
    myl = y + 0.5 * largeur;
    mxs = x - 0.5 * hauteur;
    mys = y - 0.5 * largeur;
    if(px <= mxl && py <= myl && px >=mxs && py >= mys) return 1;
    return 0;
}
void rectangle::affiche(BITMAP *){
  // bilio allegro
}
