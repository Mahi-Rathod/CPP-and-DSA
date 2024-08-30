#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
        int data;
        Node* next;

        //constructor with Initialization list
        Node(int x){
            data = x;
            next = nullptr;
        }

        //as we are using dynamic space and cpp does not delete it by itself so we have to delete it.
        ~Node(){};
};

void printLinkedList(Node* head){
    while(head!=nullptr){
        cout<<head->data<<" ";
        head = head->next;
    }
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    printLinkedList(head);


    delete head;
    return 0;
}