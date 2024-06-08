/* 
    Selection Sort is Comparison based sorting technique which takes O(n2) time Complexity.
*/
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void selectionSort(vector<int>&arr, int n){
            for(int i=0;i<n-1;i++){
                int minIndex = i;
                for(int j=i+1;j<n;j++){
                    if(arr[j]<arr[minIndex]){
                        minIndex = j;
                    }
                }
                swap(arr, i, minIndex);
            }
        }

        void swap(vector<int>&arr, int i, int minIndex){
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
};


int main(){
    int n;
    cout<<"Enter the size: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the Array Element : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Solution s1;
    s1.selectionSort(arr, n);
    cout<<"Sorted Array : "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}