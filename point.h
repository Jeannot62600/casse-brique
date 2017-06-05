#ifndef POINT_H
#define POINT_H
#include "form.h"


class point:form
{
    private:
        double x;
        double y;
        double rho;
        double theta;
    public:
        point();
        point(double XY);
        point(double X, double Y);
        point(const point &);
        ~point();
        void init(double x, double y);
        void initpol(double rho, double theta);

        void affiche();
        void deplace(double dx, double dy);
        void homothetie(double coef);
        void rotation(double dtheta);
        void carttopolaire();
        void polairetocart();
        double getx();
        double gety();
};

#endif // POINT_H
