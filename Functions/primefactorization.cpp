#include<iostream>
using namespace std;
bool isPrime(int number){
    for(int i=2;i<(number/2)+1;i++){
        if(number%i==0){
            return false;
        }
    }
    return true;
}
void primeFactors(int num){
    for(int i=2;i<=num;i++){
        if(isPrime(i)){
            int x =i;
            while(num % x == 0){
                cout<<i<<" ";
                x = x*i;
            }
        }
    }
    return;
}

int main(){
    int num;
    cout<<"Enter The Number: ";
    cin>>num;
    primeFactors(num);
    return 0;
}