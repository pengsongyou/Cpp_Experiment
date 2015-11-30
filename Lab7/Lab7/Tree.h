//
//  Tree.h
//  Lab7
//
//  Created by Songyou Peng on 30/11/15.
//  Copyright © 2015 Songyou Peng. All rights reserved.
//

#include <iostream>
#include "TreeNode.h"
#include <string.h>
#ifndef Tree_h
#define Tree_h

class Tree
{
private:
    int num;
    TreeNode *root;
    
public:
    Tree();
    ~Tree();
    void CreateTree();
    TreeNode* GetRoot();
    void PlaceNode(TreeNode* , TreeNode*);
    void PreOrder(TreeNode*);
    void PostOrder(TreeNode*);
    void InOrder(TreeNode*);
};


#endif /* Tree_h */
