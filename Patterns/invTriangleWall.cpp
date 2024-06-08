

// * * * * * 
// * * * *
// * * *
// * *
// *

#include<iostream>
using namespace std;
int main(){
    int num; 
    cout<<"Enter the Number: ";
    cin>>num;
    for(int i=num-1;i>=0;i--){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}