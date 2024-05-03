#include<iostream>
using namespace std;
void printIndex(string str, string pat){
    int found = str.find(pat);
    while(found != string::npos){
        cout<<"pattern Found at: "<<found<<endl;
        found = str.find(pat , found+1);
    }
}
int main(){
    string str;
    cin>>str;
    string pat;
    cin>>pat;
    printIndex(str, pat);
    return 0;
}