#include "raq.h"

void raq::followMouse(point apos){
    y = apos.gety() - (largeur/2);
}
