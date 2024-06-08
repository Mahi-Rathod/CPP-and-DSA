// Problem Statement: Given an array of N integers, the task is to replace each element of the array by its rank in the array.

// Example 1:
// Input: 20 15 26 2 98 6
// Output: 4 3 5 1 6 2
// Explanation: When sorted,the array is 2,6,15,20,26,98. So the rank of 2 is 1,rank of 6 is 2,rank of 15 is 3 and so on

#include<bits/stdc++.h>
using namespace std;

class ReplaceByRank{
    public:
        void replace(vector<int>&arr, int N){
            map<int, int>rank;
            vector<int>brr(N);
            for(int i=0;i<N;i++){
                brr[i] = arr[i];
            }
            sort(brr.begin(), brr.end());
            int temp=1;
            for(int i=0;i<N;i++){
                if(rank[brr[i]]==0){
                    rank[brr[i]]= temp;
                    temp++;
                }
            }
            
            for(auto x:rank){
                cout<<x.first<<" "<<x.second<<endl;
            }

            for(int i=0;i<N;i++){
                arr[i]=rank[arr[i]];
            }
            cout<<"\n";
        }
};

int main(){
    int N;
    cin>>N;
    vector<int>arr(N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    ReplaceByRank rf;
    rf.replace(arr, N);
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
}