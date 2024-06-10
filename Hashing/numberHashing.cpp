//given a array of number and array of queries, find out the total number of queries in array.
/*
ex.
    arr = [1, 2, 1, 3, 2],   queries = [1, 3, 4, 2, 10]
    out = [2, 0, 1, 2, 0]
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //precompute
    int hash[13] ={0};
    for(int i=0;i<n;i++){
        hash[arr[i]] += 1;
    }

    int q;
    cin>>q;

    while(q--){
        int number;
        cin>>number;

        //fetching
        cout<<hash[number]<<" ";
    }
    return 0;
}