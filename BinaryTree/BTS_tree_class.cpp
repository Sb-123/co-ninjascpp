#include <bits/stdc++.h>
using namespace std;

class binaryTreeNode
{

    int data;
    binaryTreeNode *left;
    binaryTreeNode *right;

    binaryTreeNode(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }

    ~binaryTreeNode()
    {
        delete left;
        delete right;
    }
};
