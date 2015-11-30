//
//  Tree.cpp
//  Lab7
//
//  Created by Songyou Peng on 30/11/15.
//  Copyright © 2015 Songyou Peng. All rights reserved.
//
#include "Tree.h"

Tree::Tree()
{
    num = 0;
    root = new TreeNode;
}

Tree::~Tree()
{
    delete root;
}

TreeNode* Tree::GetRoot()
{
    return root;
}


void Tree::CreateTree()
{
    std::cout << "How many words do you want to add into the dictionary? ";
    std::cin >> num;
    std::cout << "Enter word to add into dictionary ";
    char *input = new char[255];
    std::cin >> input;
    root -> SetData(input);
    
    
    for(int i = 1; i < num; ++i)
    {
        std::cout << "Enter word to add into dictionary ";
        char *input = new char[255];
        std::cin >> input;
        TreeNode *current = new TreeNode;
        current -> SetData(input);
        PlaceNode(root, current);
        //delete current;
    }
}

void Tree::PlaceNode(TreeNode *old, TreeNode *current)
{
    if (strcmp(old -> GetData(), current -> GetData()) > 0)
    {
        if(old -> GetLeft() == NULL)
            old -> SetLeft(current);
        else
            PlaceNode(old -> GetLeft(), current);
        
    }
    else if(strcmp(old -> GetData(), current -> GetData()) < 0)
    {
        if(old -> GetRight() == NULL)
            old -> SetRight(current);
        else
            PlaceNode(old -> GetRight(), current);
    }
    else
        current = old;
}

void Tree::PreOrder(TreeNode* node)
{
    if(node != NULL)
    {
        std::cout << node -> GetData() << std::endl;
        PreOrder(node -> GetLeft());
        PreOrder(node -> GetRight());
    }
}


void Tree::PostOrder(TreeNode* node)
{
    if(node != NULL)
    {
        PostOrder(node -> GetLeft());
        PostOrder(node -> GetRight());
        std::cout << node -> GetData() << std::endl;
    }
}


void Tree::InOrder(TreeNode* node)
{
    if(node != NULL)
    {
        InOrder(node -> GetLeft());
        std::cout << node -> GetData() << std::endl;
        InOrder(node -> GetRight());
    }
}