//
//  main.cpp
//  Lab3
//
//  Created by Songyou Peng on 12/11/15.
//  Copyright © 2015 Songyou Peng. All rights reserved.
//

#include <iostream>
#include "lab3.hpp"

int main(int argc, const char * argv[]) {
    /*********** 3.1 Pointers as arrays ****************/
//    int x;
//    int *a, *b;
//    std::cout << "Please input a positive interger, which is the size of array: ";
//    std::cin >> x;
//    a = new int [x];
//    b = new int [x];
//    
//    for (int i = 0; i < x; ++i)
//    {
//        *(a + i) = i * 2;
//        *(b + i) = i * 2 + 1;
//    }
//    
//    DisplayPointerInfo(a, x);
//    std::cout << std::endl;
//    DisplayPointerInfo(b, x);
//    
//    /*********** 3.2 Swap arrays ****************/
//    SwapArray(a, b, x);
//    std::cout << "Swap array." << std::endl;
//    DisplayPointerInfo(a, x);
//    std::cout << std::endl;
//    DisplayPointerInfo(b, x);
//    
//    delete a;
//    delete b;
//    return 0;
    
    /*********** 3.3 Allocation and deallocation ****************/
    
    int **a, n, m;
    std::cout << "Please input a positive interger for the height of matrix: ";
    std::cin >> n;
    std::cout << "Please input a positive interger for the width of matrix: ";
    std::cin >> m;
    a = CreateMatrix(n, m);
    DisplayMatrix(a, n, m);
    DeleteMatrix(a);
    
    /*********** 3.4 Allocation and deallocation ****************/
    

}
