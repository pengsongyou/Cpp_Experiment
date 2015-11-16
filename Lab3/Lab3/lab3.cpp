//
//  lab3.cpp
//  Lab3
//
//  Created by Songyou Peng on 12/11/15.
//  Copyright © 2015 Songyou Peng. All rights reserved.
//

#include "lab3.hpp"
void DisplayPointerInfo(int* a, int n)
{
    std::cout << "Address of array: "<< a << std::endl;
    std::cout << "Elements of array: ";
    for (int i = 0; i < n; ++i)
    {
        std::cout << *(a + i) << " ";
    }
    std::cout << std::endl;
}

void SwapArray(int* a, int* b, int n)
{
    int t(0);
    for (int i = 0; i < n; ++i)
    {
        t = *(a + i);
        *(a + i) = *(b + i);
        *(b + i) = t;
    }
}

int* CreateArray(int n)
{
    int *x = new int [n];
    return x;
}

void DeleteArray(int* a)
{
    delete a;
}

int** CreateMatrix(int n, int m)
{
    int **a;
    a = new int* [n];
    for(int i = 0; i < n; ++i)
        a[i] = new int [m]();//!!! Initialize all the value to 0
    return a;
}

void DeleteMatrix(int** a)
{
    delete a;
}

void DisplayMatrix(int** a, int n, int m)
{
    for (int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            std::cout << *(*(a + i) + j);
        }
        std::cout <<std::endl;
    }
}
