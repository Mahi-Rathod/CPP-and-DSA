#include<iostream>
#include<vector>
using namespace std;

int main(){
    int N;
    cin>>N;
    vector<int>arr(N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    vector<int>temp(N);
    int j = 0;
    for(int i=0;i<N-1;i++){
        if(arr[i]!=arr[i+1]){
            temp[j++] = arr[i];
        }
    }

    temp[j++] = arr[N-1];
    for(int i=0;i<j;i++){
        arr[i] = temp[i];
    }

    cout<<j<<endl;
    for(int i=0;i<j;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}