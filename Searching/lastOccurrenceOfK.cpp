/*
    In this Question we are given with array and element.
    what we have to do is that just find the index of last occurrence of element in array.

    example. 
        input:- 
            arr = [5, 10, 10, 15, 20, 20, 20], k = 20
        output:- 
            6

        input:- 
            arr = [5, 10, 10, 15, 20, 20, 20], k = 5
        output :-
            0
        
        input:- 
            arr = [5, 10, 10, 15, 20, 20, 20], k = 10
        output :-
            2
        
        input:- 
            arr = [5, 10, 10, 15, 20, 20, 20], k = 21
        output :-
            -1
        
    expected Time Complexity :- O(log(n))
    expectes Space Complexity:- O(log(n) or 1)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int lastOccurredK(const vector<int> &arr, int k) {
            int left = 0, right = arr.size() - 1;
            while(left <= right){
                int mid = (left + right)/2;

                if(arr[mid] == k){
                    if(mid != arr.size()-1 && arr[mid + 1] == k){
                        left = mid + 1;
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

        int recursiveApproach(const vector<int> &arr, int left, int right,int k){
            if(left > right) return -1;

            int mid = (left + right)/2;

            if(arr[mid] == k){
                if(mid != arr.size()-1 && arr[mid + 1] == k ){
                    return recursiveApproach(arr, mid + 1, right, k);
                }
                else{
                    return mid;
                }
            }
            else if(arr[mid] < k){
                return recursiveApproach(arr, mid + 1, right, k);
            }
            else{
                return recursiveApproach(arr, left, mid - 1, k);
            }
        }
};

int main() {
    int N, num;
    cin >> N >>num;
    vector<int>arr(N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }

    Solution s;
    cout<<"Recursive Solution :- "<<endl;
    cout << s.recursiveApproach(arr, 0, N-1, num) << endl;

    cout<<"Iterative Solution :- "<<endl;
    cout<<s.lastOccurredK(arr, num)<<endl;
    return 0;
}