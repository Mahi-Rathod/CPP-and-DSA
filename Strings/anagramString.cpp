#include<iostream>
using namespace std;

bool isAnagram(const string &str1, const string &str2){
    if(str1.length() != str2.length()){
        return false;
    }
    int countStr1[26]={0};
    int countStr2[26]={0};
    for(int i=0;i<str1.length();i++){
        countStr1[str1[i]-'a']++;
        countStr2[str2[i]-'a']++;
    }

    for(int i=0;i<26;i++){
        if(countStr1[i] != countStr2[i]){
            return false;
        }
    }
    return true;
}

int main(){
    string str1, str2;
    cout<<"Enter String 1: ";
    cin>>str1;
    cout<<"Enter String 2: ";
    cin>>str2;
    if(isAnagram(str1,str2)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}