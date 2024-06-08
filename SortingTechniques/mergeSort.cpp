#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void mergeSort(vector<int>&arr, int left, int right){
            if(left>=right){
                return;
            }
            int mid = (left + right)/2;
            mergeSort(arr, left, mid);  //Left Half
            mergeSort(arr, mid+1, right); //Right Half
            merge(arr, left, right, mid);
        }
    private:
        void merge(vector<int>&arr, int low, int high, int mid){
            vector<int>temp;
            int left = low, right = mid+1;
            while(left<=mid && right<=high){
                if(arr[left]<=arr[right]){
                    temp.push_back(arr[left]);
                    left++;
                }
                else{
                    temp.push_back(arr[right]);
                    right++;
                }
            }

            //copy remaining element from left half..
            while(left<=mid){
                temp.push_back(arr[left]);
                left++;
            }
            //copy remaining element from right half
            while(right<=high){
                temp.push_back(arr[right]);
                right++;
            }

            //insert into original array

            for(int i = low; i<=high; i++){
                arr[i] = temp[i-low];
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
    s1.mergeSort(arr, 0, n-1);
    cout<<"Sorted Array : "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}