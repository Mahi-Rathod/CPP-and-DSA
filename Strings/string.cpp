#include<iostream>
#include<cstring>
using namespace std;

int main(){
    // this is an c style strings
    char str1[] ="Mahesh"; 
    char str2[7]="Mahesh";
    char str3[7]={'M','A','H','E','S','H','\0'};
    char str4[] ={'M','A','H','E','S','H','\0'};

    cout<<"str1[] = "<<str1<<endl;
    cout<<"str2[7] = "<<str2<<endl;
    cout<<"str3[7] = "<<str3<<endl;
    cout<<"str4[] = "<<str4<<endl;

    //compare two string using c style function
    int res = strcmp(str1, str4);
    if(res == 0){
        cout<<"Same"<<endl;
    }
    else{
        cout<<"not Same"<<endl;
    }

    //copy string to another string using c style function
    char name[7];
    strcpy(name,str1);
    cout<<name<<endl;
    cout<<strlen(str1)<<endl;
    // this are CPP syle strings
    string str5 = "Hi This is Mahesh Rathod";
    cout<<str5<<endl;
    //initialization by raw string

    string str6("An Computer Science Student!");
    cout<<str6<<endl;

    
    return 0;
}