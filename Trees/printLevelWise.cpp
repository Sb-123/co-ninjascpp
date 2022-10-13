#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    vector<TreeNode<T> *> children;

    TreeNode(T data) { this->data = data; }

    ~TreeNode()
    {
        for (int i = 0; i < children.size(); i++)
        {
            delete children[i];
        }
    }
};

TreeNode<int> *takeInputLevelWise()
{
    int rootData;
    cin >> rootData;
    TreeNode<int> *root = new TreeNode<int>(rootData);

    queue<TreeNode<int> *> pendingNodes;

    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        int numChild;
        cin >> numChild;
        for (int i = 0; i < numChild; i++)
        {
            int childData;
            cin >> childData;
            TreeNode<int> *child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }

    return root;
}
// M-1:-
// void printLevelWise(TreeNode<int> *root)
// {
//     queue<TreeNode<int> *> pendingNodes;
//     pendingNodes.push(root);

//     while (pendingNodes.size() != 0)
//     {
//         TreeNode<int> *currNode = pendingNodes.front();
//         pendingNodes.pop();

//         string tobePrinted = to_string(currNode->data) + ":";

//         for (int i = 0; i < currNode->children.size(); i++)
//         {
//             tobePrinted += to_string(currNode->children[i]->data) + ",";
//             pendingNodes.push(currNode->children[i]);
//         }

//         cout << tobePrinted << endl;
//     }
// }

// M-2 :-
void printLevelWise(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);

    while (pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << front->data << ":";
        for (int i = 0; i < front->children.size(); i++)
        {
            cout << front->children[i]->data << ",";
            pendingNodes.push(front->children[i]);
        }
        cout << endl;
    }
}

int countNode(TreeNode<int> *root)
{

    int ans = 1;

    for (int i = 0; i < root->children.size(); i++)
    {
        ans += countNode(root->children[i]);
    }
    return ans;
}

int main()
{
    TreeNode<int> *root = takeInputLevelWise();
    printLevelWise(root);

    cout << countNode(root) << endl;
}

// 1 2 2 3 2 4 5 2 6 7 0 0 0 0