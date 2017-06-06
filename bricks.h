#ifndef BRICKS_H
#define BRICKS_H
#include <allegro.h>
#include "point.h"



class bricks:public rectangle
{
    public:
      void touch(int puissance);
    protected:
      int force;
    private:
};

#endif // BRICKS_H
