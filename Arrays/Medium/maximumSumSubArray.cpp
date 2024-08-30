/*
    find the contiguous subarray (containing at least one number) which has the largest sum and returns its sum and prints the subarray.

    ex. 
        INPUT:- 
            arr = [-2,1,-3,4,-1,2,1,-5,4]
        
        OUTPUT:-
            6
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> maxSumSubArray(vector<int>arr, int n){
            long long sum = 0, maxSum = LLONG_MIN;
            int sIndex = -1, eIndex = -1, start = 0;
            for(int i=0; i<n; i++){

                if(sum==0) start = i;

                sum += arr[i];
                if(sum>maxSum){
                    maxSum = sum;
                    sIndex = start;
                    eIndex = i;
                }
                
                if(sum<0){
                    sum = 0;
                }
            }
            return {sIndex, eIndex};
        }
};

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Solution s;
    vector<int>res = s.maxSumSubArray(arr, n);

    for(int i=res[0];i<=res[1];i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    return 0;
}