#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int GCD(int num1, int num2){
            if(num2==0){
                return num1;
            }
            else{
                return GCD(num2, num1 % num2);
            }
        }
        
        int LCM(int num1, int num2){
            return (num1*num2)/GCD(num1, num2);
        }
};

int main(){
    int num1, num2;
    cin>>num1>>num2;

    Solution s;
    cout<<s.LCM(num1, num2)<<endl;

    return 0;
}