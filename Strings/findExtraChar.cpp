#include<bits/stdc++.h>
using namespace std;


//Time Complexity O(nlogn)
char extraChar(string str1,string str2){
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    int n=str1.length();
    for(int i=0;i<n;i++){
        if(str1[i]!=str2[i]){
            return str2[i];
        }
    }
    return str2[n];
}

//Time Complexity O(n)
char extraCharacter(string str1, string str2){
    int count[256]={0};
    for(char x: str2){
        count[x] ++;
    }
    
    for(char x: str1){
        count[x]--;
    }

    for(int i=0;i<256;i++){
        if(count[i]==1){
            return char(i);
        }
    }

    return -1;
}
//Using Bitwise XOR
char findExtraChar(const string &str1, const string &str2){
    int n = str1.length();
    int res=0;

    for(int i=0;i<n;i++){
        res = res ^ str1[i] ^ str2[i];
    }

    res = res ^ str2[n];
    return (char)res;
}

int main(){
    string str1,str2;
    cin>>str1;
    cin>>str2;
    cout<<extraChar(str1, str2)<<endl;
    cout<<extraCharacter(str1,str2)<<endl;
    cout<<findExtraChar(str1,str2)<<endl;
    return 0;    
}