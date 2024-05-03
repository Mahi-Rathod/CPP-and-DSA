#include<iostream>
using namespace std;
int add(int &a, int &b){
    return a+b;
}

int main(){
    int a, b;
    const int &x =3; //R Value Reference
    cout<<"Enter two Numbers: ";
    cin>>a>>b;
    cout<<add(a,b);
    
    return 0;
}