#include<iostream>
using namespace std;

int main(){
    string name;
    getline(cin, name);
    int pointer = name.length();
    string res  = "";
    for(int i = pointer-1; i>=0;i--){
        res +=name[i];
    }

    if(name == res){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"No a Palindrome"<<endl;
    }
    cout<<res<<endl;
    int j=pointer-1;
    for(int i=0;i<pointer/2;i++){
        char temp = name[i];
        name[i]   = name[j];
        name[j]   = temp;
        j--;
    }
    cout<<name<<endl;
}