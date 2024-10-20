#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        const int CHAR = 256;
        int leftMostRepeating(string &str) {
            int fIndex [256]={0};
            for(char ch:str){
                fIndex[ch]++;
            }

            for(int chInd=0;chInd<str.length();chInd++){
                if(fIndex[str[chInd]]>1){
                    return chInd;
                }
            }

            return -1;
        }
        //above solution traversing string twice which is extra overhead lets optimise it to traverse only once.
        int leftMostRepeated(string &str){
            int fIndex[CHAR];
            fill(fIndex, fIndex+CHAR, -1);
            int res = INT_MAX;
            for(int i=0;i<str.length();i++){
                int fI = fIndex[str[i]];
                if(fI == -1){
                    fIndex[str[i]] = i;
                }
                else{
                    res = min(res, fI);
                }
            }
            return (res==INT_MAX)?-1:res;
        }

        //using boolean Array
        int leftMostRepeatedChar(string &str){
            bool visited[CHAR]={false};
            int res = INT_MAX;

            for(int i=str.length()-1;i>=0;i--){
                if(visited[str[i]]){
                    res = i;
                }
                else{
                    visited[str[i]] = true;
                }
            }

            return (res==INT_MAX)?-1:res;
        }
};

int main() {
    string str;
    cin>>str;
    Solution s;
    cout << s.leftMostRepeating(str) << endl;
    cout << s.leftMostRepeated(str)  << endl;
    cout << s.leftMostRepeatedChar(str)  << endl;
    return 0;
}