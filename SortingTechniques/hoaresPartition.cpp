#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void hoaresPartition(int arr[], int left, int right) {
            int pivot = arr[left];
            int i = left - 1, j = right;
            while(true){
                do{
                    i++;
                } while(arr[i]<pivot);

                do{
                    j--;
                } while(arr[j]>pivot);

                if(i>=j) break;

                swap(arr[i], arr[j]);
            }
        }
};

int main() {
    int N;
    cin >> N;
    int A[N];
    for(int i=0;i<N;i++) cin>>A[i];
    Solution s;
    s.hoaresPartition(A,0,N);

    for(int i=0;i<N;i++){
        cout<<A[i]<<" ";
    }
    return 0;
}