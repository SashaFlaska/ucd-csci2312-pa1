//
// Created by Alexander Flaska on 2/6/16.
//
#include <cmath>
#include "point.h"


Point::Point()// default constructor with everythign set to 0
{
    x = y = z = 0.0;
}


Point::Point(double newX, double newY, double newZ)// 3 param constructor
{
    x = newX;
    y = newY;
    z = newZ;
}
Point::~Point()
{

}

//mutators
void Point::setX(double newX)
{
    x = newX;
}

void Point::setY(double newY)
{
    y = newY;
}

void Point::setZ(double newZ)
{
    z = newZ;
}

// Accessors
double Point::getX() const
{
    return x;
}

double Point::getY() const
{
    return y;
}

double Point::getZ() const
{
    return z;
}

// distance between points.
double Point::distanceTo(const Point& endPoint) const
{
    double distance;

    // pythagorean with x y and z
    distance = sqrt(pow((endPoint.getX() - x), 2) + pow((endPoint.getY() - y), 2) + pow((endPoint.getZ() - z), 2));

    return distance;
}