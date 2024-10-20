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
        Node *insertAtEnd(Node *head, int num) {
            Node *newNode = new Node(num);
            if(head == NULL){
                head = newNode;
            }
            else{
                Node *temp = head;
                while(temp->next != nullptr){
                    temp = temp->next;
                }

                temp->next = newNode;
            }

            return head;
        }

        Node *insertAtPos(Node *head, int data, int pos){
            Node *temp = new Node(data);
            if(pos == 1){
                temp->next = head;
                return temp;
            }

            Node *curr = head;
            for(int i=1;i<pos-1 && curr != nullptr; i++){
                curr = curr->next;
            }

            if(curr == nullptr){
                return head;
            }

            temp->next = curr->next;
            curr->next = temp;

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
    head = s.insertAtEnd(head, 10);
    head = s.insertAtEnd(head, 20);
    head = s.insertAtEnd(head, 30);

    int data, pos;
    cin>>data>>pos;
    head = s.insertAtPos(head, data, pos);
    s.printList(head);
    return 0;
}