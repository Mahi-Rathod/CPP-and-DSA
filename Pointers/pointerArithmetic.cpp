#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,40};
    int *ptr  = arr;
    cout<<*ptr<<endl;
    cout<<"Increament by one"<<endl;
    *ptr ++;
    cout<<*ptr<<endl;
    cout<<"Increament by two"<<endl;
    *ptr +=2; 
    //this means *ptr = *ptr + 2 which access and increament the value at ptr by 2
    //remember one thing *ptr = *ptr + 1 and *ptr = ptr + 1 are different expressions
    cout<<*ptr<<endl;
    cout<<"Decreament by one"<<endl;
    *ptr --;
    cout<<*ptr<<endl;

    //substraction of one pointer from another pointer of same type can give us total block between them
    int brr[] = {1,2,3,4,5,6};
    int *p1 = arr;
    int *p2 = p1 + 4;
    cout<<(p2 - p1)<<endl;
    return 0;
}