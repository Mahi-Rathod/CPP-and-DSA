#include<iostream>
using namespace std;

struct point{
    int x;
    int y;
};

void function(const point &p){
    cout<<p.x<<" -> "<<p.y<<endl;
}

int main(){
    point p = {10,20};
    point *ptr = &p;
    cout<<ptr->x<<endl;
    cout<<ptr->y<<endl;

    ptr->x = 400;
    ptr->y = 300;
    cout<<ptr->x<<endl;
    cout<<ptr->y<<endl;

    function(p); //passing structure as a argument to function


    //Pointer Array
    point arr[5];
    cout<<"Enter values of struct array: "<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i].x>>arr[i].y;
    }

    for(int i=0;i<5;i++){
        cout<<arr[i].x<<" -> "<<arr[i].y<<endl;
    }
    return 0;
}