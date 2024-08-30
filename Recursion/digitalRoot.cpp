#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int digitalRoot(int num) {
            if(num == 0){
                return num;
            }

            if(num < 10) return num;

            int sum = (num % 10) + digitalRoot(num/10);

            return digitalRoot(sum);
        }
};

int main() {
    int N;
    cin >> N;
    Solution s;
    cout << s.digitalRoot(N) << endl;
    return 0;
}