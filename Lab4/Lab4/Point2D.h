//
//  Point2D.h
//  Lab4
//
//  Created by Songyou Peng on 12/11/15.
//  Copyright © 2015 Songyou Peng. All rights reserved.
//
#include <iostream>

#ifndef Point2D_h
#define Point2D_h

class Point2D
{
private:
    float x;
    float y;
    
    Point2D *prev;
    Point2D *next;
public:
    Point2D();
    Point2D(float, float);
    void displayPoint();
    void displayAddress(Point2D*);
    void setPoints(float, float);
    void setPrev(Point2D *);
    void setNext(Point2D *);
    Point2D* getPrev();
    Point2D* getNext();
};
#endif /* Point2D_h */

