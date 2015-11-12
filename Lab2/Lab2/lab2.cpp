//
//  lab2.cpp
//  Lab2
//
//  Created by Songyou Peng on 08/11/15.
//  Copyright © 2015 Songyou Peng. All rights reserved.
//

#include <iostream>
#include <cmath>
#include "lab2.h"

void swap1(int x, int y)
{
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}

void swap2(int &x, int &y)
{
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}

void swap3(int *x, int *y)
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

double* CartesianToPolar(double a, double b)
{
    double *coef_fun = new double [2];
    *coef_fun = sqrt(a * a + b * b);
    *(coef_fun + 1) = atan2(b, a);
    
    return coef_fun;
}

bool IsMultipleOf (int a, int b)
{
    return a % b != 0 ? 0 : 1;
//    if (a % b != 0)
//        return false;
//    else
//        return true;
}

int** Pascal(int** tab, int x)
{
    for (int i = 0; i < x; ++i)
    {
        *(*(tab + i)) = 1;//Initialize the first COLUMN!
        if(i >= 1)
            *(*(tab) + i) = 0; //Initialize the first ROW!
    }
    
    for (int i = 1; i < x; ++i)
        for(int j = 1; j < x; ++j)
        {
            *(*(tab + i) + j) = *(*(tab + i - 1) + j) + *(*(tab + i - 1) + j - 1);
        }
    return tab;
}
