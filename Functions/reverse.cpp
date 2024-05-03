#include<iostream>
using namespace std;

int main(){
    int num, first, second, third, fourth;
    cout<<"Enter the Value: ";
    cin>>num; // scanf("%d", &num);
    first = num % 10;
    num = num/10;
    second = num % 10;
    num /=10;
    third = num % 10;
    num/=10;
    fourth = num%10;

    cout<<first<<second<<third<<fourth<<endl; //printf("%d%d%d%d\n",first,second,third,fourth);
    return 0;

}