#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        const int CHAR = 256;
        //Given Approach is Efficient Approach but uses two traversal of string,
        //and in worst case Time complexity will O(n+n);
        int nonRepeating(const string &str) {
            int freq[CHAR];
            for(auto ch:str){
                freq[ch]++;
            }

            for(int i=0;i<str.length();i++){
                if(freq[str[i]]==1){
                    return i;
                }
            }

            return -1;
        }

        //Efficient Solution with one traversal
        int nonRepeatingChar(const string &str){
            int freq[CHAR];
            fill(freq, freq+CHAR, -1);
            for(int ch=0;ch<str.length();ch++){
                if(freq[str[ch]]==-1){
                    freq[str[ch]] = ch;
                }
                else{
                    freq[str[ch]] = -2;
                }
            }

            int res = INT_MAX;
            for(int i=0;i<CHAR;i++){
                if(freq[str[i]]>0){
                    res = min(res, freq[str[i]]);
                }
            }

            return (res==INT_MAX)?-1:res;
        }
};

int main() {
    string str;
    cin >> str;
    Solution s;
    int index = s.nonRepeating(str);
    if(index<0){
        cout<<-1<<endl;
    }
    else{
        cout<<str[index]<<endl;
    }
    cout<< s.nonRepeatingChar(str)<<endl;
    return 0;
}