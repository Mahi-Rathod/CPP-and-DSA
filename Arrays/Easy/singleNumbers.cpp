/*
    find numbers who's frequencies are one...
    ex.
        INPUT:-
            arr = {4, 1, 2, 1, 2}
        
        OUTPUT:-
            4
*/
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int singleNumbers(vector<int>arr, int n){
            map<int, int>freq;

            //Precomputation 
            for(int i=0;i<n;i++){
                freq[arr[i]]++;
            }

            //Fetching
            int missingNumber;
            for(auto pair : freq){
                if(pair.second == 1){
                    missingNumber = pair.first;
                    break;
                }
            }
            return missingNumber;
        }

        int singleNumbersXOR(vector<int>arr, int n){
            int xorPtr = 0;;

            for(int i=0;i<n;i++){
                xorPtr = xorPtr^arr[i];
            }

            return xorPtr;
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
    cout<<s.singleNumbers(arr, n)<<endl;

    cout<<s.singleNumbersXOR(arr,n)<<endl;
    
    return 0;
}