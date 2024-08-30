/*
    Binary Search is a searching algorithm used in a sorted array by repeatedly dividing the search interval in half.
    The idea of binary search is to use the information that the array is sorted and reduce the time complexity to O(Log n). 
*/

/*
Binary Search Algorithm: The basic steps to perform Binary Search are:

    =>Begin with the mid element of the whole array as a search key.
        ->If the value of the search key is equal to the item then return an index of the search key.
        ->Or if the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half.
        ->Otherwise, narrow it to the upper half.
    Repeatedly check from the second point until the value is found or the interval is empty.


        int binarySearch(vector<int>&arr, int num) {
            int left = 0, right = arr.size()-1;

            while(left <= right){
                int mid = (left + right)/2;
                if(arr[mid] == num){
                    return mid;
                }
                else if(arr[mid] < num){
                    left = mid + 1;
                }
                else{
                    right = mid -1;
                }
            }
            return -1;
        }

*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int binarySearch(vector<int>&arr, int num) {
            int left = 0, right = arr.size()-1;

            while(left <= right){
                int mid = (left + right)/2;
                if(arr[mid] == num){
                    return mid;
                }
                else if(arr[mid] < num){
                    left = mid + 1;
                }
                else{
                    right = mid -1;
                }
            }
            return -1;
        }
};

int main() {
    int N, num;
    cin >> N, num;
    vector<int>arr(N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    Solution s;
    cout << s.binarySearch(arr, num) << endl;
    return 0;
}