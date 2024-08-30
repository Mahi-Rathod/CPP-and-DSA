/*
    string str = "abcdabehf" queries = [a, g, h, b, c]
    out = [2, 0, 1, 2, 1]
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void smallLetters(string str, string queries){
            //precompute
            int hash[26] ={0};
            for(int i=0;i<str.size();i++){
                hash[str[i]-'a']++;
            }

            //fetch data
            cout<<"small letters character hashing\n";
            for(int i=0;i<queries.size();i++){
                cout<<queries[i]<< " : "<<hash[queries[i]-'a']<<"\n";
            }
            cout<<"\n";
        }

        void capitalLetters(string str, string queries){
            //precompute

            int hash[26]={0};

            for(int i=0;i<str.size();i++){
                hash[str[i]-'A']++;
            }

            //fetch Data
            cout<<"CAPITAL LETTERS CHARACHTER HASHING\n";
            for(int i=0;i<queries.size();i++){
                cout<<queries[i]<<" : "<<hash[queries[i]-'A']<<"\n";
            }
            cout<<"\n";
        }

        void bothCapAndSmall(string str, string queries){
            //precompute
            int hash[256]={0};
            for(int i=0;i<str.size();i++){
               hash[str[i]]++;
            }

            //fetch
            cout<<"Capital and Small Letters character hashing..\n";
            for(int i=0;i<queries.size();i++){
                cout<<queries[i]<<" : "<<hash[queries[i]]<<"\n";
            }
            cout<<"\n";
        }
};

int main(){
    string str, queries;
    
    Solution s1;

    str="abcdabehf";
    queries="aghbc";
    s1.smallLetters(str, queries);

    str="ABCDABHF";
    queries="AGHBCD";
    s1.capitalLetters(str, queries);

    str="ABCDABHFabehf";
    queries="AGHBCDaghf";
    s1.bothCapAndSmall(str, queries);

    return 0;
}