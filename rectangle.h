#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "point.h"
#include <allegro.h>


class rectangle:public point{
protected:
  double hauteur, largeur;
  int couleur = 0;
public:
  rectangle(point, double, double);
  ~rectangle();
  int appartient(point);
  void affiche(BITMAP *);
};

#endif // RECTANGLE_H
