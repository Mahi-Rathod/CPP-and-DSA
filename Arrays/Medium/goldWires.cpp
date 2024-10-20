#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int minCost(int arr[],int n) {
            if(n==1) return arr[n-1];
            
            int minCosts = INT_MAX;
            int first = 0, second = 0;
            for(int i=0;i<n-1;i++){
                if((arr[i]+arr[i+1])<minCosts){
                    minCosts = arr[i]+arr[i+1];
                    first = i;
                    second = i+1;
                }
            }

            // cout<<arr[first]<<" "<<arr[second]<<endl;

            int ans[n-1];
            int k = 0;
            for(int i=0;i<n;i++){
                if(i==first){
                    ans[k++] = minCosts;
                }
                else if(i == second){
                    continue;
                }
                else{
                    ans[k++] = arr[i];
                }
            }

            return minCosts + minCost(ans, n-1);
        }
};

int main() {
    int N;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++) cin>>arr[i];
    Solution s;
    cout << s.minCost(arr, N) << endl;
    return 0;
}