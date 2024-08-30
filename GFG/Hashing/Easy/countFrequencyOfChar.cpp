#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void leastOccurrence(string str) {
            int hash[26] = {0};
            for(int i=0;i<str.size();i++){
                hash[str[i]-'a']++;
            }

            int minOcc = INT_MAX;
            int maxOcc = INT_MIN;

            char minEle;
            char maxEle;

            for(int i=0;i<str.size();i++){
                if(minOcc > hash[str[i]-'a']){
                    minOcc = hash[str[i]-'a'];
                    minEle = str[i];
                }
                if(maxOcc < hash[str[i]-'a']){
                    maxOcc = hash[str[i]-'a'];
                    maxEle = str[i];
                }
            }
            
            cout<<"min - "<<minEle<<endl;
            cout<<"max - "<<maxEle<<endl;
        }


        //Hashing Approach

        
};

int main() {
    int N;
    
    string str = "aababccdeefg";
    Solution s;
    s.leastOccurrence(str);
    return 0;
}