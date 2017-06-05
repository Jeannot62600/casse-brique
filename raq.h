#define RAQ_H
#include <allegro.h>
#include "bricks.h"
#include "form.h"

class raq:public bricks
{
    public:
        raq();
        raq(double avitesse, bricks abr);
        void setpos(double X, double Y);
        void setlength(double alargeur);
        point getpos();
        void gotogauche(double x);
        void gotodroite();
        void affiche(BITMAP*);
    protected:
        bricks br;
       	double v;

    private:
};
