#include<iostream>
using namespace std;

struct complex{
    int real;
    int img;
};

int main(){
    complex num1, num2, num3;
    cin>>num1.real>>num1.img;
    cin>>num2.real>>num2.img;

    num3.real = num1.real + num2.real;
    num3.img  = num1.img  + num2.img;
    cout<<num3.real <<"+"<<num2.img<<"i"<<endl;
    return 0;
}