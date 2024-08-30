#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void insertionSort(vector<int>&arr, int n){
            for(int i=1; i<n;i++){
                int key = arr[i];
                int j = i - 1;
                while(j>=0 && arr[j] > key){
                    arr[j+1] = arr[j];
                    j--;
                }
                arr[j+1] = key;
            }
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
    s1.insertionSort(arr, n);
    cout<<"Sorted Array : "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}