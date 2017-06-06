#ifndef WALL_H
#define WALL_H
#include "bricks.h"
#include "point.h"
#include <list>


class wall
{
    public:
        wall(double anb, double ahaut);
        ~wall();
        void affiche(BITMAP*);
        void affichetext();
        void setcolor(int);
    protected:
        list<bricks*> l_wa;
        list<bricks*>::iterator wa_it;
    private:
};

#endif // WALL_H
