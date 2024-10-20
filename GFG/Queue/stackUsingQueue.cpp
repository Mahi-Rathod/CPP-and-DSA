#include<iostream>
#include<queue>
using namespace std;

class Solution{
    public:
        void reverse(queue<int>&q){
            if(q.empty()){
                return;
            }

            int x = q.front();
            q.pop();
            reverse(q);
            q.push(x);
        }
}; 

class stack{
    private:
        queue<int>q;
        Solution sol;
    public:
        int top(){
            if(!q.empty()){
                return q.front();
            }

            return -1;
        }

        int size(){
            return q.size();
        }

        void push(int x){
            sol.reverse(q);
            q.push(x);
            sol.reverse(q);
        }

        void displayStack(){
            while(!q.empty()){
                cout<<q.front()<<" ";
                q.pop();
            }
            cout<<endl;
        }

        int getTop(){
            if(!q.empty()){
                return q.front();
            }
            return -1;
        }
        

        int getRear(){
            if(!q.empty()){
                return q.back();
            }
            return -1;
        }

        int pop(){
            if(!q.empty()){
                int x = q.front();
                q.pop();
                return x;
            }
            return -1;
        }
};


int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.getTop()<<endl;
    cout<<st.getRear()<<endl;
    cout<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    st.displayStack();

    return 0;    
}