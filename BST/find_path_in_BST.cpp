#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
    ~BinaryTreeNode()
    {
        if (left)
            delete left;
        if (right)
            delete right;
    }
};

using namespace std;
#include <vector>

BinaryTreeNode<int> *takeInput()
{
    int rootData;
    cin >> rootData;
    if (rootData == -1)
    {
        return NULL;
    }

    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        BinaryTreeNode<int> *currentNode = q.front();
        q.pop();
        int leftChild, rightChild;
        cin >> leftChild;
        if (leftChild != -1)
        {
            BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }
        cin >> rightChild;
        if (rightChild != -1)
        {
            BinaryTreeNode<int> *rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }

    return root;
}

vector<int> *getPath(BinaryTreeNode<int> *root, int x)
{
    // Write your code here

    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == x)
    {
        vector<int> *v = new vector<int>();
        v->push_back(root->data);
        return v;
    }
    else if (root->data < x)
    {
        vector<int> *leftoutput = getPath(root->left, x);
        if (leftoutput != NULL)
        {
            leftoutput->push_back(root->data);
            return leftoutput;
        }
        else
        {
            return NULL;
        }
    }
    else
    {
        vector<int> *rightoutput = getPath(root->right, x);
        if (rightoutput != NULL)
        {
            rightoutput->push_back(root->data);
            return rightoutput;
        }
        else
        {
            return NULL;
        }
    }
}

int main()
{
    BinaryTreeNode<int> *root = takeInput();
    int k;
    cin >> k;
    vector<int> *output = getPath(root, k);

    if (output != NULL)
    {
        for (int i = 0; i < output->size(); i++)
        {
            cout << output->at(i) << " ";
        }
    }

    delete root;
}