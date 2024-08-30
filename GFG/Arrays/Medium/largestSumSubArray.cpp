/*
    Problem #3 : Largest Sum Subarray
    
        We are given an array of positive and negative integers. We have to find the subarray having maximum sum.
        
        Input
            [-3, 4, -1, -2, 1, 5]
        Output
            7
            (4+(-1)+(-2)+1+5)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int largestSumSubArray(int arr[], int N) {
            int maxSum = INT_MIN, sum=0;

            for(int i=0;i<N;i++){
                sum += arr[i];
                maxSum = max(sum, maxSum);
                if(sum<0){
                    sum = 0;
                }
            }

            return maxSum;
        }
};

int main() {
    int N;
    cin >> N;
    Solution s;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    cout << s.largestSumSubArray(arr, N) << endl;
    return 0;
}