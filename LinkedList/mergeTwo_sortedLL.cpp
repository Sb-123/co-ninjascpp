/*

Code: Merge Two Sorted LL




You have been given two sorted(in ascending order) singly linked lists of integers.
Write a function to merge them in such a way that 
the resulting singly linked list is also sorted(in ascending order) 
and return the new head to the list.
Note :
Try solving this in O(1) auxiliary space.

No need to print the list, it has already been taken care.



Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.

The first line of each test case or query contains the elements of the first sorted singly linked list separated by a single space. 

The second line of the input contains the elements of the second sorted singly linked list separated by a single space. 
Remember/Consider :
While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element
Output :
For each test case/query, print the resulting sorted singly linked list, separated by a single space.

Output for every test case will be printed in a seperate line.
Constraints :
1 <= t = 10^2
0 <= N <= 10 ^ 4
0 <= M <= 10 ^ 4
Where N and M denote the sizes of the singly linked lists. 

Time Limit: 1sec
Sample Input 1 :
1
2 5 8 12 -1
3 6 9 -1
Sample Output 1 :
2 3 5 6 8 9 12 
Sample Input 2 :
2
2 5 8 12 -1
3 6 9 -1
10 40 60 60 80 -1
10 20 30 40 50 60 90 100 -1
Sample Output 2 :
2 3 5 6 8 9 12 
10 10 20 30 40 40 50 60 60 60 80 90 100

*/


#include <iostream>

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
		Node *newNode = new Node(data);
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

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    //Write your code here
    Node*p1=head1;
    Node* p2= head2;
    Node* dummyNode = new Node(-1);
    Node* p3=dummyNode;

    while(p1 != NULL && p2 != NULL){
        if(p1->data <p2->data){
            p3->next= p1;
            p1= p1->next;
        }else{
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }

    while(p1 != NULL){
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2 != NULL){
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }

    return dummyNode->next;
}


Node * mergeTwoSortedLinkedLists_Recursive(Node *head1, Node *head2)
{
 
    
    Node*h1=head1;
    Node* h2= head2;
    
    if(h1== NULL)
        return h2;
    
    if(h2== NULL)
        return h1;
    
    Node* result;
    if(h1->data < h2->data){
        result=h1;
        result->next=mergeTwoSortedLinkedLists_Recursive(h1->next,h2);
    }else{
        result=h2;
        result->next=mergeTwoSortedLinkedLists_Recursive(h1,h2->next);
    }
    
    return result;
    
    
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head1 = takeinput();
		Node *head2 = takeinput();
		Node *head3 = mergeTwoSortedLinkedLists(head1, head2);
        Node* head4 = mergeTwoSortedLinkedLists_Recursive(head1,head2);
		print(head3);
        print(head4);
	}
	return 0;
}