#include<iostream>
using namespace std;
string decToBin(int num){
    string bin ="";
    while(num){
        int rem = num % 2;
        bin += to_string(rem);
        num /=2;
    }
    int L=0, R=bin.length()-1;
    while(L<(bin.length())/2){
        char temp = bin[L];
        bin[L]=bin[R];
        bin[R]=temp;
        L++;
        R--;
    }
    return bin;
}
int main(){
    int num;
    cout<<"Enter the Number: ";
    cin>>num;
    cout<<"Binary of "<<num<<" is "<<decToBin(num)<<endl;
    return 0;
}