//
//  Polygon.h
//  Lab4
//
//  Created by Songyou Peng on 16/11/15.
//  Copyright © 2015 Songyou Peng. All rights reserved.
//

#include <iostream>
#include "Point2D.h"

#ifndef Polygon_h
#define Polygon_h

class Polygon
{
private:
    int num;
    Point2D *first;
public:
    Polygon();
    Polygon(int);
    void BuildPolygon();
    void displayPolygon();
    Point2D* GetElement(Point2D*, int);
    //void InsertAt(Point2D*, Point2D* , Point2D*, int);
};


#endif /* Polygon_h */

