/*
question:
You have been given a linked list of integers. 
Your task is to write a function that inserts 
a node at a given position, 'pos'.

INPUT:
1
3 4 5 2 6 1 9 -1
3 100
*/

#include<bits/stdc++.h>
using namespace std;

class Node{
    public :
      int data;
      Node* next;

      Node(int data){
        this ->data= data;
        this->next= NULL;

      }
};

Node* getNode(Node* head, int index){
    int i;
    while(i<index && head !=NULL){
        head= head->next;
        i++;

    }
    return head;
}
void insertAtHead(Node*& head, int data){
    Node* n= new Node(data);
    n->next= head;
    head=n;
}

void insertAtIndex(Node*& head, int data, int index){
    if(index == 0){
        insertAtHead(head,data);
        return;
    }
    if(index<0){
        return;
    }
    Node* prev= getNode(head, index-1);
    if(prev==NULL){
        return;
    }
    Node* n= new Node(data);
    n->next= prev->next;
    prev->next=n;
}


void print(Node* head){
    Node* temp=head;

    while(temp != NULL){
        cout<<"->"<<temp-> data;
        temp=temp->next;
    }
    cout<<endl;

    while(head !=NULL){
        cout<<head->data<<"->";
        head=head->next;

    }
    cout<<endl;

     while(head !=NULL){
        cout<<head->data<<"->";
        head=head->next;
        
    }
    cout<<endl;
}
 

int main(){
    Node* head= NULL;

    insertAtHead(head, 5);
    insertAtHead(head, 4);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtIndex(head,3,2);
    print(head);
    return 0;
}