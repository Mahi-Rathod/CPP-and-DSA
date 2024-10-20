#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void searchPatternDist(const string &str, const string &pattern){
            int n = str.length();
            int m = pattern.length();
            for(int i=0;i<n;){
                int j=0;
                for(j=0;j<m;j++){
                    if(pattern[j] != str[i+j])break;
                }

                if(j==m) cout<<i<<" ";
                
                if(j==0) i++;
                else i+=j;
            }
        }

        void searchPattern(string &str, const string &pattern) {
            for(int i=0;i<=str.length()-pattern.length();i++){
                string subPattern = str.substr(i, pattern.length());
                if(pattern == subPattern){
                    cout<<i<<" ";
                }
            }
        }
};

bool checkDistinct(string &pattern){
    bool freq[256]={false};
    
    for(int i=0;i<pattern.length();i++){
        if(!freq[pattern[i]]){
            freq[pattern[i]] = true;
        }
        else{
            return false;
        }
    }

    return true;
}

int main() {
    string str, pattern;
    // cin>>pattern;
    cin>>str>>pattern;
    Solution s;
    if(checkDistinct(pattern)){
        s.searchPatternDist(str, pattern);
    }
    else{
        s.searchPattern(str, pattern);
    }
    return 0;
}