//some useful inbuilt methods of string in cpp
#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"Enter the fullname: ";
    getline(cin, name);           //cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<name<<endl;     
    string str1,str2;
    cout<<"Enter the String1: ";
    cin>>str1;  
    cout<<"Enter the String2: ";
    cin>>str2;  
    //1. string1.compare(string2) it returns the integer value 
        // returns negative integer if string1 is smaller than string 2
        // return 0 if both are same
        // returns positive number i.e. difference between length of strings

    if(str1.compare(str2)<0){
        cout<<str1<<" is smaller than "<<str2<<endl;
    }
    else if(str1.compare(str2)>0){
        cout<<str1<<" is greater than "<<str2<<endl;
        cout<<str1.compare(str2)<<endl;
    }
    else{
        cout<<str1<<" and "<<str2<<" are equal."<<endl;
    }
    
    //2. str.find(string_name) :- returns first occurence of string_name in str
    cout<<str1.find(str2)<<endl; // Problem with this is that it only searches smaller string in bigger one
                                //  so while using this expression we have to take care of this fact.


    //3. str.find_first_of(string_name) :- searches for first charachter of string_name in str and return index
    cout<<str1.find_first_of(str2)<<endl;

    //4. str.find_last_of(string_name)  :- searches for last charachter of string_name in str and return index
    cout<<str1.find_last_of(str2)<<endl;

    //5. str.rfind(string)   :- searches for the last occurrence of substring

    cout<<str1.rfind(str2)<<endl;

    //6. str.insert(pos_to_begin, string_to_insert) 
    string ins;
    cout<<"Enter string to insert: ";
    cin>>ins;
    str1.insert(0,ins);
    cout<<str1<<endl;

    //7. str.clear() :- this clears all charachter from string, this makes string empty

    str1.clear();
    cout<<str1<<endl;

    //8. str.empty() :- checks for empty string and return boolean value

    cout<<str1.empty()<<endl;

    //9. str.substr(pos1,length):-  gives sustring between positions


    //getline(cin, str, stopfunction) :- it reads string with spaces and 
                                        //stop the reading inputs at newline by defalut
    
    return 0;
}