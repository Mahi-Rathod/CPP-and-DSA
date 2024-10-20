#include<iostream>
using namespace std;

class Queue{
    public:
        int *arr;
        int front, cap, size;

        Queue(int capacity){
            arr = new int[capacity];
            cap = capacity;
            front = 0;
            size  = 0;
        }
        

        void enqueue(int x){
            if(isFull()){
                cout<<"Overflow Occurred."<<endl;
                return;
            }
            int rear = getRear();
            rear = (rear+1)%cap;
            arr[rear] = x;
            size++;
        }

        int dequeue(){
            if(isEmpty()){
                cout<<"Underflow Occurred."<<endl;
                return -1;
            }
            else{
                int x = arr[front];
                front = (front+1)%cap;
                size--;

                return x;
            }
        }

        bool isEmpty(){
            return (size == 0);
        }

        bool isFull(){
            return (size == cap);
        }

        int getFront(){
            if(isEmpty()){
                return -1;
            }
            else{
                return front;
            }
        }

        int getRear(){
            if(isEmpty()){
                return -1;
            }
            else{
                return (front+size-1)%cap;
            }
        }
};

void printQueue(Queue &q){
    if(q.isEmpty()){
        cout<<"Queue is Empty."<<endl;
        return;
    }

    int front = q.getFront();
    int cap = q.cap;
    int *qArray = q.arr;
    
    for(int i=0;i<q.size;i++){
        cout<<qArray[(i+front)%cap]<<" ";
    }
    cout<<endl;
}

int main(){
    int cap = 5;
    Queue q =  Queue(cap);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    printQueue(q);
    q.enqueue(60);
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    printQueue(q);
    return 0;
}