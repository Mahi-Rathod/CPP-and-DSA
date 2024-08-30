/*
    Input: array[] = {10,5,10,15,10,5};
    Output: 10 15
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        vector<int> lowAndHighFreEle(vector<int>arr, int n){
            unordered_map<int, int>freq;

            for(int i=0;i<n;i++){
                freq[arr[i]]++;
            }

            int max=0, min=n;

            vector<int>out(2,arr[0]);

            for(auto entry: freq){
                if(entry.second > max){
                    max = entry.second;
                    out[0] = entry.first;
                }
                if(entry.second < min){
                    min = entry.second;
                    out[1] = entry.first;
                }
            }

            return out;
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
    vector<int>res(2);
    res = s.lowAndHighFreEle(arr, n);

    cout<<res[0]<<" "<<res[1]<<endl;
    return 0;
}