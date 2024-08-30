#include<bits/stdc++.h>
using namespace std;

class Employee{
    public:
        string name, id;
        int years;

        Employee(string id):id(id){};
        
        Employee(string id, string name):Employee(id){
            this->name = name;
        }

        Employee(string id, string name, int years):Employee(id, name){
            this->years = years;
        }

        void getDetails(){
            cout<<"Employee Id: "<<id<<"\nName: "<<name<<"\nExperience: "<<years<<endl;
        }
};

int main(){
    Employee *emp = new Employee("GFG1234", "Sai", 1);
    emp->getDetails();
}