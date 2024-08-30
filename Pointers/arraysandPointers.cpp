#include<iostream>
using namespace std;

int main(){
    int arr[]={10,20,30,40};
    int *ptr = arr;

    cout<<"size of arr: "<<sizeof(arr)<<endl;
    cout<<"size of ptr: "<<sizeof(ptr)<<endl;

    // we can access array element by ptr

    cout<<*(arr+0)<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr+2)<<endl;
    cout<<*(arr+3)<<endl;

    cout<<"\n\n";
    //we also can use ptr to access
    cout<<ptr[2]<<endl;
    *ptr++; //here memory address of of ptr will increase by 1 pos or 4 bytes as it is int datatype pointers variable
    int (*p2)[4] = &arr;
    cout<<*ptr<<endl;
    cout<<**p2<<endl;
    return 0;
}