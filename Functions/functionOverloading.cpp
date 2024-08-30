#include<iostream>
using namespace std;
int maximum(int a, int b){
    return (a>b)?a:b;
}

int maximum(int a, int b, int c){
    return maximum(maximum(a,b),c);
}

void print(int a){
    cout<<a<<endl;
}

void print(char a){
    cout<<a<<endl;
}

void print(string a){
    cout<<a<<endl;
}

int main(){
    int a, b, c;
    cout<<"Enter Three Numbers: ";
    cin>>a>>b>>c;
    cout<<"maximum from "<<a<<" and "<<b<<" is "<<maximum(a,b)<<endl;
    cout<<"maximum from "<<a<<", "<<b <<" and "<<c<<" is "<<maximum(a,b,c)<<endl;

    print(a);
    print('a');
    print("gfg");
    return 0;
}