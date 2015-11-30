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
    
    while(num <= 2)
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

void Polygon::InsertAt(Point2D* point, int n)
{
    
    Point2D *current = this -> first;
    if (n == 0)
    {
        Point2D *tmp;
        tmp = current;
        tmp = tmp -> getPrev();
        current -> setPrev(point);
        point -> setNext(current);
        tmp -> setNext(point);
        point -> setPrev(tmp);
        (this -> first) = point;
        
    }
    else
    {
        for (int i = 0; i < n; ++i)
        {
            current = current -> getNext();
        }
        Point2D *tmp;
        tmp = current -> getPrev();
        tmp ->setNext(point);
        current -> setPrev(point);
        point -> setPrev(tmp);
        point -> setNext(current);
    }
    ++num;//When inserting one element, total number of elements increases one.
}

void Polygon::DeleteAt(int n)
{
    if (n == 0)
    {
        Point2D *last = this -> first -> getPrev();
        Point2D *future = this -> first -> getNext();
        last -> setNext(future);
        future -> setPrev(last);
        this -> first = future;
    }
    else
    {
        Point2D *current = this -> first;
        for (int i = 0; i < n - 1; ++i)
        {
            current = current -> getNext();
        }
    
        Point2D *future;
        future = current -> getNext() ->getNext();
        current -> setNext(future);
        future -> setPrev(current);
    }
    
    --num;
}

int Polygon::getNum()
{
    return num;
}
