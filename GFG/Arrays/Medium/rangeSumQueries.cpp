/*
    Problem #1 : Range Sum Queries using Prefix Sum

    Description : We are given an Array of n integers, We are given q queries having indices l and r . We have to find out sum between the given range of indices.

    Input
        [4, 5, 3, 2, 5]
        3
        0 3
        2 4
        1 3
    Output
        14 (4+5+3+2)
        10 (3+2+5)
        10 (5+3+2)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> rangeSumQuries(vector<int>&arr,int N, vector<int>&queries) {
            vector<int>res(queries.size());
            vector<int>prefix = prefixSum(arr,N);

            int index =0;

            for(int i=0;i<queries.size();i+=2){
                if(queries[i]==0) res[index] = prefix[queries[i+1]];
                else res[index] = prefix[queries[i+1]] - prefix[queries[i]-1];
                index ++;
            }
            return res;
        }


        vector<int> prefixSum(vector<int>&numbers,int N) {
            vector<int>res(N);
            int sum = 0;
            for(int i=0;i<N;i++){
                sum += numbers[i];
                res[i] = sum;
            }
            return res;
        }
};

int main() {
    int N;
    cin >> N;
    vector<int>arr(N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int M;
    cin>>M;
    vector<int>queries(M*2);
    for(int i=0;i<M*2;i++){
        cin>>queries[i];
    }
    Solution s;
    vector<int>res = s.rangeSumQuries(arr,N, queries);
    
    for(int i=0;i<M;i++){
        cout<<res[i]<<" ";
    }
    
    return 0;
}