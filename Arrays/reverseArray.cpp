#include<iostream>
using namespace std;

void reverse(int *arr, int N){
    int i=0, j=N-1;
    while(i<=j){
        int temp = arr[i];
        arr[i]   = arr[j];
        arr[j]   = temp;
        i++, j--;
    }
}

int main(){
    int *arr = new int[10];
    int N;
    cout<<"Enter the Length of Array: ";
    cin>>N;
    cout<<"Enter the Array: ";
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    reverse(arr,N);
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    
    return 0;
}