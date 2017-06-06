#ifndef BRICKS_H
#define BRICKS_H
#include <allegro.h>
#include "point.h"
#include "rectangle.h"


class bricks:public rectangle
{
    public:
      bricks(rectangle,int);
      ~bricks();
      void touch(int puissance);
    protected:
      int force;
    private:
};

#endif // BRICKS_H
