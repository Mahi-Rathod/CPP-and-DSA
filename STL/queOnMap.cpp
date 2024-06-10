/* 
    let us arr =[1, 2, 3, 1, 3, 2, 12] and queries = [1, 2, 3, 4, 12]
    find count of queries in array arr.

    out = [2, 2, 2, 0, 1]
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void countQueries(vector<int>arr, vector<int>queries, int n, int m){
            map<int, int>count;

            for(int i=0;i<n;i++){
                count[arr[i]]++;
            }

            //fetch
            for(int i=0;i<m;i++){
                cout<<queries[i]<<" : "<<count[queries[i]]<<endl;
            }
            cout<<"\n";
        }
};


int main(){
    int n, m;
    cin>>n>>m;
    vector<int>arr(n);
    vector<int>queries(m);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>queries[i];
    }
    
    Solution s;
    s.countQueries(arr, queries, n, m);

    return 0;
}