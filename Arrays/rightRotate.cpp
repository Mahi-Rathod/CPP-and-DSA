#include<iostream>
#include<vector>
using namespace std;

//optimized Solution
void reverseSubArray(vector<int>arr, int i, int j){
    while(i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++, j--;
    }
}

int main(){
    int N, K;
    cin>>N>>K;
    vector<int>arr(N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    reverseSubArray(arr, 0, N-K-1);
    reverseSubArray(arr, N-K-2, N-K-1);
    reverseSubArray(arr, 0, N-1);
    
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}