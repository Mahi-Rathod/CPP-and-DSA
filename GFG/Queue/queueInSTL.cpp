#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int>q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout<<"front of the queue: "<<q.front()<<endl;
    cout<<"rear of the queue: "<<q.back()<<endl;

    while(!q.empty()){
        cout<<q.front()<<" "<<q.back()<<endl;
        q.pop();
    }

    q.pop();
    cout<<"front of the queue: "<<q.front()<<endl;
    return 0;
}
