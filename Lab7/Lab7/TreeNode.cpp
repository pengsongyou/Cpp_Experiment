//
//  TreeNode.cpp
//  Lab7
//
//  Created by Songyou Peng on 30/11/15.
//  Copyright © 2015 Songyou Peng. All rights reserved.
//
#include "TreeNode.h"

TreeNode::TreeNode()
{
    data = new char [255];
    left = NULL;
    right = NULL;
}

TreeNode::~TreeNode()
{
    delete data;
    //delete left;
    //delete right;
}

void TreeNode::SetData(char *d)
{
    data = d;
}

char* TreeNode::GetData()
{
    return data;
}

void TreeNode::SetLeft(TreeNode *n)
{
    left = n;
}
void TreeNode::SetRight(TreeNode *n)
{
    right = n;
}

TreeNode* TreeNode::GetLeft()
{
    return left;
}

TreeNode* TreeNode::GetRight()
{
    return right;
}