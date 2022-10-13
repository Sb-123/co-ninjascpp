#include <bits/stdc++.h>
using namespace std;
#include <queue>
#include "BTS_class.h"

binaryTreeNode<int> *takeInputLevelWise()
{
    int rootData;
    cout << "Enter root data" << endl;
    cin >> rootData;

    binaryTreeNode<int> *root = new binaryTreeNode<int>(rootData);

    queue<binaryTreeNode<int> *> pendingNodes;
    pendingNodes.push(root);

    while (pendingNodes.size() != 0)
    {
        binaryTreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter left child of " << front->data << endl;
        int leftchildData;
        cin >> leftchildData;

        if (leftchildData != -1)
        {
            binaryTreeNode<int> *child = new binaryTreeNode<int>(leftchildData);
            front->left = child;
            pendingNodes.push(child);
        }

        cout << "Enter right child of " << front->data << endl;
        int rightchildData;
        cin >> rightchildData;

        if (rightchildData != -1)
        {
            binaryTreeNode<int> *child = new binaryTreeNode<int>(rightchildData);
            front->right = child;
            pendingNodes.push(child);
        }
    }

    return root;
}

binaryTreeNode<int> *takeInput()
{
    int rootData;
    cout << "Enter data" << endl;
    cin >> rootData;

    if (rootData == -1)
    {
        return NULL;
    }

    binaryTreeNode<int> *root = new binaryTreeNode<int>(rootData);

    binaryTreeNode<int> *leftChild = takeInput();
    binaryTreeNode<int> *rightChild = takeInput();

    root->left = leftChild;
    root->right = rightChild;

    return root;
}

void printBTS(binaryTreeNode<int> *root)
{

    if (root == NULL)
    {
        return;
    }
    cout << root->data << ":";

    if (root->left != NULL)
    {
        cout << "L" << root->left->data << " ";
    }

    if (root->right != NULL)
    {
        cout << "R" << root->right->data << " ";
    }
    cout << endl;
    printBTS(root->left);
    printBTS(root->right);
}

int main()
{

    // binaryTreeNode<int> *root = new binaryTreeNode<int>(1);
    // binaryTreeNode<int> *node1 = new binaryTreeNode<int>(2);
    // binaryTreeNode<int> *node2 = new binaryTreeNode<int>(3);

    binaryTreeNode<int> *root = takeInputLevelWise();

    // root->left = node1;
    // root->right = node2;

    printBTS(root);
    delete root;
}

// 1 2 3 4 5 6 7 -1 -1 8 9 -1 -1 -1 -1 -1 -1