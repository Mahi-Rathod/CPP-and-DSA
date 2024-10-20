#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

        Node(int val){
            data = val;
            next = nullptr;
        }
};

class Solution {
    public:
        Node *insertAtBegin(Node *head, int num) {
            Node *newNode = new Node(num);
            if(head == NULL){
                head = newNode;
            }
            else{
                newNode->next = head;
                head = newNode;
            }

            return head;
        }

        void printList(Node *head){
            while(head != nullptr){
                cout<<head->data<<" ";
                head = head->next;
            }
        }
};

int main() {
    Node *head = nullptr;

    Solution s;
    head = s.insertAtBegin(head, 10);
    head = s.insertAtBegin(head, 20);
    head = s.insertAtBegin(head, 30);

    s.printList(head);
    return 0;
}