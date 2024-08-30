//Check whether the given number is power of two or not
/*
    ex.
        num = 4 
        yes  --------> 2^2 = 4

        num = 8
        yes  --------> 2^3 = 8

        num = 12
        No
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        //this approach takes O(log(num)) time complexitry
        bool isPowerOfTwo(int num){
            while(num !=1){
                if(num % 2 !=0) return 0;
                num>>=1;  // num = num / 2 
            }
            
            return true;
        }

        //optimized approach using bitwise operators O(1);
        
        bool isPowerOf2(int num){
            return num && (num&(num-1))==0;
        }
        /*
            there is one observation that when we bitwise or the number with number - 1.
            and if result is 0 then its power of 2 otherwise not.
            let num  = 15  ------>  1111
                num-1= 14  ------>  1110
                     = 14  ------>  1110   as 15 is not a power of 2

            let num  = 16  ------> 10000
                num-1= 15  ------> 01111
                     = 0   ------> 00000    as 16 is power of 2 therfore  16 & (15) = 0

            idea is bitwise or of number which is power of 2 with number less than 1 always gives 0.
        */
};


int main(){
    int num;
    cin>>num;

    Solution s;

    cout<<(s.isPowerOfTwo(num)?"YES":"NO")<<endl;
    cout<<(s.isPowerOf2(num)?"Yes":"No")<<endl;

    return 0;
}
