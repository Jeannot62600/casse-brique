#include "cercle.h"

cercle::cercle(point p1, double rad, double angl, double coul):point p1{
  radius = rad;
  angle = angl;
  couleur = coul;
}
cercle::~cercle():~point(){}
void cercle::affiche(BITMAP *){
  // biblio allegro
}
void cercle::collision(rectangle * rect){
  /*Change l'angle selon le coté qui appartient au rectangle */
  E = point(x, y - radius);
  S = point(x + radius, y);
  N = point(x - radius, y);
  O = point(x, y + radius);
  SE = point(x + radius, y - radius);
  NE = point(x - radius, y - radius);
  SO = point(x + radius, y + radius);
  NO = point(x - radius, y + radius);
  /* Process qu'avec NSEO*/
  if(rect.appartient(E) || rect.appartient(O)) angle = -angle;
  if(rect.appartient(N) || rect.appartient(S)) angle = pi-angle;
}
void cercle::mouvement(){
  x += cos(angle);
  y += sin(angle);
  
}
