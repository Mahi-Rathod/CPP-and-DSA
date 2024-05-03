#include<iostream>
using namespace std;
/*Pointers are the variable that Stores Memory address of purticular Variable or value
    -pointers are declared using '*' before the variable.
    -pointers stores null value.(references should be initialize)
*/

// '&' used to get memory address while * is used to get value at that memory address.
int main(){
    int x=10;
    int *b; //this is a pointer variable;
    b = &x;
    cout<<"Address of X: "<<x<<" is "<<b<<endl;
    cout<<"Value at Addrees "<<b<<" is "<<*b<<endl;

    //look ahead in pointers
    int y = 10;
    int *ptr = &y;

    cout<<*ptr<<endl;

    y += 10;
    
    cout<<*ptr<<endl;

    *ptr += 40;
    cout<<*ptr<<endl;

    //size of pointer variable type 

    //pointer variables stores address and address are  of size 8 Byte Irespective of there data type.
    int *a;
    double *d;
    string *c;

    cout<<sizeof(a)<<endl;
    cout<<sizeof(d)<<endl;
    cout<<sizeof(c)<<endl;
    return 0;
}