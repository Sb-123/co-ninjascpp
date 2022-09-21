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

    if (j < i)
    {
        int temp;
        temp = i;
        i = j;
        j = temp;
    }
    node *prev1, *prev2, *temp1, *temp2;

    if (i == j)
    {
        return head;
    }

    if (i == 0 && abs(i - j) != 1)
    {
        int n = 0;
        node *temp = head;
        prev1 = head;
        temp1 = prev1->next;

        while (n < j - 1)
        {
            temp = temp->next;
            n++;
        }

        prev2 = temp;
        temp2 = prev2->next;
        prev2->next = temp1;
        temp1->next = prev1;
        prev1->next = temp2->next;
        temp2->next = prev2;

        return temp2;
    }
    else if (abs(i - j) == 1 && i != 0)
    {
        int n = 0;
        node *temp = head;
        while (n < i - 1)
        {
            temp = temp->next;
            n++;
        }

        prev1 = temp;
        temp1 = prev1->next;
        n = 0;

        while (n < j - i + 1)
        {
            temp = temp->next;
            n++;
        }

        temp2 = temp;
        prev1->next = temp2;
        temp1->next = temp2->next;
        temp2->next = temp1;

        return head;
    }
    else if (i == 0 && j == 1)
    {
        temp1 = head;
        temp2 = head->next;
        node *temp3 = temp2->next;
        temp2->next = temp1;
        temp1->next = temp3;

        return temp2;
    }
    else
    {
        int n = 0;
        node *temp = head;

        while (n < i - 1)
        {
            temp = temp->next;
            n++;
        }

        prev1 = temp;
        temp1 = prev1->next;
        n = 0;

        while (n < j - i)
        {
            temp = temp->next;
            n++;
        }

        prev2 = temp;
        temp2 = prev2->next;
        prev1->next = temp2;
        temp1->next = temp2->next;
        temp2->next = prev2;
        prev2->next = temp1;

        return head;
    }
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