//member initializer List is new syntactic construct introduced in modern cpp, which allows us to write concise initialization code in constructor.

#include<bits/stdc++.h>
using namespace std;

class Employee{
    public:
        string id, name;
        int years;

        Employee(string id, string name, int years):id(id), name(name), years(years){

        };

        void getDetails(){
            cout<<"Employee Id: "<<id<<"\nName: "<<name<<"\nExperience: "<<years<<endl;
        }
};

int main(){
    Employee *emp = new Employee("GFG123", "Mahi", 1);
    emp->getDetails();
    return 0;
}