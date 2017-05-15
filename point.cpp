#include "point.h"
#include <iostream>
#include "math.h"


point::point(){
    x = 0;
    y = 0;
    carttopolaire();
}

point::point(double XY){
    x = XY;
    y = XY;
    carttopolaire();
}

point::point(double X, double Y){
    x = X;
    y = Y;
    carttopolaire();
}

point::point(const point &source ){
    x = source.x;
    y = source.y;
    theta = source.theta;
    rho = source.rho;
}

point::~point(){

}


double point::getx(){
    return x;
}

double point::gety(){
    return y;
}

void point::init(double ax, double ay){
    x = ax;
    y = ay;
    carttopolaire();
}

void point::initpol(double arho, double atheta){
    rho = arho;
    theta = atheta;
    polairetocart();
}

void point::affiche(){
}

void point::deplace(double dx, double dy){
    x += dx;
    y += dy;
    carttopolaire();
}

void point::homothetie(double coef){
    x *= coef;
    y *= coef;
    carttopolaire();
}

void point::rotation(double dtheta){
    theta += dtheta;
    polairetocart();
}

void point::carttopolaire(){
    rho = sqrt(x*x + y*y);
    theta = atan(y/x);
}

void point::polairetocart(){
    x = rho * cos(theta);
    y = rho * sin(theta);
}
