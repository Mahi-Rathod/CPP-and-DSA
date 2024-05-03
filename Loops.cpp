#include<iostream>
using namespace std;   // #include<stdio.h>

int main(){
    int i=0;
    while(i<0){
        i=i/2;
        if(i==50){
            cout<<"before continue"<<endl;
            continue;
            cout<<"i am 50"<<endl;
        }
        cout<<i<<" "; //printf("%d",i);
    }
    cout<<"end of loop"<<endl; //printf("end of loop");
    i=0;
    do{
        cout<<i<<" ";
        i++;
    }while(i<0);

    for(int j=0;j<10;j++){
        printf("%d",j);
    }
    return 0;
}