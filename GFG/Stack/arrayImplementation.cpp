#include<bits/stdc++.h>
using namespace std;
#define max 1000
class Stack{
    private:
        int top;
        int arr[max];

    public:
        Stack(){
            top=-1;
        }

        int getTop(){
            return top;
        }

        void setTop(){
            top -= 1;
        }

        int peek(){
            if(top==-1){
                return -1;
            }
            else{
                int x = arr[top];
                return x;
            }
        }

        bool push(int ele){
            if(top>=(max-1)){
                cout<<"Stack Overflow"<<endl;
                return false;
            }
            else{
                arr[++top]=ele;
                cout<<ele<<" pushed into stack"<<endl;
                return true;
            }
        }

        int pop(){
            if(top<0){
                return 0;
            }
            else{
                int x = arr[top--];
                return x;
            }
        }

        bool isEmpty(){
            if(top == -1){
                return true;
            }
            else{
                return false;
            }
        }

        bool isFull(){
            if(top==(max-1)){
                return true;
            }
            else{
                return false;
            }
        }
    
};

class Solution{
    public:
        void printStack(Stack &st){
            int top = st.getTop();
            if(top == -1){
                cout<<" stack is empty. "<<endl;
            }
            else{
                while(!st.isEmpty()){
                    cout<<st.peek()<<" ";
                    st.pop();
                }

                cout<<endl;
            }
        }
};

int main(){
    Stack st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        st.push(temp);
    }
    cout<<endl;

    Solution s;
    s.printStack(st);
    return 0;
}