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

        void insertAtEnd(int num){
            Node *newNode = new Node(num);
            if(head == nullptr){
                head = newNode;
                head->next = head;
            }
            else{
                Node *temp = head;
                while(temp->next != head){
                    temp = temp->next;
                }

                temp->next = newNode;
                newNode->next = head;
            }
        }
        //above insert function takes O(n) Time
        //However we can insert in O(1) time with maintaining tail pointer or with exchange data method.
        //in exchange data method we do not insert the node at the end we change the head pointer.

        void insertEnd(int num){
            Node *newNode = new Node(num);
            if(head == nullptr){
                head = newNode;
                head->next = head;
            }
            else{
                newNode->next = head->next;
                head->next = newNode;
                int temp = head->data;
                head->data = newNode->data;
                newNode->data = temp;
                head = newNode;
            }
        }

        Node *getHead(){
            return head;
        }

};

class solution{
    public:
        void printList(linkedList ll){
            Node *head = ll.getHead();
            Node *temp = head;
            while(true){
                cout<<temp->data<<" ";
                temp = temp->next;
                if(temp == head){
                    break;
                }
            }
        }
};


int main() {
    linkedList ll1;

    int N;
    cin>>N;

    for(int i=0;i<N;i++){
        int temp;
        cin>>temp;
        ll1.insertAtEnd(temp);
    }

    solution s;
    s.printList(ll1);

    int temp;
    cout<<"\ndata to insert: "<<endl;
    cin>>temp;
    ll1.insertEnd(temp);
    s.printList(ll1);
    return 0;
}