#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void bubbleSortDescending(vector<int>&arr, int n){

            for(int i=0; i<n-1;i++){
                bool swapped = false;
                for(int j=0;j<n-i-1;j++){
                    if(arr[j]<arr[j+1]){
                        swap(arr, j, j+1);
                        swapped = true;
                    }
                }
                if(!swapped){
                    break;
                }
            }
        }

    private:
        void swap(vector<int>&arr, int i, int j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
};



int main(){
    int n;
    cout<<"Enter the Size: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the Array element : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Solution s1;
    s1.bubbleSortDescending(arr, n);
    cout<<"Sorted Array : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}