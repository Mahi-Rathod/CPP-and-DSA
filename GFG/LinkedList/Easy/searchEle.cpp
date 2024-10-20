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

        int searchNode(Node *head, int x){
            int index = -1;

            while(head != nullptr){
                index++;
                if(head->data == x){
                    return index;
                }
                head = head->next;
            }

            return -1;
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
    cout<<endl;
    int index = s.searchNode(head, 10);
    if(index>-1){
        cout<<"Element index is :- "<<index<<endl;
    }
    else{
        cout<<"Element is not found in LinkedList."<<endl;
    }
    return 0;
}