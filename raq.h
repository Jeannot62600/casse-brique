
#define RAQ_H
#include <allegro.h>
#include "bricks.h"

class raq
{
    public:
        raq();
        raq(double avitesse, bricks abr);
        void setpos(double X, double Y);
        void setlength(double alargeur);
        point getpos();
        void gotogauche(double x);
        void gotodroite();

        virtual ~raq();

        void affiche(BITMAP*);
    protected:
        bricks br;
       	double v;

    private:
};
