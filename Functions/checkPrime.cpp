#include<iostream>
using namespace std;
bool isPrime(int num){
    if(num==1 || num==0){
        return false;
    }
    for(int i=2;i<(num/2)+1;i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int number;
    cout<<"Enter The Number: ";
    cin>>number;
    string res = isPrime(number)?"Yes":"No";
    cout<<res<<endl;
    return 0;
}