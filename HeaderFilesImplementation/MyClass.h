#ifndef MYCLASS_H
#define MYCLASS_H
#include<iostream>
#include<vector>
using namespace std;

class MyClass{
    private:
        int someMember;

    public:
        void processVector(const vector<int> & vec);

        void processInteger(int value);
};

#endif