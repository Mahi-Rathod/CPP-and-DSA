#include<iostream>
#include <algorithm>
using namespace std;
int distinct(int arr[], int n){
    int count=0;
    bool isDistinct = true;
    for(int i=0;i<n;i++){
        isDistinct = true;
        for(int j=i-1;j>=0;j--){
            if(arr[i] == arr[j]){
                isDistinct = false;
                break;
            }
        }
        if(isDistinct==true){
            count++;
        }
    }
    return count;
}
int countDistinctNum(int arr[],int n){
    sort(arr,arr+n);
    int count =1;
    for(int i=1;i<n;i++){
        if(arr[i] != arr[i-1]){
            count++;
        }
    }
    return count;
}
int main(){
    int n;
    cout<<"Enter The Number: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<distinct(arr,n)<<endl;
    cout<<"Distinct Numbers in Array: "<<countDistinctNum(arr,n)<<endl;
    return 0;
}