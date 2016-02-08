//
// Created by Alexander Flaska on 2/6/16.
//

#include "point.h"
#include <cmath>



double findArea(const Point& a, const Point& b, const Point& c)
{
    double sideA, sideB, sideC;

    sideA=a.distanceTo(b);
    sideB=b.distanceTo(c);
    sideC=c.distanceTo(a);

    double semiPerimeter;
    semiPerimeter=(sideA+sideB+sideC)/2;

     return sqrt(semiPerimeter*(semiPerimeter-sideA)*(semiPerimeter-sideB)*(semiPerimeter-sideC));


}