#ifndef BRICKS_H
#define BRICKS_H
#include <allegro.h>
#include "point.h"
#include "form.h"


class bricks:public form
{
    public:
        bricks();
        bricks(double ahauteur, double alargeur, point milieux);
        bricks(double ahauteur, double alargeur, point milieux, int acolor);
        bricks(const bricks &source);
        void setcolor(int acol);
        void setpos(double X, double Y);
        void setlength(double ahauteur, double alargeur);
        point getpos();
        void affiche(BITMAP*);
    protected:
        point milieu;
        double hauteur, largeur;
        int color;
    private:
};

#endif // BRICKS_H
