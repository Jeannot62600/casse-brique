#define RAQ_H
#include <allegro.h>
#include "bricks.h"
#include "form.h"
#include "point.h"

class raq:public rectangle
{
    public:
      raq();
      void followMouse(point);
    protected:
    private:
};
