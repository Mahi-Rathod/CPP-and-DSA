#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *prev;
        Node *next;

        Node(int val){
            data = val;
            prev = nullptr;
            next = nullptr;
        }
};

class Solution {
    public:
        Node *insertAtFront(Node *head, int data){
            Node *newNode = new Node(data);
            if(head == NULL){
                head = newNode;
            }
            else{
                newNode->next = head;
                head->prev = newNode;

                head = newNode;
            }
            return head;
        }

        void printList(Node *head){
            Node *temp = head;
            while(temp != NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
        }
};

int main() {
    Node *head = new Node(5);
    Node *first= new Node(10);
    Node *second=new Node(15);

    head->next  = first;
    first->prev = head;
    first->next = second;
    second->prev= first;

    Solution s;
    head = s.insertAtFront(head, 10);
    s.printList(head);
    return 0;
}