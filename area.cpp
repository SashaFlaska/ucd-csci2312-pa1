//
// Created by Alexander Flaska on 2/6/16.
//

#include "point.h"
#include <cmath>



double findArea(const Point& a, const Point& b, const Point& c)// finds area
{
    double sideA, sideB, sideC;// sides are computed by using distanceto.

    sideA=a.distanceTo(b);
    sideB=b.distanceTo(c);
    sideC=c.distanceTo(a);

    double semiPerimeter;// solves for semi perimeter for use with herons formula to find the area.
    semiPerimeter=(sideA+sideB+sideC)/2;

     return sqrt(semiPerimeter*(semiPerimeter-sideA)*(semiPerimeter-sideB)*(semiPerimeter-sideC));


}