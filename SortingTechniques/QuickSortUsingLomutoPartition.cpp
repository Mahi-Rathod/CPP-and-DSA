#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int lomutoPartition(vector<int>&arr, int left, int right){
            int pivot = arr[right];
            
            int i = left - 1;
            for(int j=left;j<right;j++){
                if(arr[j]<pivot){
                    swap(arr[++i], arr[j]);
                }
            }
            
            swap(arr[++i], arr[right]);
            return i;
        }
        void quickSort(vector<int>&arr, int left, int right) {
            if(left<right){
                int partionPoint = lomutoPartition(arr, left, right);
                quickSort(arr, left, partionPoint-1);
                quickSort(arr, partionPoint+1, right);
            }
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
    s.quickSort(arr, 0, N - 1);

    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}