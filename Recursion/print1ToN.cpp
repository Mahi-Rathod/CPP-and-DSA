#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void print1ToN(int num) {
            if(num == 0) return;

            print1ToN(num-1);
            cout<<num<<" ";
        }
};

int main() {
    int N;
    cin >> N;
    Solution s;
    s.print1ToN(N);
    return 0;
}