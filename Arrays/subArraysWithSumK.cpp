#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int findSubArraySum(vector<int>arr, int N, int K){
            map<int, int>prevSum;
            int res = 0, currentSum=0;
            for(int i=0;i<N;i++){
                currentSum +=arr[i];

                if(currentSum==K){
                    res++;
                }

                if(prevSum.find(currentSum-K) != prevSum.end()){
                    res+= prevSum[currentSum-K];
                }

                prevSum[currentSum]++;
            }
            return res;
        }
};

int main(){
    int N,K;
    cin>>N>>K;
    vector<int>arr(N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    Solution s;
    cout<<"SubArrays: "<<s.findSubArraySum(arr,N,K);
    return 0;
}