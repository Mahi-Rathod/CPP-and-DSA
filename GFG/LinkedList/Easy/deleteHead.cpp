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

        Node *deleteHead(Node *head){
            if(head == NULL){
                return NULL;
            }
            else{
                Node *temp = head->next;
                head -> next = NULL;
                delete(head);
                return temp;
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

    s.printList(head);
    head = s.deleteHead(head);
    cout<<"After Deletion"<<endl;
    s.printList(head);
    return 0;
}