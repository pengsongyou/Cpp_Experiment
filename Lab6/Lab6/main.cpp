//
//  main.cpp
//  Lab6
//
//  Created by Songyou Peng on 20/11/15.
//  Copyright © 2015 Songyou Peng. All rights reserved.
//

#include <iostream>
#include "CTable.h"


int main(int argc, const char * argv[]) {
    // insert code here...
    CTable *generator;
    int n = 10;
    generator = new CTable(n);
    //generator -> DisplayTable();
    //generator -> Bubble();
    generator -> DisplayTable();
    generator -> Quicksort(generator -> GetTable(), n);
    generator -> DisplayTable();
    return 0;
}
