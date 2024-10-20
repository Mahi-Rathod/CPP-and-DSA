#include<iostream>
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


class Queue{
    private:
        Node *front;
        Node *rear;
        int size;
    
    public:
        Queue(){
            front = nullptr;
            rear  = nullptr;
            size = 0;
        }

        void enqueue(int data){
            Node *newNode = new Node(data);
            if(front == nullptr){
                front = newNode;
                rear  = front;
            }
            else{
                rear->next = newNode;
                rear  = newNode;
            }
            size++;
        }

        int dequeue(){
            if(front != nullptr){
                Node *temp = front;
                int x = temp->data;
                if(front == rear){
                    front = nullptr;
                    rear  = front;
                }
                else{
                    front = front->next;
                }
                size --;
                delete(temp);
                return x;
            }

            return -1;
        }

        void displayQueue(){
            Node *temp = front;
            while(temp != rear->next){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
        }

        bool isEmpty(){
            return front == nullptr;
        }

        int getFront(){
            if(!isEmpty()){
                return front->data;
            }

            return -1;
        }

        int getRear(){
            if(!isEmpty()){
                return rear->data;
            }
            return -1;
        }

        int getSize(){
            return size;
        }

};

int main(){
    Queue myQ;
    myQ.enqueue(10);
    myQ.enqueue(20);
    myQ.enqueue(30);
    myQ.enqueue(40);
    myQ.enqueue(50);

    cout<<"Size of Queue : "<<myQ.getSize()<<endl;
    cout<<"Front element of Queue : "<<myQ.getFront()<<endl;
    cout<<"Rear element of Queue : "<<myQ.getRear()<<endl;
    cout<<myQ.dequeue()<<endl;
    cout<<myQ.dequeue()<<endl;
    cout<<myQ.dequeue()<<endl;
    cout<<myQ.dequeue()<<endl;
    cout<<myQ.dequeue()<<endl;
    cout<<myQ.dequeue()<<endl;
    cout<<"Size of Queue : "<<myQ.getSize()<<endl;
    return 0;
}