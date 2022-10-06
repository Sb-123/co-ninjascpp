#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Node
{
public:
    T data;
    Node<T> *next;

    Node(T data)
    {
        this->data = data;
        next = NULL;
    }
};

template <typename T>
class queuekLL
{
    Node<T> *head;
    Node<T> *tail;
    int size;

public:
    queuekLL()
    {
        head = NULL;
        tail = NULL;

        size = 0;
    }

    int getSize()
    {
        return size;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    T front()
    {
        if (isEmpty())
        {
            cout << "queue is empty" << endl;
            return 0;
        }
        return head->data;
    }

    void enqueue(T element)
    {
        Node<T> *newNode = new Node<T>(element);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }

    T dequeue()
    {

        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return 0;
        }
        T ans = head->data;
        Node<T> *temp = head;
        head = head->next;
        delete temp;
        size--;
        return ans;
    }
};

#include <iostream>
using namespace std;
int main()
{
    queuekLL<int> q;

    int t;
    cin >> t;

    while (t--)
    {
        int choice, input;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cin >> input;
            q.enqueue(input);
            break;
        case 2:
            cout << q.dequeue() << "\n";
            break;
        case 3:
            cout << q.front() << "\n";
            break;
        case 4:
            cout << q.getSize() << "\n";
            break;
        default:
            cout << ((q.isEmpty()) ? "true\n" : "false\n");
            break;
        }
    }
}
