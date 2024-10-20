#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void reverseWords(string &str) {
            int start = 0;
            int n = str.length();
            for(int end = 0;end<n;end++){
                if(str[end] == ' '){
                    reverse(str, start, end-1);
                    // reverse(str+start, str+end); //using iterator
                    start = end + 1;
                }
            }

            reverse(str,0, n-1);
        }

    private:
        void reverse(string &str, int start, int end){
            while(start<end){
                swap(str[start],str[end]);
                start++;
                end--;
            }
        }
};

int main() {
    string str;
    getline(cin, str);
    Solution s;
    s.reverseWords(str);
    cout<<str<<endl;
    return 0;
}   