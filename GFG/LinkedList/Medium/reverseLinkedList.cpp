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

class linkedList{
    private:
        Node *head;
    
    public:
        linkedList(){
            head = nullptr;
        }
        
        void insertAtEnd(int val){
            Node *newNode = new Node(val);
            if(head == nullptr){
                head = newNode;
            }
            else{
                Node *temp = head;
                while(temp->next != nullptr){
                    temp = temp->next;
                }

                temp -> next = newNode;
            }
        }

        Node *getHead(){
            return head; 
        }

        void setHead(Node *newHead){
            head = newHead;
        }

};

class Solution {
    public:
        void reverseLinkedList(linkedList &ll) {
            Node *head = ll.getHead();

            Node *curr = head;
            Node *prev = nullptr, *Next = nullptr;

            while(curr != nullptr){
                Next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = Next;
            }
            ll.setHead(prev);
        }

        void printList(linkedList ll){
            Node *head = ll.getHead();
            Node *temp = head;
            while(temp != NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;           
        }
};

int main() {
    linkedList ll;

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        ll.insertAtEnd(temp);
    }
    Solution s;
    s.printList(ll);
    s.reverseLinkedList(ll);
    cout<<endl;
    s.printList(ll);
    return 0;
}