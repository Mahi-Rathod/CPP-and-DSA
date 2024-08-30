#include<bits/stdc++.h>
using namespace std;

// Naive Solution TC -> O(N*K) , SC -> O(1)
// void rotateArray(vector<int> &arr, int N, int K){
//     while (K-- and K != N){
//         int temp = arr[0];
//         for (int i = 0; i < N - 1; i++)
//         {
//             arr[i] = arr[i + 1];
//         }
//         arr[N - 1] = temp;
//     }
// }

class Solution{
    public:
        void revSubArray(vector<int>&arr, int i, int j){
            while(i<=j){
                int temp = arr[i];
                arr[i] =  arr[j];
                arr[j] = temp;
                i++, j--;
            }
        }
};


int main(){
    int N,K;
    cin>>N>>K;
    vector<int> arr(N);
    for (int i = 0; i < N; i++){
        cin>>arr[i];
    }
    Solution s;

    s.revSubArray(arr, 0, (K%N)-1);
    s.revSubArray(arr, (K%N), N-1);
    s.revSubArray(arr, 0, N-1);

    for(int i=0; i<N; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}