#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int findInSorted(int arr[], int N, int k) {
            int left = 0, right = N-1;

            while(left<=right){
                int mid = (left+right)/2;
                if(arr[mid] == k) return mid;
                else if(arr[left] <= arr[mid]){
                    if(k<=arr[mid] && k>=arr[left]){
                        right = mid - 1;
                    }
                    else{
                        left = mid + 1;
                    }
                }
                else{
                    if(k >= arr[mid] && k<= arr[right]){
                        left = mid + 1;
                    }
                    else{
                        right = mid - 1;
                    }
                }
            }

            return -1;
        }
};

int main() {
    int N, K;
    cin >> N >>K;

    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    Solution s;
    cout << s.findInSorted(arr, N, K) << endl;
    return 0;
}