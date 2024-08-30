#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool isPalindrome(string str, int i = 0) {
            if(i > str.size() / 2) return true;

            return (str[i] == str[str.size() - i -1]) && isPalindrome(str, i+1);
        }
};

int main() {
    string str;
    cin >> str;
    Solution s;
    cout << (s.isPalindrome(str) ? "True" : "False" )<< endl;
    return 0;
}