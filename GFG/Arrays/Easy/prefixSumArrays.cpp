/*
    Prefix Sum Array
    Given an array arr[] of size N, find the prefix sum of the array. A prefix sum array is another array prefixSum[] of the same size, such that the value of prefixSum[i] is arr[0] + arr[1] + arr[2] . . . arr[i].

    Input: arr[] = {10, 20, 10, 5, 15}
    Output: prefixSum[] = {10, 30, 40, 45, 60}

    Explanation: 
        While traversing the array, update the element by adding it with its previous element.
        prefixSum[0] = 10, 
        prefixSum[1] = prefixSum[0] + arr[1] = 30, 
        prefixSum[2] = prefixSum[1] + arr[2] = 40 and so on.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> prefixSumArrays(vector<int>&numbers,int N) {
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
    Solution s;
    vector<int>res = s.prefixSumArrays(arr,N);

    cout<<endl;
    for(int i=0;i<N;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}