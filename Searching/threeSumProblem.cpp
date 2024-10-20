#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> threeSum(int arr[], int n, int sum) {
            vector<int> ans(3);


            for(int i=0;i<n-2;i++){
                int reqSum = sum - arr[i];
                int left = i+1, right=n-1;
                while(left<right){
                    if(reqSum == (arr[left] + arr[right])){
                        ans[0] = arr[i];
                        ans[1] = arr[left];
                        ans[2] = arr[right];
                        return ans;
                    }
                    else if(reqSum < (arr[left] + arr[right])){
                        right--;
                    }
                    else{
                        left++;
                    }
                
                }
            }

            return {-1, -1, -1};
        }
};

int main() {
    int N, sum;
    cin >> N >> sum;

    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    Solution s;
    vector<int> ans = s.threeSum(arr, N, sum);

    cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<endl;
    return 0;
}