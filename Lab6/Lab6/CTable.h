//
//  CTable.h
//  Lab6
//
//  Created by Songyou Peng on 20/11/15.
//  Copyright © 2015 Songyou Peng. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#ifndef CTable_h
#define CTable_h

class CTable
{
private:
    int *table;
    int num;
public:
    CTable();
    CTable(int);
    ~CTable();
    void RandBuild(int n);
    void RandBuild();
    void DisplayTable();
    int* GetTable();
    void Bubble();
    void Quicksort(int* , int);
};


#endif /* CTable_h */
