#include<iostream>
#include<string>
using namespace std;

bool panagram(string str){
    for(char &x : str){
        x = tolower(x);
    }

    cout<<str<<endl;
    int count[26]={0};

    for(int i=0;i<str.length();i++){
        if(isalpha(str[i])){
            count[str[i] - 'a'] ++;
        }
    }

    for(int i=0;i<26;i++){
        cout<<count[i]<<" ";
        if(count[i]==0){
            return false;
        }
    }
    return true;
}

int main(){
    string str;
    cout<<"Enter the String : ";
    cin>>str;
    if(panagram(str)){
        cout<<"Entered String is Panagram."<<endl;
    }
    else{
        cout<<"Entered String is not Panagram."<<endl;
    }
}