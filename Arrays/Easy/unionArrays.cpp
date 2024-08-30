/*
    given two arrays find the union of two array, resultant array element should be in ascending order.
    ex. 
        input: 
            arr1[] ={1, 2, 3, 4, 5}
            arr2[] ={2, 3, 4, 4, 5}
        
        output:
            {1, 2, 3, 4, 5}
*/


#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        //using map or hashmap.. TC - O((M+N)log(M+N))
        vector<int> unionArrays(vector<int>arr, vector<int>brr, int n, int m){
            map<int, int>unionMap;

            for(int i=0;i<n;i++){
                unionMap[arr[i]]++;
            }
            for(int i=0;i<m;i++){
                unionMap[brr[i]]++;
            }

            vector<int>unionArray;
            for(auto ele: unionMap){
                unionArray.push_back(ele.first);
            }

            return unionArray;
        }

        //now we will solve it using set... TC - O((M+N)log(M+N))
        
        vector<int> unionArraysUsingSet(vector<int>arr, vector<int>brr, int n, int m){
            set<int>unionSet;

            for(int i=0;i<n;i++){
                unionSet.insert(arr[i]);
            }

            for(int i=0;i<m;i++){
                unionSet.insert(brr[i]);
            }

            vector<int>unionArray;
            for(auto &ele : unionSet){
                unionArray.push_back(ele);
            }
            return unionArray;
        }

        // using two pointer method which reduces time complexity... TC - O(N)

        vector<int> unionArraysTwoPtr(vector<int>arr, vector<int>brr, int n, int m){
            vector<int>unionArray;

            int ptr1=0, ptr2=0;

            while(ptr1<n && ptr2<m){
                if(arr[ptr1] <= brr[ptr2]){
                    if(unionArray.size() == 0 || unionArray.back() != arr[ptr1])
                        unionArray.push_back(arr[ptr1]);
                    ptr1++;
                }
                else{
                    if(unionArray.size() == 0 || unionArray.back() != brr[ptr2])
                        unionArray.push_back(brr[ptr2]);
                    ptr2++;
                }
            }

            while(ptr1<n){
                if(unionArray.empty() || unionArray.back() != arr[ptr1]){
                    unionArray.push_back(arr[ptr1]);
                }    
                ptr1++;
            }

            while(ptr2<m){
                if(unionArray.empty() || unionArray.back() != brr[ptr2]){
                    unionArray.push_back(brr[ptr2]);
                }
                ptr2++;
            }
            return unionArray;
        }
};

int main(){
    int n, m;

    cin>>n>>m;
    vector<int>arr(n),brr(m);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }

    Solution s;

    // vector<int> res = s.unionArrays(arr, brr, n, m);

    // for(int i=0;i<res.size();i++){
    //     cout<<res[i]<<" ";
    // }

    // cout<<"\n";

    // res = s.unionArraysUsingSet(arr, brr, n, m);
    
    // for(int i=0;i<res.size();i++){
    //     cout<<res[i]<<" ";
    // }

    // cout<<"\n";

    vector<int> res = s.unionArraysTwoPtr(arr, brr, n, m);
    
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }

    cout<<"\n";

    return 0;
}