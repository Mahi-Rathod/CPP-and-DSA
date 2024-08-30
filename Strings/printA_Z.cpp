#include<iostream>
using namespace std;
void printAlpha(char c1, char c2){
    int i = c1, n= c2;
    while(i<=n){
        cout<<char(i)<<" ";
        i++;
    }
    cout<<"\n";
}
int main(){
    char c1,c2;
    cin>>c1>>c2;
    printAlpha(c1,c2);
    return 0;
}