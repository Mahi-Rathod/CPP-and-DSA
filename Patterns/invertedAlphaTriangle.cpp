// ABCDE
// ABCD
// ABC
// AB
// A

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter The Number: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0; j<n-i; j++){
            cout<<char(j+65);
        }
        cout<<"\n";
    }
}