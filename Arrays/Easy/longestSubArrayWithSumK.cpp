/*
    Given an array and a sum k, we need to print the length of the longest subarray that sums to k.
    ex. 
        INPUT:- 
            N = 5, K = 10
            arr = {2, 3, 5, 1, 9}

        OUTPUT:-
            3
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        //bruteForce Aproach takes O(n) time complexity that can be reduced
        int bruteForce(vector<int>arr, int n, int k){
            int mxLen = 0;
            for(int i=0;i<n;i++){
                int len = 0, sum = 0;
                for(int j=i;j<n;j++){
                    sum += arr[j];
                    len ++;
                    if(sum == k){
                        mxLen = max(mxLen, len);
                    }
                    else if(sum > k){
                        break;
                    }
                }
            }
            return mxLen;
        }

        //Hashing Approach it will work for both negative and positive numbers.. TC - O(nLog(n))
        int lengthOfLongestSubArrayHashing(vector<int>arr, int n, int k){
            map<long long, int>preSumMap;
            long long sum =0;
            int mxLength = 0;
            for(int i=0;i<n;i++){
                sum += arr[i];
                if(sum == k){
                    mxLength = max(mxLength, i+1);
                }
                
                long long rem = sum - k;
                if(preSumMap.find(rem) != preSumMap.end()){
                    int len = i- preSumMap[rem];
                    mxLength = max(mxLength, len);
                }

                if(preSumMap.find(sum) == preSumMap.end()){
                    preSumMap[sum] = i;
                }
            }

            return mxLength;
        }

        //using Two Pointers Method.... TC - O(2N)  SC - O(1)
        int lengthOfLongestSubArrayWithSumK(vector<int>arr, int n, int k){
            int right =0, left = 0, mxLength = 0;
            long long sum = arr[0];

            while(right<n){
                while(left<=right && sum > k){
                    sum -= arr[left];
                    left ++;
                }
                if(sum == k){
                    mxLength = max(mxLength, right - left + 1);
                }
                right ++;
                if(right<n){
                    sum += arr[right];
                }
            }
            return mxLength;
        }
};


int main(){
    int n, k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Solution s;
    // cout<<s.lengthOfLongestSubArrayWithSumK(arr, n, k);
    cout<<s.bruteForce(arr, n, k)<<endl;
    cout<<s.lengthOfLongestSubArrayHashing(arr, n, k)<<endl;
    cout<<s.lengthOfLongestSubArrayWithSumK(arr, n, k)<<endl;

    return 0;
}