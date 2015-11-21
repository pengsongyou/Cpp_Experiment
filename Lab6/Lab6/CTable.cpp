//
//  CTable.cpp
//  Lab6
//
//  Created by Songyou Peng on 20/11/15.
//  Copyright © 2015 Songyou Peng. All rights reserved.
//

#include "CTable.h"

CTable::CTable()
{
    num = 10;
    table = new int(num);
    for (int i = 0; i < num; ++i)
    {
        *(table + i) = rand()%1000;
    }
    
}

CTable::CTable(int n)
{
    num = n;
    table = new int(num);
    for (int i = 0; i < num; ++i)
    {
        *(table + i) = rand()%1000;
    }
}

CTable::~CTable()
{
    delete table;
}

void CTable::Bubble()
{
    for (int i = 0; i < num; ++i)
    {
        for (int j = i; j < num; ++j)
        {
            if (table[i] > table[j])
            {
                int tmp = table[i];
                table[i] = table[j];
                table[j] = tmp;
            }
        }
    }
}


void CTable::Quicksort(int *t, int n)
{
    if (n <= 1) return;
    
    int pivot_pos = rand()%n; // randomly choose the pivot from the array.
    int pivot = t[pivot_pos];
    int front = 0, back = n - 1;
    while (front < back)
    {
        
        while (t[front] < pivot)
            ++front;
        while (t[back] > pivot)
            --back;
            
        ///////// swap now //////////
        int tmp;
        tmp = t[back];
        t[back] = t[front];
        t[front] = tmp;
    }
    
    //////// Recursion ///////
    Quicksort(t, front);
    Quicksort(t + front + 1, n - front - 1);

}

int* CTable::GetTable()
{
    return table;
}

void CTable::DisplayTable()
{
    for (int i = 0; i < num; ++i)
        std::cout << table[i] << " ";
    std:: cout << std::endl;
}