#include<iostream>
using namespace std;

struct point{
    int x;          // in Memory value from structure are stored in way they declared
    int y;
};

struct students{
    int rollNo;
    string name;
    string collegeName;
};

int main(){
    //Writing struct keyword here is an optional thing in cpp whether it is compulsory to write in c
    struct point p ={.y = 20, .x = 40};
    struct students s;
    p.x = 10;
    p.y = 20;
    cout<<p.x<<endl;
    cout<<p.y<<endl;

    s={101, "Mahesh Rathod","MGM's College of Engineering Nanded"};

    cout<<"Name: "<<s.name<<",\nRoll No: "<<s.rollNo<<",\nCollege : "<<s.collegeName<<endl;;
    
    return 0;
}