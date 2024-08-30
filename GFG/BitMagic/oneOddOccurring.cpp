#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int oneOddOccurring(vector<int>arr) {
            int num = arr[0];
            for(int i=1;i<arr.size();i++){
                num ^= arr[i];
            }
            return num;
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
    cout << s.oneOddOccurring(arr) << endl;
    return 0;
}