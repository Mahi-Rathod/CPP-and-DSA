#include<bits/stdc++.h>
using namespace std;

class Employee{ //Class Declaration
    public: //Access Modifiers
        string id, name;
        int years;

        Employee(string id, string name, int years){
            this->id = id;
            this->name=name;
            this->years=years;
        }

        void work(){
            cout<<"Employee: "<<this->id<<" is working\n";
        }
};

int main(){
    //Class Instantiation (Direct)
    Employee emp("GFG123", "john", 3);

    cout<<"Employee Id: "<<emp.id<<endl;
    cout<<"Name : "<<emp.name<<endl;
    cout<<"Experience (in years): "<<emp.years<<endl;
    emp.work();
    cout<<"\n";

    //class Instantiation (indirect)
    Employee *empPtr = new Employee("GFG456", "James", 4);

    cout<<"Employee Id: "<<empPtr->id<<endl;
    cout<<"Name : "<<empPtr->name<<endl;
    cout<<"Experience (in years): "<<empPtr->years<<endl;
    empPtr->work();
    cout<<"\n";
    return 0;
}