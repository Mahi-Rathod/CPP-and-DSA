#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void printNTo1(int num) {
            if(num==0) return;

            cout<<num<<" ";
            printNTo1(num-1);
        }
};

int main() {
    int N;
    cin >> N;
    Solution s;
    s.printNTo1(N);
    return 0;
}