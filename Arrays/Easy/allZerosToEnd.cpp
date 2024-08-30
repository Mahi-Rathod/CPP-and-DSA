/* 
    move all zeros to end of the array, by maintaining the order.
    ex. 
        arr=[1 ,0 ,2 ,3 ,0 ,4 ,0 ,1]
        output:
            [1, 2, 3, 4, 1, 0, 0, 0]
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        // void allZerosToEnd(vector<int>&arr, int n){
        //     vector<int>temp(n);
        //     int j=0;
        //     for(int i=0;i<n;i++){
        //         if(arr[i] != 0){
        //             temp[j] = arr[i];
        //             j++;
        //         }
        //     }
        //     for(int i=0;i<n;i++){
        //         if(i<=j+1){
        //             arr[i] = temp[i];
        //         }
        //         else{
        //             arr[i]=0;
        //         }
        //     }
        // }

        vector<int> zerosToEnd(vector<int>&arr, int n){
            int j=-1;
            for(int i=0;i<n;i++){
                if(arr[i]==0){
                    j=i;
                    break;
                }
            }

            if(j==-1) return arr;

            for(int i=j+1; i<n;i++){
                if(arr[i] != 0){
                    swap(arr[i], arr[j]);
                    j++;
                }
            }

            return arr;       
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
    vector<int> ans = s.zerosToEnd(arr, n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    return 0;
}