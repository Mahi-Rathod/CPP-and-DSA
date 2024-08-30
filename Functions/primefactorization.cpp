#include<bits/stdc++.h>
using namespace std;
bool isPrime(int number){
    if(number == 1) return false;
    if(number == 2 || number == 3) return true;

    if(number % 2 == 0 || number % 3 == 0) return false;

    for(int i=5;i<sqrt(number)+1;i+=6){
        if(number%i==0 || number % (i+2) == 0){
            return false;
        }
    }
    return true;
}
void primeFactors(int num){
    for(int i=2;i*i<=num;i++){
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