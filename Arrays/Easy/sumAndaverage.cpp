#include<iostream>
using namespace std;
int sumofArray(int arr[], int n){
    int sum = 0;
    for(int x=0;x<n;x++){
        sum+=arr[x];
    }
    return sum;
}
int main(){
    int n;
    cout<<"enter the Size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"enter the Array Element: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Sum of Array: "<<sumofArray(arr,n)<<endl;
    double average = sumofArray(arr,n)/ n;
    cout<<"Average of Array : "<<average<<endl;
    return 0;
}