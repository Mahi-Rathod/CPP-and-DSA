#include<bits/stdc++.h>
using namespace std;

class Test{
    private:
        static int x;
    
    public:
        static void setX(int x){
            Test::x=x;
        }

        static int getX(){
            return x;
        }
};

int Test::x=1;

int main(){
    cout<<"initialy static x = "<<Test::getX()<<endl;
    Test t1;
    t1.setX(5);
    cout<<"after static x = "<<t1.getX()<<endl;
    return 0;
}


/* we can not access static keyword without object, static data members are the variable with class
 scope, that is all objects of same class share same value for static data members, change in value 
 of static data members for any of the objects tends to change in value of static data members for all the instances(objects) */