#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void genSubSet(string str, string curr = "", int index=0) {
            if(index == str.size()){
                cout<<curr<<endl;
                return;
            }

            genSubSet(str, curr+str[index], index+1);
            genSubSet(str, curr, index+1);
        }
};

int main() {
    int N;
    // cin >> N;
    Solution s;
    s.genSubSet("abc");
    return 0;
}