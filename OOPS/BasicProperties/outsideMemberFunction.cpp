#include<bits/stdc++.h>
using namespace std;

class Employee{
    public:
        string id, name;
        int years;
        Employee(string id, string name, int years){
            this->id = id;
            this->name= name;
            this->years = years;
        }

        void work(); //prototype of outside member functions compulsory to declare inside the class of own
};

void Employee::work(){ //outside member functions
    cout << "Employee: " << this->id << " is working\n";
}

int main(){

    Employee *empPtr = new Employee("GFG123", "Mahesh Rathod", 1);

    cout<<"Employee Id: "<<empPtr->id<<endl;
    cout<<"Name : "<<empPtr->name<<endl;
    cout<<"Experience (in years): "<<empPtr->years<<endl;
    empPtr->work();
    cout<<"\n";
    return 0;
}