#include "raq.h"
#include <allegro.h>

raq::raq():br()
{
    v = 1;
}
raq::raq(double avitesse, bricks abr):br(abr){
    v = avitesse;
}



void raq::affiche(BITMAP* bmp){
    br.affiche(bmp);
}


void raq::setpos(double X, double Y){
    br.setpos(X,Y);
}

void raq::setlength( double alargeur){
}

void raq::gotogauche(double x){
	br.setpos(br.getpos().getx(), br.getpos().gety()+ x*v);

}
void raq::gotodroite(){}

point raq::getpos(){
    return br.getpos();
}



raq::~raq()
{
    //dtor
}
