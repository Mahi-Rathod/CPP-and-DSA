
//In this Question we are given with array and element what we have to do is that just find the index of first occurrence of element in array

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int indexOfFirstK(const vector<int>&arr, int k){
            int left = 0, right = arr.size() - 1;
            while (left<=right){
                int mid = (left+right)/2;
                if(arr[mid] == k){
                    if(mid != 0 and arr[mid - 1] == k){
                        right = mid - 1;
                    }
                    else{
                        return mid;
                    }
                }
                else if(arr[mid] < k){
                    left = mid + 1;
                }
                else{
                    right = mid - 1;
                }
            }
            
            return -1;
        }

        int recursiveApproach(const vector<int>&arr,int left , int right, int num) {
            if(left>right) return -1;

            int mid = (left + right)/2;

            if(arr[mid] == num){
                if(mid != 0 and arr[mid] == arr[mid - 1]){
                    return recursiveApproach(arr, left, mid - 1, num);
                }
                else{
                    return mid;
                }
            }
            else if(arr[mid] < num){
                return recursiveApproach(arr, mid + 1, right, num);
            }
            else{
                return recursiveApproach(arr, left, mid - 1, num);
            }
        }
};

int main() {
    int N, num;
    cin >> N >> num;
    vector<int>arr(N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    Solution s;
    cout<<"Recursive Solution :- "<<endl;
    cout << s.recursiveApproach(arr, 0, N-1, num) << endl;

    cout<<"Iterative Solution :- "<<endl;
    cout<<s.indexOfFirstK(arr, num)<<endl;
    return 0;
}