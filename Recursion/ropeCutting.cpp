#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int maxPieces(int num, int a, int b, int c) {
            if(num==0) return 0;

            if(num < 0) return -1;

            int res = max(maxPieces(num-a, a, b, c), max(maxPieces(num-b, a, b, c), maxPieces(num-c, a, b, c)));

            if(res == -1) return -1;

            return res+1;
        }
};

int main() {
    int N, a, b, c;
    cin >> N >> a >> b >> c;
    Solution s;
    cout << s.maxPieces(N, a, b, c) << endl;
    return 0;
}   