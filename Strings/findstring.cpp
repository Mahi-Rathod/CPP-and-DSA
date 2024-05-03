//find string x in string s if it is present then return first index of occurence of x in s
#include<iostream>
using namespace std;
int strstr(string s, string x){
    int k = x.length();
    for(int i=0;i<s.length();i++){
        string substring=s.substr(i,k);
        if(substring == x){
            return i;
        }
    }
    return -1;
}
int main(){
    string s,x;
    cout<<"Enter String s: ";
    cin>>s;
    cout<<"Enter String x: ";
    cin>>x;
    cout<<strstr(s,x);
    return 0;
}