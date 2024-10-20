#include<iostream>
#include<queue>
using namespace std;

class stack{
    private:
        queue<int>q1;
        queue<int>q2;

    public:
        int top(){
            return q1.front();
        }

        int size(){
            return q1.size();
        }

        int pop(){
            if(!q1.empty()){
                int x = q1.front();
                q1.pop();
                return x;
            }
            return -1;
        }

        void push(int x){
            q2.push(x);
            while(!q1.empty()){
                q2.push(q1.front());
                q1.pop();
            }

            queue<int>temp = q1;
            q1 = q2;
            q2 = temp;
        }
};


int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout<<"stack size: "<<st.size()<<endl;
    cout<<"stack top: "<<st.top()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;

    return 0;
}