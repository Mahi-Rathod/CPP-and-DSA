#include<iostream>
using namespace std;
int countDigits(int num){
    int count =0;
    while(num){
        count++;
        num/=10;
    }
    return count;
}
int main(){
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    cout<<countDigits(num);
    return 0;
}