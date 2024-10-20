#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void lomutoPartition(vector<int>&arr, int pivot) {
            int h = arr.size()-1, l = 0;
            if(arr[h] != pivot){
                int pivotIndex;
                for(int i=l;i<h;i++){
                    if(arr[i]==pivot){
                        pivotIndex = i;
                        break;
                    } 
                }
                swap(arr[pivotIndex], arr[h]);
            }

            int i = l - 1;
            for(int j=0;j<h;j++){
                if(arr[j]<=pivot){
                    swap(arr[++i], arr[j]);
                }
            }

            swap(arr[++i], arr[h]);
        }
};   

int main() {
    int N, pivot;
    cin >> N >> pivot;
    vector<int>arr(N);
    for(int i=0;i<N;i++) cin>> arr[i];
    Solution s;
    s.lomutoPartition(arr, pivot);
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
