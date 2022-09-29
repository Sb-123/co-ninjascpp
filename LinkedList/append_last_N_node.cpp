#include <iostream>
#include <bits/stdc++.h>
using namespace std;

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

int length(Node *head)
{
	Node *temp = head;
	int cnt = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		cnt++;
	}
	return cnt;
}

Node *appendLastNToFirst(Node *head, int k)
{
	Node *newhead;
	Node *newtail;
	Node *temp = head;
	int l = length(head);

	if (l < k || k == 0)
		return head;

	// int k=k%l;
	int cnt = 1;
	while (temp->next != NULL)
	{
		if (cnt == l - k)
		{
			newtail = temp;
			newhead = temp->next;
		}
		cnt++;
		temp = temp->next;
	}
	newtail->next = NULL;
	temp->next = head;
	return newhead;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int n;
		cin >> n;
		head = appendLastNToFirst(head, n);
		print(head);
	}
	return 0;
}