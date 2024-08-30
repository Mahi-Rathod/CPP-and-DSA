#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,(a%b));
    }
}

int GCD(int a, int b){
    if(a==b){
        return a;
    }
    else if(a>b){
        GCD(a-b,b);
    }
    else{
        GCD(a, b-a);
    }
}

int main(){
    int a,b;
    cout<<"Enter a and b : ";
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}