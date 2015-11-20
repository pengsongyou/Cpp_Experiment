//
//  main.cpp
//  Lab4
//
//  Created by Songyou Peng on 12/11/15.
//  Copyright © 2015 Songyou Peng. All rights reserved.
//

#include <iostream>
#include "Point2D.h"
#include "Polygon.h"

int main(int argc, const char * argv[]) {
    // insert code here...
//    Point2D dummy(10,10), *p;
//    p = new Point2D (10,20);
//    dummy.displayPoint(&dummy);
//    dummy.setPoints(1, 2);
    //dummy.displayPoint(&dummy);
    //delete p;
    Polygon *poly;
    poly = new Polygon;
    poly -> BuildPolygon();
    poly -> displayPolygon();


    
    /********Insert or Delete now*************/
    while (1)
    {
        std::cout <<"What do you want now? (i = insert an element, d = delete an element, e = exit)";
        char input;
        std::cin >> input;
        if (input == 'i')
        {
            Point2D *in;
            in = new Point2D;
            float x , y, position;
            std:: cout << "x = ";
            std::cin >> x;
            std:: cout << "y = ";
            std::cin >> y;
            std::cout << "What position? (Between 0 - " << poly -> getNum() - 1 << ")";
            std::cin >> position;
            in -> setPoints(x, y);
            poly -> InsertAt(in, position);
            poly -> displayPolygon();
            
        }
        if (input == 'd')
        {
            int position;
            std::cout << "Which one do you want to delete? (Between 0 - " << poly -> getNum() - 1 << ")";
            std::cin >> position;
            poly -> DeleteAt(position);
            poly -> displayPolygon();
        }
        if (input == 'e')
            break;
            
    }
    
    //p -> displayPoint(start -> GetElement(p, 2));
    
    //delete p;

    
    return 0;
}
