#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int val){
            data = val;
            next = NULL;
        }
};


class LinkedList {
    private:
        Node *head; //created new linkedlist with node

    public:
        LinkedList(){
            head = nullptr;
        }

        void insertAtEnd(int num) {
            Node *newNode = new Node(num);
            if(head==nullptr){
                head = newNode;
            }
            else{
                Node *temp = head;

                while(temp->next != nullptr){
                    temp = temp->next;
                }

                temp->next = newNode;
            }
        }

        void printList(){
            Node *temp = head;
            while(temp != nullptr){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }

        ~LinkedList() {
        Node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList ll;
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int temp;
        cin>>temp;
        ll.insertAtEnd(temp);
    }

    ll.printList();
    return 0;
}


/*
    1. Worst case insertion at the end and begin theta(1);
    2. worst case deletion from the beginning is theta(1);
    3. Insertion and deletions in the middle are theta(1) if we have reference to the previous node;
    4. Round Robin Implementation using Circular LinkedList;
    5. Merging two sorted linked lists is faster than arrays;
    6. Implementation of simple memory manager where we need to link free blocks.
    7. Easier Implementation of Queue and DeQueue.
*/