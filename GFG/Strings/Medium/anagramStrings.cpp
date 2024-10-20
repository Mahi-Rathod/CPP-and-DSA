#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        const int CHAR = 256;
        bool isAnagram(string &str1, string &str2) {
            if(str1.length() != str2.length()){
                return false;
            }
            int freq[CHAR];
            for(int i=0;i<str1.length();i++){
                freq[str1[i]]++;
                freq[str2[i]]--;
            }

            for(int i=0;i<CHAR;i++){
                if(freq[i] != 0){
                    return false;
                }
            }

            return true;
        }
};

int main() {
    string str1, str2;
    cin >> str1>>str2;
    Solution s;
    cout << s.isAnagram(str1, str2) << endl;
    return 0;
}