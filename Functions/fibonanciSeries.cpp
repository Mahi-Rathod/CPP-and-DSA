#include<iostream>
using namespace std;
int NthFibonacci(int N){
    int a=1,b=1,c;
    for(int i=3;i<=N;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main(){
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    cout<<NthFibonacci(num)<<endl;
    return 0;
}