#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int countDistinct(const vector<int>&arr) {
            unordered_set<int>distinctElement;
            for(auto ele : arr){
                distinctElement.insert(ele);
            }

            return distinctElement.size();
        }
};

int main() {
    int N;
    cin >> N;

    vector<int>arr(N);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    Solution s;
    cout << s.countDistinct(arr) << endl;
    return 0;   
}