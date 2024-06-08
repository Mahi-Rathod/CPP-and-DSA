#include<bits/stdc++.h>
using namespace std;

class RemoveDuplicate{
    public:
        int rmDuplicates(vector<int>&arr, int N){
            map<int, int>pairs;
            for(int i=0;i<N;i++){
                if(pairs.find(arr[i])== pairs.end()){
                    pairs[arr[i]]++;
                }
            }
            
            int i=0;
            for(auto x:pairs){
                arr[i++]=x.first;
            }
            return i;
        }
};

int main(){
    int N;
    cin>>N;
    vector<int>arr(N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    RemoveDuplicate d1;
    int length = d1.rmDuplicates(arr, N);
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    return 0;  
}