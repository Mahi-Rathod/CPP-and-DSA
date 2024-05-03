//Given a string S and two integers L and R. Print the characters in the range L to R of the string.
#include<iostream>
using namespace std;

string substring(string S, int L, int R){
    int x = S.length();
    string res;
    while(L<=R and L<x){
        res +=S[L];
        L++;
    }
    return res;
}

int main(){
    string s;
    int L, R;
    cin>>s;
    cin>>L>>R;
    cout<<substring(s,L,R)<<endl;
    return 0;
}