#include<iostream>
using namespace std;

int main(){
    static int var;
    int a , b; // stored in stack
    int *ptr = new int [5]; // it allowcates the block of 5 to ptr in heap
    delete []ptr; 

    cout<<ptr<<endl;
    ptr = nullptr; 
    cout<<ptr<<endl;

    ptr = new int [5]; //we can re allocate memory to the variable
    for(int i=0;i<10;i++){
        ptr[i] = i+1;
    }

    for(int i=0;i<10;i++){
        cout<<ptr[i]<<endl;
    }
    return 0;
}