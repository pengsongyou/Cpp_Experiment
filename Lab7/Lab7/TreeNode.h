//
//  TreeNode.h
//  Lab7
//
//  Created by Songyou Peng on 30/11/15.
//  Copyright © 2015 Songyou Peng. All rights reserved.
//


#include <iostream>
#ifndef TreeNode_h
#define TreeNode_h
class TreeNode
{
private:
    char *data;//The data in this note
    TreeNode *left;
    TreeNode *right;
    
public:
    TreeNode();
    ~TreeNode();
    void SetData(char *);
    char* GetData();
    void SetLeft(TreeNode*);
    void SetRight(TreeNode*);
    TreeNode* GetLeft();
    TreeNode* GetRight();
};



#endif /* TreeNode_h */
