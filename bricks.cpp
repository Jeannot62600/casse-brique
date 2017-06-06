#include "bricks.h"

bricks::bricks(rectangle arect, int aforce):rectangle(arect){
    force.aforce;
}

bricks::~bricks():~rectangle(){}

void bricks::touch(int pui){
    force -= pui;
}
