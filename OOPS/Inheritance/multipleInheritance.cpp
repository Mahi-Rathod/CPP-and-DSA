#include<bits/stdc++.h>
using namespace std;

class A{
    public:
        A(){
            cout<<"Inside the class A..."<<endl;
        }
};

class B{
    public:
        B(){
            cout<<"Inside the class B..."<<endl;
        }
};

class C : public B, public A{
    public:
        C(){
            cout<<"Inside the class C..."<<endl;
        }
};

int main(){
    C c_class_obj;
    return 0;
}