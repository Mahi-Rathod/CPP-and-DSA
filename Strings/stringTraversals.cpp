#include<iostream>
using namespace std;
int main(){
    string name;
    getline(cin,name);
    //1
    for(int i=0;i<name.length();i++){
        cout<<name[i];
    }
    cout<<"\n";

    //2
    for(char a : name){
        cout<<a;
    }
    cout<<"\n";

    //3
    for(auto i=name.begin(); i!=name.end();i++){
        cout<<*i;
    }
    return 0;
}