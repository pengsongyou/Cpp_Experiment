//
//  Polygon.cpp
//  Lab4
//
//  Created by Songyou Peng on 16/11/15.
//  Copyright © 2015 Songyou Peng. All rights reserved.
//

#include "Polygon.h"

Polygon::Polygon():num(0){}
Polygon::Polygon(int a):num(a) {};
Point2D* Polygon::BuildPolygon(Point2D* points)
{
    std::cout << "Please input the number of points: ";
    std::cin >> num;
    
    if (num <= 2)
    {
        std::cout << "Cannot build a polygon! Please input again" << std::endl;
        std::cout << "Please input the number of points: ";
        std::cin >> num;
    }
    points = new Point2D [num];
    for (int i = 0; i < num; ++i)
    {
        int x , y;
        std::cout << "x = ? ";
        std::cin >> x;
        std::cout << "y = ? ";
        std::cin >> y;
        (points + i)->setPoints(x, y);
    }
    return points;
}

int Polygon::GetNumber()
{
    return this->num;
}

void Polygon::PrevNext(Point2D* points)
{
    int number = this->GetNumber();
    for(int i = 0; i < number; ++i)
    {
        Point2D *prev, *next;
        prev = new Point2D;
        next = new Point2D;
        (i == 0) ? *prev = points[number - 1] : *prev = points[i - 1];
        (i == (number - 1)) ? *next = points[0] : *next = points[i + 1];
        
        /***********print**********/
        std::cout << "Points at position " << i << std::endl;
        std::cout << "(x, y) = ";
        points -> displayPoint(points + i);
        std::cout << "Next = ";
        next -> displayPoint(next);
        std::cout << "Prev = ";
        prev -> displayPoint(prev);
        std::cout << std::endl;
    }
    
}

Point2D* Polygon::GetElement(Point2D* p, int n)
{
    return (p + n);
}

void Polygon::InsertAt(Point2D* new_arr, Point2D* points, Point2D* new_point, int pos)
{
    for (int i = 0; i < num + 1; ++i)
    {
        if (i == pos) *(new_arr + i) = *new_point;
        else *(new_arr + i) =
    }
}
