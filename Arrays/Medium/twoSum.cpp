/*
    find the pair of ele from array whos sum is equal to K..
    ex.
        INPUT :
            arr = {2, 6, 5, 8, 11}, K = 14
        OUTPUT:
            true, [1, 3]
*/
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> twoSumBrute(vector<int>arr, int n, int k){
            vector<int>out(2, -1);
            for(int i=0; i<n; i++){
                for(int j=i+1;j<n;j++){
                    if(arr[i]+arr[j] == k){
                        out[0] = i;
                        out[1] = j;
                    }
                }
            }
            return out;
        }

        //using hashing.. it Takes time complexity off O(nlogn)
        vector<int> twoSumHashing(vector<int>arr, int n, int k){
            map<int, int>twoSumHash;
            for(int i=0;i<n;i++){
                int rem = k - arr[i];
                if(twoSumHash.find(rem) != twoSumHash.end()){
                    return {twoSumHash[rem], i};
                }
                twoSumHash[arr[i]] = i;
            }
            return {-1, -1};
        }

        //using greedy two pointers aproach, 
        vector<int> twoSum(vector<int>arr, int n, int k){
            int left = 0, right = n - 1;
            sort(arr.begin(), arr.end());
            
            while(left<right){
                if(arr[left]+arr[right] == k){
                    return {left, right};
                }
                else if(arr[left]+arr[right] < k){
                    left++;
                }
                else{
                    right--;
                }
            }
            return {-1, -1};
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
    vector<int>res = s.twoSumBrute(arr, n, k);
    if(res[0] > -1 and res[1] > -1){
        cout<<"true"<<", ["<<res[0]<<","<<res[1]<<"]"<<endl;
    }
    else{
        cout<<"false"<<", ["<<res[0]<<","<<res[1]<<"]"<<endl;
    }
    
    vector<int> res1 = s.twoSumHashing(arr, n, k);
    if(res1[0] > -1 and res1[1] > -1){
        cout<<"true"<<", ["<<res1[0]<<","<<res1[1]<<"]"<<endl;
    }
    else{
        cout<<"false"<<", ["<<res[0]<<","<<res[1]<<"]"<<endl;
    }

    res1 = s.twoSum(arr, n, k);
    if(res1[0] > -1 and res1[1] > -1){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

    return 0;
}