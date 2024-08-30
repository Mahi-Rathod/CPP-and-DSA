#include<iostream>
using namespace std;

int bin_Decimal(long long int Bin){
    int dec = 0,multipyer=1;
    while(Bin){
        int rem = Bin % 10;
        dec +=(rem*multipyer);
        multipyer*=2;
        Bin/=10;
    }
    return dec;
}

int main(){
    long long int bin;
    cout<<"Enter the Binary Number: ";
    cin>>bin;
    cout<<bin_Decimal(bin);
    return 0;
}