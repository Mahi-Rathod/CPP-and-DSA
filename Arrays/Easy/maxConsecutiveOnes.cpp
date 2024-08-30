/*
    find the count of maximum consecutive ones from the array..

    ex. 
        INPUT: 
            arr[]={1, 1, 0, 1, 1, 1}
        
        OUTPUT:
            3
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int maxConsecutiveOnes(vector<int>arr, int n){
            int maxOnes = 0, temp = 0;

            for(int i=0;i<n;i++){
                if(arr[i]==1){
                    temp++;
                    if(maxOnes < temp){
                        maxOnes = temp;
                    }
                }
                else{
                    temp = 0;
                }
            }

            return maxOnes;
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
    int res = s.maxConsecutiveOnes(arr, n);
    cout<<res<<endl;

    return 0;
}
