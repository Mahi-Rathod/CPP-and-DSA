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

        Node *deleteTail(Node *head){
            if(head == NULL){
                return NULL;
            }
            else if(head->next == NULL){
                head = NULL;
                return head;
            }
            else{
                Node *temp = head;
                while(temp->next->next != nullptr){
                    temp = temp->next;
                }
                Node *temp2 = temp->next;
                temp->next = nullptr;
                temp2 = nullptr;
                delete(temp2);
                return head;
            }
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
    head = s.insertAtEnd(head, 40);

    cout<<"Before Deletion:- "<<endl;
    s.printList(head);
    head = s.deleteTail(head);
    cout<<"\nAfter Deletion:- "<<endl;
    s.printList(head);
    return 0;
}