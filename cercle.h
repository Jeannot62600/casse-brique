#ifndef CERCLE_H
#define CERCLE_H
#include <allegro.h>
#include "rectangle.h"
#include "point.h"
#include "math.h"

class cercle:public point
{
    public:
      cercle(point, double, double, double);
      ~cercle();
      void affiche(BITMAP *);
      void collision(rectangle *);
      void mouvement();

    protected:
      double radius;
      double angle;
      double couleur;
    private:
};

#endif // CERCLE_H
