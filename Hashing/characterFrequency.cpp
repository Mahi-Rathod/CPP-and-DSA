/* Count the frequency of characters from the provided string.  */
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

class Solution{
    public:
        void frequency(string str){
            //precompute
            int hash[256] = {0};
            for(int i=0; i<str.size();i++){
                hash[str[i]]++;
            }

            //fetch
            unordered_set<char>printed;
            for(int i=0;i<str.size();i++){
                if(printed.find(str[i])==printed.end()){
                    cout<<str[i]<<" : "<<hash[str[i]]<<endl;
                    printed.insert(str[i]);
                }
            }
            cout<<"\n";
        }
};

int main(){
    string str;
    Solution s;

    cout<<"Enter the string:- ";
    cin>>str;
    s.frequency(str);

    return 0;
}