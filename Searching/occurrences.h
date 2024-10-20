#ifndef occurrences_H
#define occurrences_H
#include<bits/stdc++.h>
using namespace std;

class Occurrences{
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
};


#endif