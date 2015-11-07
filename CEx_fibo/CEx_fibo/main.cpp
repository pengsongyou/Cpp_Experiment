//
//  main.cpp
//  CEx_fibo
//
//  Created by Songyou Peng on 07/11/15.
//  Copyright © 2015 Songyou Peng. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;



int fibo(const int &x)
{
    if (x > 1) return (fibo(x-1) + fibo(x-2));
    else return x;
    
}

template <class T>
T ratio_fibo (T f2, T f1)
{
    return (f2/f1);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int x, idx = 0;
    double r, minus = 1000;
    double eps = pow(10, -9);
    double phi = (1 + sqrt(5)) / 2;
    //    cout << "input an non negative interger: ";
    //    cin >> x ;
    //    cout << "The fibo number of " << x << " is: " << fibo(x) <<endl;
    while(minus > eps)
    {
        
        double fibo1 = fibo(idx);
        double fibo2 = fibo(idx +1);
        r = ratio_fibo< double >(fibo2, fibo1);
        minus = abs(r - phi);
        ++idx;
    }
    cout << "Computation succeeded!" << endl;
    cout << "The code has looped for " << idx << " times." << endl;
    return 0;
}
