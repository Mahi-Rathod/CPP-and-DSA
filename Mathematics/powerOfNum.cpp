#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int power(int num, int x){
            if(x == 0) return 1;

            int temp = power(num, x/2);
            temp = temp * temp;

            if(x % 2 == 0) return temp;
            else return temp*num;
        }

        int iterativePower(int num, int power){
            if(power == 0) return 1;
            int res = 1;
            while(power > 0){
                if(power % 2 != 0){
                    //bits is 1
                    res *= num;
                }
                // else{
                //     //bits is 0
                //     continue;
                // }
                num *= num;
                power /= 2;
            }
            return res;
        }
};



int main(){
    int num, power;
    cin>>num>>power;

    Solution s;
    cout<<s.power(num, power)<<endl;
    cout<<s.iterativePower(num, power)<<endl;

    return 0;
}