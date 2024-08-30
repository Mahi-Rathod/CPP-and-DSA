#include<iostream>
using namespace std;

struct point{
    int x,y;

    point(int a, int b){
        x=a;
        y=b;
    }
    void print(){
        cout<<x<<" "<<y<<endl;
    }
};

int main(){
    point p(50,100);
    p.print();
    return 0;
}