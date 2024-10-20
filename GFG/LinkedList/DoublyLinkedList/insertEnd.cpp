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
            }
            else{
                Node *temp = head;
                while(temp->next != nullptr){
                    temp = temp->next;
                }

                temp->next = newNode;
                newNode->prev = temp;
            }
        }

        Node *getHead(){
            return head;
        }

};

class solution{
    public:
        void printList(linkedList ll){
            Node *temp = ll.getHead();
            while(temp != NULL){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
        }
};


int main() {
    linkedList ll1, ll2;

    int N, M;
    cin>>N>>M;

    for(int i=0;i<N;i++){
        int temp;
        cin>>temp;
        ll1.insertAtEnd(temp);
    }

    for(int i=0;i<M;i++){
        int temp;
        cin>>temp;
        ll2.insertAtEnd(temp);
    }

    solution s;
    s.printList(ll1);
    cout << endl;
    s.printList(ll2);
    return 0;
}