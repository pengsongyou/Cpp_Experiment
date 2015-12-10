//
//  main.cpp
//  Lab8
//
//  Created by Songyou Peng on 07/12/15.
//  Copyright © 2015 Songyou Peng. All rights reserved.
//

#include <iostream>
#include <vector>
#include "CMatrix.h"
#include <string.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    while (1)
    {
        std::cout << "What do you wanna do? " << std::endl;
        std::cout << "1. Create an identity matrix \n2. Create a random matrix \n3. Create your own matrix \n0. exit\n";
        int num = 100;
        std::cin >> num;
        switch (num)
        {
            case 1:
            {
                std::cout << "Please enter the size of matrix ";
                int tmp;
                std::cin >> tmp;
                CMatrix *myMatrix = new CMatrix(tmp);
                myMatrix -> ShowMatrix();
                std::cout << std::endl;
                delete myMatrix;
                break;
            }
            case 2:
            {
                int tmp_M, tmp_N;
                std::cout << "Please enter the size of matrix \nheight = ";
                std::cin >> tmp_M;
                std::cout << "width = ";
                std::cin >> tmp_N;
                CMatrix *myMatrix = new CMatrix(tmp_M, tmp_N);
                myMatrix -> ShowMatrix();
                std::cout << std::endl;
                delete myMatrix;
                break;
            }
            case 3:
            {
                
                CMatrix *myMatrix = new CMatrix;
                myMatrix -> CreateOwnMatrix();
                myMatrix -> ShowMatrix();
                delete myMatrix;
                
            }

            default:
                exit(0);
        }
    }
    
    return 0;
}
