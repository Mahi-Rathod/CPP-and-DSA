#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b=temp;
}

int main(){
    int first, second;
    cout<<"Enter two Numbers: ";
    cin>>first>>second;
    cout<<first<<" "<<second<<endl;
    swap(first,second);
    cout<<first<<" "<<second<<endl;
    return 0;
}