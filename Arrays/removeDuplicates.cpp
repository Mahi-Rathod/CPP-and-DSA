#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int removeDuplicates(vector<int>&arr, int n){
            sort(arr.begin(), arr.end());
            int k=0;
            for(int i=1;i<n;i++){
                if(arr[k] != arr[i]){
                    k++;
                    arr[k]=arr[i];
                }
            }
            return k+1; 
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
    int size = s.removeDuplicates(arr, n);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

