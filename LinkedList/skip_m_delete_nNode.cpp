#include <iostream>
#include <bits/stdc++.h>

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

using namespace std;

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

Node *skipMdeleteN(Node *head, int m, int n)
{

    if (head == NULL)
    {
        return head;
    }

    Node *curr = head, *t;
    int cnt;

    while (curr != NULL)
    {

        for (cnt = 1; cnt < m && curr != NULL; cnt++)
        {
            curr = curr->next;
        }

        if (curr == NULL)
        {
            return curr;
        }
        t = curr->next;
        for (cnt = 1; cnt <= n && curr != NULL; cnt++)
        {
            Node *temp = t;
            t = t->next;
            delete temp;
        }
        curr->next = t;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = takeinput();
        int m, n;
        cin >> m >> n;
        head = skipMdeleteN(head, m, n);
        print(head);
    }
    return 0;
}