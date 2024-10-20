#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *prev;
        Node *next;

        Node(int val){
            data = val;
            prev = NULL;
            next = NULL;
        }
};

void traverseLinkedList(Node *head){
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main(){
    Node *head = new Node(10);
    Node *sec  = new Node(20);
    Node *third= new Node(30);

    head->next = sec;
    sec ->prev = head;
    sec ->next = third;
    third->prev= sec;
    
    traverseLinkedList(head);
    return 0;
}


