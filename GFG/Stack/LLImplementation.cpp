#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *link;

        Node(int val){
            data = val;
            link = nullptr;
        }
};


class Stack{
    private:
        Node *top;

    public:
        Stack(){
            top = nullptr;
        }

        void push(int data){
            Node *temp = new Node(data);

            if(!temp){
                cout<<"\nStack Overflow."<<endl;
                return;
            }

            temp->link = top;
            top = temp;
        }

        void pop(){
            Node *temp;
            if(isEmpty()){
                cout<<"\n Stack Underflow.\n"<<endl;
            }
            else{
                temp = top;
                top = top->link;

                delete temp;
            }
        }

        bool isEmpty(){
            return top == nullptr;
        }

        int peek(){
            if(!isEmpty()){
                int x = top->data;
                return x;
            }
            else{
                return -1;
            }
        }

        void display(){
            if(!isEmpty()){
                Node *temp = top;
                while(temp != nullptr){
                    cout<<temp->data<<" ";
                    temp = temp->link;
                }
            }
            else{
                cout<<"\nStack is Empty."<<endl;
            }
        }

};

int main() {
    Stack st;
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        int temp;
        cin>>temp;
        st.push(temp);
    }

    cout<<endl;
    st.display();
    st.pop();
    cout<<endl;
    st.display();
    cout<<endl;
    cout<<st.peek()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.display();
    st.pop();
    cout<<st.peek()<<endl;
    return 0;
}