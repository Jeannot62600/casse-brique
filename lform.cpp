#include "lform.h"
#include <list>

lform::lform(){}
lform::~lform(){}
void lform::ajoute(form* p){
  l.push_back(p);
}
void lform::supprime(form *p){
  l.remove(p);
}
void lform::affiche(BITMAP * bmp){
  for(it = l.begin(); it != l.end(), it++)
    (*it)->affiche(bmp)
}
