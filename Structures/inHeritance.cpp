#include<iostream>
using namespace std;

struct point{
    int x;
};

struct Derived:point{

};

int main(){
    Derived d;
    d.x = 20;
    cout<<d.x<<endl;
    return 0;
}