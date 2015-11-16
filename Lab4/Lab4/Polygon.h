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
    
public:
    Polygon();
    Polygon(int);
    int GetNumber();
    Point2D* BuildPolygon(Point2D*);
    void PrevNext(Point2D*);
    Point2D* GetElement(Point2D*, int);
    void InsertAt(Point2D*, Point2D* , Point2D*, int);
};


#endif /* Polygon_h */

