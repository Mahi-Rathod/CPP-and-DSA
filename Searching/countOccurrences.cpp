/*
    You are given the array which is sorted and number.
    you have to find total occurrences of numbers in other words total count 
    of numbers in array.

    ex:-
        input:-
            arr = [5, 10, 10, 15, 20, 20, 20], k= 20
        output:-
            3

        input:-
            arr = [5, 10, 10, 15, 20, 20, 20], k= 10
        output:-
            2
        
        input:-
            arr = [5, 10, 10, 15, 20, 20, 20], k= 5
        output:-
            1
        
        input:-
            arr = [5, 10, 10, 15, 20, 20, 20], k= 25
        output:-
            -1
        

    Note:-  
        i have used firstOccurrence and lastOccurrences directly in this
        if you donot know how this are working you can check out 
            1. indexOfFirstOccurrence and
            2. lastOccurrenceOfK 
        this two programs
*/


#include <bits/stdc++.h>
#include "occurrences.h"
using namespace std;

class Solution {
    private:
        Occurrences occ;

    public:
        int countOccurrences(const vector<int> &arr, int k) {
            int firstOccurrence = occ.indexOfFirstK(arr, k);
            if(firstOccurrence == -1){
                return 0;
            }

            int lastOccurrence = occ.lastOccurredK(arr, k);

            return (lastOccurrence - firstOccurrence + 1);
        }
};

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> arr(N);
    
    for(int i=0;i<N;i++) cin>>arr[i];

    Solution s;
    cout << s.countOccurrences(arr, K) << endl;
    return 0;
}