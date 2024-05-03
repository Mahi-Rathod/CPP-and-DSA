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
    int firstSmall = INT_MAX, secondSmall=INT_MAX;
    for(int i=0;i<N;i++){
        if(arr[i]<firstSmall){
            secondSmall=firstSmall;
            firstSmall = arr[i];
        }
        else if(arr[i]<secondSmall and arr[i] != firstSmall){
            secondSmall = arr[i];
        }
    }
    cout<<secondSmall<<endl;
    return 0;
}