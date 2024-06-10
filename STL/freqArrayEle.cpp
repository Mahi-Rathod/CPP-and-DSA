/*
    arr[]= {10, 5, 10, 15, 10, 5}
    output :
        10 - 3
        5  - 2
        15 - 1
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void countFrequency(vector<int>arr, int n){
            unordered_map<int, int>freq;

            //precompute step
            for(int i=0; i<n; i++){
                freq[arr[i]]++;
            }

            //fetching step
            for(const auto entry: freq){
                cout<<entry.first<<" : "<<entry.second<<endl;
            }
        }
};

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Solution s;
    s.countFrequency(arr, n);

    return 0;
}