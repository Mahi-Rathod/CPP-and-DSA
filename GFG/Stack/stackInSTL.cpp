#include<iostream>
#include<stack>

using namespace std;

void showStack(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"\n";
}

int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    showStack(s);

    cout<<"\n s.size() : "<<s.size()<<endl;
    cout<<" s.top() : "<<s.top()<<endl;

    cout<<"\n s.pop() : "<<endl;
    s.pop();
    showStack(s);

    return 0;
}