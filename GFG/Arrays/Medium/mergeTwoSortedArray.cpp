#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> mergeArray(int arr[], int brr[],int N, int M) {
            vector<int>res(M+N);
            int i=0, j=0, k=0;
            while(i<N && j<M){
                if(arr[i]<brr[j]){
                    res[k] = arr[i];
                    k++, i++;
                }
                else{
                    res[k] = brr[j];
                    k++, j++;
                }
            }

            while(i<N){
                res[k++] = arr[i++];
            }

            while(j<M){
                res[k++] = brr[j++];
            }

            return res;
        }
};

int main() {
    int N, M;
    cin >> N>>M;
    int arr[N], brr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    for(int i=0;i<N;i++){
        cin>>brr[i];
    }

    Solution s;
    vector<int>res = s.mergeArray(arr,brr,N, M);
    for(int i=0;i<(M+N);i++){
        cout<<res[i]<<" ";
    }
    return 0;
}