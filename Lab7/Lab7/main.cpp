//
//  main.cpp
//  Lab7
//
//  Created by Songyou Peng on 30/11/15.
//  Copyright © 2015 Songyou Peng. All rights reserved.
//

#include <iostream>
#include <string.h>
#include "Tree.h"

int main(int argc, const char * argv[]) {

    Tree *t = new Tree;
    t -> CreateTree();
    t -> InOrder(t -> GetRoot());
    return 0;
}
