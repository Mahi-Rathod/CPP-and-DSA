#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int hoaresPartition(int arr[], int left, int right){
            int i = left - 1, j = right + 1;
            int pivot = arr[left];

            while (true){
                do{
                    i++;
                }while(arr[i]<pivot);

                do{
                    j--;
                }while(arr[j]>pivot);

                if(i>=j){
                    return j;
                }

                swap(arr[i], arr[j]);
            }
            
        }

        void QuickSort(int arr[], int left, int right) {
            if(left<right){
                int partitionPoint = hoaresPartition(arr, left, right);
                QuickSort(arr, left, partitionPoint);
                QuickSort(arr, partitionPoint+1, right);
            }
        }
};

int main() {
    int N;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++) cin>>arr[i];
    Solution s;
    s.QuickSort(arr, 0, N-1);

    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}