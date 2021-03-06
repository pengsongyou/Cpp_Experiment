//
//  Point2D.cpp
//  Lab4
//
//  Created by Songyou Peng on 12/11/15.
//  Copyright © 2015 Songyou Peng. All rights reserved.
//

#include "Point2D.h"

void Point2D::setPoints(float a, float b)
{
    this->x = a;
    this->y = b;
}

Point2D::Point2D():
x(0.),
y(0.)
{
}

Point2D::Point2D(float a, float b):x(a),y(b){}

void Point2D::displayPoint()
{
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}

void Point2D::displayAddress(Point2D* point)
{
    std::cout << point << std::endl;
}

void Point2D::setPrev(Point2D *point)
{
    prev = point;
}
void Point2D::setNext(Point2D *point)
{
    next = point;
}

Point2D* Point2D::getPrev()
{
    return prev;
}

Point2D* Point2D::getNext()
{
    return next;
}