#include<iostream>
using namespace std;

int main(){
    int N=10, K=5;
    int M;
    cin>>M;
    if(M>0 and M<=K){
        cout<<"Number of Candies Sold : "<<M<<endl;
        cout<<"Number of Candies Available : "<<N-M<<endl;
    }
    else{
        cout<<"Invalid Input"<<endl;
        cout<<"Number of Candies Left : "<<N-M<<endl;
    }
    return 0;
}
