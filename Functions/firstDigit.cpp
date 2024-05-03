#include<iostream>
using namespace std;
int firstDigitOfNumber(int num){
    if(num<10){
        return num;
    }
    return firstDigitOfNumber(num/10);
}
int main(){
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    cout<<firstDigitOfNumber(num)<<endl;
    return 0;
}