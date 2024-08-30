#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int sumOfNNaturalNumbers(int num) {
            if(num == 0) return 0;
            return num + sumOfNNaturalNumbers(num - 1);
        }
};

int main() {
    int N;
    cin >> N;
    Solution s;
    cout << s.sumOfNNaturalNumbers(N) << endl;
    return 0;
}   