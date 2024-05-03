#include<iostream>
using namespace std;
long long int factorial(int Number){
    long long int fact = 1;
    while(Number >0){
        fact *= Number;
        Number --;
    }
    return fact;
}

int main(){
    int Number;
    cout<<"Enter the Number: ";
    cin>>Number;
    cout<<"Factorial of "<<Number<<" is "<<factorial(Number)<<endl;
    return 0;
}