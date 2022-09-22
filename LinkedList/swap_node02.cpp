#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define node Node

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *takeinput()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *swapNodes(Node *head, int i, int j)
{

    // write your code here
    if (i > j)
    {
        i = i + j;
        j = i - j;
        i = i - j;
    }
    // Find nodes
    if (i == 0)
    {
        if (j == 1)
        {
            node *cur = head->next;
            head->next = cur->next;
            cur->next = head;
            return cur;
        }
        node *pt = head;
        for (int c = 1; c < j; c++)
            pt = pt->next;

        node *temp = head->next;
        node *cur = pt->next;

        head->next = cur->next;
        pt->next = head;
        cur->next = temp;
        return cur;
    }
    if (j - i == 1)
    {
        node *pt = head;
        for (int c = 1; c < i; c++)
            pt = pt->next;

        node *cur = pt->next;
        node *cur1 = cur->next;

        cur->next = cur1->next;
        pt->next = cur1;
        cur1->next = cur;
        return head;
    }
    node *pt1 = head;
    node *pt2 = head;

    for (int c = 1; c < i; c++)
        pt1 = pt1->next;

    for (int c = 1; c < j; c++)
        pt2 = pt2->next;

    node *cur1 = pt1->next;
    node *cur2 = pt2->next;

    node *temp = cur1->next;

    cur1->next = cur2->next;
    pt2->next = cur1;
    pt1->next = cur2;
    cur2->next = temp;

    return head;
}

node *takeinput()
{
    int data;
    cin >> data;
    node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        node *newnode = new node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        cin >> data;
    }
    return head;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i, j;
        Node *head = takeinput();
        cin >> i;
        cin >> j;
        head = swapNodes(head, i, j);
        print(head);
    }
    return 0;
}