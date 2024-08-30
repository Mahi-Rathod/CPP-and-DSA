#include<iostream>
using namespace std;

void decToBin(int num){
    int bin[256];
    int count =0;
    while(num){
        int rem = num % 2;
        bin[count]=rem;
        count++;
        num/=2;
    }
    for(int i=count-1;i>=0;i--){
        cout<<bin[i]<<"";
    }   
}

int main(){
    int number;
    cout<<"Enter the Number: ";
    cin>>number;
    decToBin(number);
    return 0;
}