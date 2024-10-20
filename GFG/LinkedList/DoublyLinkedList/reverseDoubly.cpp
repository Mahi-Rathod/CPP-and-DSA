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
        Node *reverse(Node *head) {
            if(head == nullptr || head->next == nullptr) return head;
            Node *prev = nullptr;
            Node *curr = head;

            while(curr != nullptr){
                prev = curr->prev;
                curr->prev = curr->next;
                curr->next = prev;
                curr = curr->prev;
            }
            return prev->prev;
        }

        void printList(Node *head){
            Node *temp = head;
            while(temp!=nullptr){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
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
    s.printList(head);
    head = s.reverse(head);
    s.printList(head);
    return 0;
}