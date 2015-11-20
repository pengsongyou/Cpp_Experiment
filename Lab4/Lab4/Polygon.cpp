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

void Polygon::BuildPolygon()
{
    std::cout << "Please input the number of points: ";
    std::cin >> num;
    
    if (num <= 2)
    {
        std::cout << "Cannot build a polygon! Please input again" << std::endl;
        std::cout << "Please input the number of points: ";
        std::cin >> num;
    }
    
    Point2D *current;//This is the current pointer in each iteration
    Point2D *old; //This is previous pointer we want to use
    (this -> first) = new Point2D;
    current = this -> first;
    for(int i = 0; i < (num - 1); ++i)
    {
        int x , y;
        std::cout << "x = ? ";
        std::cin >> x;
        std::cout << "y = ? ";
        std::cin >> y;
        current -> setPoints(x, y);
        old = current;
        current = new Point2D;
        current -> setPrev(old);
        old -> setNext(current);
        
    }
    
    int x , y;
    std::cout << "x = ? ";
    std::cin >> x;
    std::cout << "y = ? ";
    std::cin >> y;
    current -> setPoints(x, y);
    current -> setNext(this -> first);
    (this -> first) -> setPrev(current);
    
}


void Polygon::displayPolygon()
{
    Point2D *current;
    current = this -> first;
    for(int i = 0; i < this -> num; ++i)
    {
        /***********print**********/
        std::cout << "Points at position " << i << std::endl;
        std::cout << "(x, y) = ";
        current -> displayPoint();
        std::cout << "Next = ";
        current -> getNext() -> displayPoint();
        std::cout << "Prev = ";
        current -> getPrev() -> displayPoint();
        std::cout << std::endl;
        current = current -> getNext();
    }
}



Point2D* Polygon::GetElement(Point2D* p, int n)
{
    return (p + n);
}

//void Polygon::InsertAt(Point2D* new_arr, Point2D* points, Point2D* new_point, int pos)
//{
//    for (int i = 0; i < num + 1; ++i)
//    {
//        if (i == pos) *(new_arr + i) = *new_point;
//        else *(new_arr + i) =
//    }
//}
