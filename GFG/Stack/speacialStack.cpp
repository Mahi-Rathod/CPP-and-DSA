//Special stack i reffer to the stack in which all the operations like push(), pop(), peek(), top() and getMin()
//will be in O(1) time.



/*
    Idea:
        a variable minEle stores the current minimun element in the stack.
        now the interesting part is, how to handle the case when the minimum element is removed.
        for this we push "2*X - minEle" into the stack instead of x so that the previous minimun element can be retrieved using the current minEle and its value stored in the stack.

    Aproach:
        A) Push(x) : insert x at the top of the stack
            1. if stack is empty, insert x into the stack and make minEle equal to x.
            2. if stack is not empty, compare x with minEle.
                a) if x is greater than or equal to minEle, insert x.
                b) if x is less than minEle, insert (2*x - minEle) into the stack and make minEle equal to x.

                ex. let previous minEle be 3. Now we want to insert 2. we update minEle as 2 and insert 2*2-3 == 1 into the stack

        B) pop(): Removes and element from the top of the stack
            if removed element is y then
            1. if y is greater than or equal to minEle, the minimum ele in the stack is still minEle.
            2. if y is less than minEle, the minimum element now becomes (2*minEle - y), so update (minEle = 2*minEle - y). 
                this is where we retrive the previous minimum from the current minimun and its value in the stack.

                ex. let element to be removed be 1 and minEle be 2. we remove 1 and update minEle as (2*2 - 1 = 3)
*/
#include <bits/stdc++.h>
using namespace std;

class MyStack {
    stack<int>s;
    int minEle;

    public:
        void getMin(){
            if(!s.empty()){
                cout<<"MinEle : "<<minEle<<endl;
            }
        }

        void peek(){
            if(!s.empty()){
                int t = s.top();

                (t<minEle)?cout<<minEle : cout<<t;
            }
        }


        void pop(){
            if(!s.empty()){
                int t = s.top();
                s.pop();

                if(t<minEle){
                    minEle = 2 * minEle - t;
                }
                else{
                    cout<<t<<endl;
                }
            }
        }

        void push(int x){
            if(s.empty()){
                minEle = x;
                s.push(x);

                return;
            }
            else if(x<minEle){
                s.push(2*x - minEle);
                minEle = x;
            }
            else{
                s.push(x);
            }
        }
};

int main() {
    MyStack s;

    s.push(3);
    s.push(5);
    s.getMin();
    s.push(2);
    s.push(1);
    s.getMin();
    s.pop();
    s.getMin();
    s.pop();
    s.getMin();
    s.pop();
    s.peek();
    return 0;
}