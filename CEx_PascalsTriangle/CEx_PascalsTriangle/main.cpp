//
//  main.cpp
//  CEx_PascalsTriangle
//
//  Created by Songyou Peng on 08/11/15.
//  Copyright © 2015 Songyou Peng. All rights reserved.
//

#include <iostream>

int perm_comb (int m, int n)
{
    if (m > n)
    {
        std::cout << "m is forbidden to be larger than n" << std::endl;
        exit(0);
    }
    
    else if (m == n || m == 0)
        return 1;
    else
    {
        
        int m_sum (1), n_sum (1), minus_sum (1);
        for (int i = 1; i <= m; ++i)
            m_sum *= i;
        
        n_sum = m_sum;
        for (int i = (m + 1); i <= n; ++i)
        {
            n_sum *= i;
        }
        for (int i = 1; i <= (n - m); ++i)
            minus_sum *= i;
        
        return (n_sum / (m_sum * minus_sum));
    }
    
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int x;
    std::cout << "Please input an interger: ";
    std::cin >> x;
    
    for (int i = 0; i <= x; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            std::cout << perm_comb(j, i) << " ";
        }
        std::cout << std::endl;
    }
    return 0;

}