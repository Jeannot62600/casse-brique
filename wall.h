#ifndef WALL_H
#define WALL_H
#include "bricks.h"
#include "point.h"


class wall
{
    public:
        wall();
        wall(double anb, double ahaut);
        virtual ~wall();
        void affiche(BITMAP*);
        void affichetext();
        void setcolor(int);
    protected:
        double nbBrick;
        double hautWall;
        bricks briques[200];
    private:
};

#endif // WALL_H
