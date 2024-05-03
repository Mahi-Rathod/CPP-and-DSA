#include<iostream>
using namespace std;
union point{
    int x;
    int y;
};

int main(){
    point p;
    p.x = 10;
    cout<<p.x<<" "<<p.y<<endl;
    p.y = 20;
    cout<<p.x<<" "<<p.y<<endl;
    return 0;
}