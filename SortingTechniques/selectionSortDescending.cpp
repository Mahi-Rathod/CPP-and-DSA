#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void selectionSortDescending(vector<int>&arr, int n){
            for(int i=0;i<n-1;i++){
                int maxIndex = i;
                for(int j=i+1;j<n;j++){
                    if(arr[j] > arr[maxIndex]){
                        maxIndex = j;
                    }
                }
                swap(arr, i, maxIndex);
            }
        }
    private:
        void swap(vector<int>&arr, int i, int maxIndex){
            int temp = arr[maxIndex];
            arr[maxIndex] = arr[i];
            arr[i] = temp;
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
    s1.selectionSortDescending(arr, n);
    cout<<"Sorted Array : "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}