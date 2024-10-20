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
        Node *tail;

    public:
        linkedList(){
            head = nullptr;
            tail = nullptr;
        }

        Node *getHead(){
            return head;
        }

        Node *getTail(){
            return tail;
        }

        void setHead(Node *newHead){
            head = newHead;
        }

        void setTail(Node *newTail){
            tail = newTail;
        }
};

class Solution {
    public:
        Node *insertAtFront(linkedList &ll, int val) {
            Node *head = ll.getHead();
            Node *tail = ll.getTail();
            Node *newNode = new Node(val);
            if(head == nullptr){
                head = newNode;
                tail = head;
                tail->next=head;
                ll.setHead(head);
                ll.setTail(head);
            }
            else{
                newNode -> next = head;
                head = newNode;
                tail->next = head;
                ll.setHead(head);
            }

            return head;            
        }

        void printList(linkedList &ll){
            Node *head = ll.getHead();
            Node *temp = head;
            if(temp == nullptr){
                return;
            }

            do{
                cout<<temp->data<<" ";
                temp = temp->next;
            }while(temp != head);
        }


        /*
            let's see Insert at End operation using tail pointer.
            this will take O(1) time.
        */

        Node *insertAtEnd(linkedList &ll, int val){
            Node *head = ll.getHead();
            Node *tail = ll.getTail();

            Node *newNode = new Node(val);
            if(head == nullptr){
                newNode->next = newNode;
                ll.setHead(newNode);
                ll.setTail(newNode);
            }
            else{
                tail->next = newNode;
                newNode->next = head;
                ll.setTail(newNode);
            }

            return head;
       }
};

int main() {
    linkedList ll1;
    Solution s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        s.insertAtFront(ll1, temp);
    }
    
    int ele;
    cin>>ele;
    s.insertAtFront(ll1,ele);
    s.printList(ll1);
    cout<<endl;
    
    cin>>ele;
    s.insertAtEnd(ll1, ele);
    s.printList(ll1);
    return 0;
}