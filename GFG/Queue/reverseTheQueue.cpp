#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class Solution{
    public:
        //This method uses stack to reverse the queue however we can reverse the queue using function call stack
        void reverseUsingStack(queue<int>&q){
            stack<int>s;
            while(!q.empty()){
                s.push(q.front());
                q.pop();
            }
            while(!s.empty()){
                q.push(s.top());
                s.pop();
            }
        }

        void displayQueue(queue<int>q){
            while(!q.empty()){
                cout<<q.front()<<" ";
                q.pop();
            }
            cout<<endl;
        }

        void reverseQueue(queue<int>&q){
            if(q.empty()){
                return;
            }

            int x = q.front();
            q.pop();
            reverseQueue(q);

            q.push(x);
        }
};



int main(){
    queue<int>q;
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(10);

    Solution s;
    s.displayQueue(q);
    s.reverseUsingStack(q);
    s.displayQueue(q);
    s.reverseQueue(q);
    s.displayQueue(q);
    return 0;
}