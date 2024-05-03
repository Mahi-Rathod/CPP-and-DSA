#include<iostream>
using namespace std;
int binToDec(string bin){
    int dec = 0;
    int mul =1;
    
    for(int i=bin.length()-1;i>=0;i--){
        dec += ((int)(bin[i] - '0') * mul);
        mul *=2;
    }
    return dec;   
}
int main(){
    string binString;
    cin>>binString;
    cout<<binToDec(binString)<<endl;
    return 0;
}