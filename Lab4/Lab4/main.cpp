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

    //poly -> BuildPolygon(poly);

    
//    /********Insert or Delete now*************/
//    while (1)
//    {
//        std::cout <<"What do you want now? (i = insert, d = delete, e = exit)";
//        char input;
//        std::cin >> input;
//        if (input == 'i')
//        {
//            Point2D *in, *new_array;
//            int x , y, position;
//            std:: cout << "x = ";
//            std::cin >> x;
//            std:: cout << "y = ";
//            std::cin >> y;
//            std::cout << "What position? (Between 0 - " << start -> GetNumber() << ")";
//            std::cin >> position;
//            in -> setPoints(x, y);
//            in = NULL;
//            
//            new_array = new Point2D[start -> GetNumber() + 1];
//            //start -> InsertAt(new_array, p, in, position);
//            
//            
//        }
//        if (input == 'e')
//            break;
//            
//    }
    
    //p -> displayPoint(start -> GetElement(p, 2));
    
    //delete p;

    
    return 0;
}
