#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int findPeak(int arr[], int n) {
            int left = 0, right = n-1;

            while(left <= right){
                int mid = (left + right)/2;

                if((mid == 0 || (arr[mid -1] < arr[mid])) && (mid == n -1 || (arr[mid + 1]<=arr[mid]))){
                    return mid;
                }
                else if(mid > 0 && arr[mid - 1] >= arr[mid]){
                    right = mid - 1;
                }
                else{
                    left = mid + 1;
                }
            }
        }
};

int main() {
    int N;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++) cin>>arr[i];
    Solution s;
    cout << s.findPeak(arr, N) << endl;
    return 0;
}