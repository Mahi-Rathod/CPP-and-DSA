
//In this Question we are given with array and element what we have to do is that just find the index of first occurrence of element in array

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int recursiveApproach(vector<int> arr,int left , int right, int num) {
            if(left>right) return -1;

            int mid = (left + right)/2;

            if(arr[mid] == num){
                if(arr[mid] == arr[mid - 1]){
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
    cout << s.recursiveApproach(arr, 0, N-1, num) << endl;
    return 0;
}