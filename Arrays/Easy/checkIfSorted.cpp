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

    bool flag = false;
    for(int i=1;i<N;i++){
        if(arr[i]<arr[i-1]){
            flag = true;
        }
    }
    if(flag){
        cout<<"Array is Not Sorted."<<endl;
    }
    else{
        cout<<"Array is Sorted."<<endl;
    }
    return 0;
}